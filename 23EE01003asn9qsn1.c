 #include <stdio.h>

void swap(int *,int *);

int main(void)
{
    int a,b;
    printf("Enter Two Numbers (a and b) :");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The Swapped Numbers\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}

void swap(int *x, int *y)
{
    int a = *x;
    int b = *y;
    *x = b;
    *y = a;
}