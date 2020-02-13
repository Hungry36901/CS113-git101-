#include <stdio.h> 
int addTen(int x) //ประกาศฟังชันก์
{ 
    x += 10;
    return x;
}
int addTwenty(); //ประกาศฟังชันก์แต่ยังไม่ได้ให้ฟังชันก์มัน
int x = 2000;
int main()
{
    int x = 90; 
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);
    printf("addTwenty in main = %d\n" , addTwenty()); //ใช้ฟังก์ชัน
}

int addTwenty() //กสรให้ค่าฟังชันก์ที่ปะกาศไว้แล้ว
{
    x += 20;
    return x;
}
