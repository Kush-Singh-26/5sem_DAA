#include<stdio.h>

int main()
{
    printf("Enter the number of values in the array : ");
    int n; scanf("%d",&n);
    int a[n];
    int freq[n];

    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
        freq[i] = -1;
    }


    for(int i =0;i<n;i++)
    {
        int count = 1;
        if(freq[i] != -1) continue;
        for(int j =i+1;j<n;j++)
        {
            if(a[j] == a[i])
            {
                    count++;
                    freq[j]=0;
             
            }
            freq[i] = count;
        }
    }

    int dup = 0;
    int maxfreq = 0;
    int rep = a[0];

    for(int i =0;i<n;i++)
    {
        if(freq[i] > 1)
            dup++;
        if(freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            rep = a[i];
        }
    }

    printf("Total number of duplicate values = %d\n",dup);
    printf("Most repeating element = %d\n",rep);
    
}