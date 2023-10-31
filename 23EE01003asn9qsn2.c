 #include <stdio.h>

void swap(int ar1[],int ar2[], int n);

int main(void)
{
    int n;
    printf("Enter Size of Array");
    scanf("%d",&n);

    int ar1[n],ar2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element[%d] for both arrays :",i);
        scanf("%d %d",&ar1[i],&ar2[i]);
    }

    swap(ar1,ar2,n);

    printf("The Swapped Arrays\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n",ar1[i],ar2[i]);
    }

    return 0;
}

void swap(int ar1[], int ar2[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int *a = &ar1[i];
        int *b = &ar2[i];
        int temp = ar1[i];

        *a = ar2[i];
        *b = temp;
    }
}