#include <stdio.h>

void main()
{
    int i=1,sum=0,x,y,n;
    scanf("%d%d", &x, &y); //รับค่า x , y
    for(i=1; i++;) // ใช้ loop รับค่า
    {
        scanf("%d", &n);  // ใช้ loop รับค่า n
        if(n<=0)
        {
            break; //หยุด loop เมื่อค่าเป็น 0 หรือ ติดลบ
        }
        if(x<y){
            if(n>=x && n<=y)
            {
                sum = sum+n; //ผลรวม
            }
        }else if(x>y){
            if(n<=x && n>=y)
            {
                sum = sum+n; //ผลรวม
            }
        }
    }
    printf("%d", sum); //ผลรวม
}
