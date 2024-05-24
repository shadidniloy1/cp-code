#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[100001];
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i] <= a[j])
                {
                    continue;
                }
                else
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int sum = 0;
        for(int i=n-2; i>1; i--)
        {
            int cnt = a[i]+a[i-1];
            sum = sum + cnt;
        }
        int total = sum + a[0] + a[n-1];
        printf("%d\n", total);
    }
}
