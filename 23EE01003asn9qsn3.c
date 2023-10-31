#include <stdio.h>

int search(int ar[], int n, int ele);

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

    int ele;
    printf("Enter Element to Search :");
    scanf("%d",&ele);

    int ans = search(ar,n,ele);

    if (ans != -1)
        printf("The Element %d is found at position %d\n",ele,ans);
    else
        printf("The Element is not Present\n");
}

int search(int ar[], int n, int ele)
{
    int *ptr = ar;
    for (int i = 0; i < n; i++)
    {
        if (*ptr == ele)
        {
            return i+1;
            break;
        }
        else
            ptr++;
    }
    return -1;
}