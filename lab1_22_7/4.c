#include<stdio.h>

void ROTATE_RIGHT(int* p1, int p2)
{
    int temp = *(p1+p2-1);
    for(int i = p2-1; i>=0;i--)
        *(p1+i) = *(p1+i-1);
    *p1 = temp;

}   

int  main()
{
    printf("Enter the size of the array : ");
    int n; scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : ");
    for(int i = 0;i <n ;i++)
        scanf("%d",&a[i]);
    printf("Enter value of q : ");
    int q;
    scanf("%d", &q);

    printf("Before Rotate : \n");
    for(int i = 0;i<n;i++)
        printf("%d ",a[i]);

    ROTATE_RIGHT(a, q);

    printf("\nAfter Rotate : \n");
    for(int i = 0;i<n;i++)
        printf("%d ",a[i]);

    printf("\n");
}