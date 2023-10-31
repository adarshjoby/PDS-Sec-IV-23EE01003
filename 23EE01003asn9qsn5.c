#include <stdio.h>

int sum(int ar[], int n);

int main(void)
{
    int n;
    printf("Enter Size of Array :");
    scanf("%d",&n);

    int ar[n];
    printf("Enter Elements of the Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int ans = sum(ar,n);

    printf("The Sum of Elements is %d\n",ans);
    return 0;
}

int sum(int ar[], int n)
{
    int *ptr = ar;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }
    return sum;
}