#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[100001];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int total=0;
        for(int i=0; i<n; i++)
        {
            int div = arr[i]/2;
            int rem = arr[i]%2;
            int sum = div + rem;
            total = total+sum;
        }
        printf("%d\n", total);
    }
}
