#include <stdio.h>

void main() {
    int a,b,c,d,sA,sB,sC,sD;
    scanf("%d%d%d%d", &a,&b,&c,&d); //รับค่าคะแนนที่ต้องใช้
    scanf("%d%d%d%d", &sA,&sB,&sC,&sD); //คะแนนที่ทำได้
    if(sA>=a){
        printf("1 ");
    }
    if(sB>=b){
        printf("2 ");
    }
    if(sC>=c){
        printf("3 ");
    }
    if(sD>=d){
        printf("4");
    }
}
