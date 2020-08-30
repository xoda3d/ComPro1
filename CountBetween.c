#include <stdio.h>

void main()
{
    int i=1,count=0,x,y,n;
    scanf("%d%d", &x, &y);
    for(i=1; i++;)
    {
        scanf("%d", &n);
        if(n<0)
        {
            break;
        }
        if(x<=y){
            if(n>=x && n<=y)
            {
                count++;
            }
        }else if(x>y){
            if(n<=x && n>=y)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}
