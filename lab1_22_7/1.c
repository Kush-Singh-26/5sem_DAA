#include <stdio.h>
#include <limits.h> 
int main()
{
    printf("Enter the size of the array : ");
    int n;
    scanf("%d", &n);

    int a[n];
    printf("Enter the values of the array :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int l = INT_MIN, sl = INT_MIN; 
    int s = INT_MAX, ss = INT_MAX; 

    for (int i = 0; i < n; i++)
    {
        if (a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        else if (a[i] > sl && a[i] != l)
        {
            sl = a[i];
        }

        if (a[i] < s)
        {
            ss = s;
            s = a[i];
        }
        else if (a[i] < ss && a[i] != s)
        {
            ss = a[i];
        }
    }

    if (sl == INT_MIN) {
        printf("No distinct second largest element found.\n");
    } else {
        printf("Second Largest Number is: %d\n", sl);
    }

    if (ss == INT_MAX) {
         printf("No distinct second smallest element found.\n");
    } else {
        printf("Second Smallest Number is: %d\n", ss);
    }
    
    return 0;
}