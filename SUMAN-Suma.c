#include <stdio.h>


int main()
{
    int t=10,a=0;
    while(t)
    {
        int sum=0;
        scanf("%d",&a);
        while(a)
        {
            sum+=a--;
        }
        printf("%d\n",sum); t--;
    }
    return 0;
}