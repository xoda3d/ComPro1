#include <stdio.h>

void main() {
  int x;
  scanf("%d", &x); //รับค่า X
  if(x>0) { //เช็ค X ให้เป็นจำนวนเต็มบวก
    if(x==2 || x==3 || x==5 || x==7 || x==11) { // ค่าเฉพาะ
      printf("%d is prime", x);
    }else if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0 && x%11!=0) { //ถ้าหารด้วยตัวพวกนี้ไม่ลงตัวแสดงว่าเป็นค่าเฉพาะ
      printf("%d is prime", x);
     }else { //แต่ถ้าหารลงตัวจะไม่เป็นค่าเฉพาะ
      printf("%d is not prime", x);
     }
  }else {
    printf("");
  }
}
