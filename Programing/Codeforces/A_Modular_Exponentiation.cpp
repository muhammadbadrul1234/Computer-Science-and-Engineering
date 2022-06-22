#include<stdio.h>
#include<math.h>
int main()
{
    int a, n, m, ans;
    scanf("%d\n%d", &n, &m);

    a=pow(2,n);
    ans=m%a;
    printf("%d",ans);
    return 0;
}

