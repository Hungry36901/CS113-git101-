#include <stdio.h>
#include <stdlib.h>
char name[20];   // กำหนด array ว่ามี 20 ตัว
char number[5];  // กำหนด array ว่ามี 5 ตัว
int main()
{
    // printf("%s\n", name);
    // scanf("%s", name , &i); จารย์ไมให้ใช้ถึง lab4
    // printf("Enter name : ");
    // gets(name);
    // fgets(name , 20 , stdin); fgets(ชื่อ , จำนวนarray , stdin)
    // getchar(char); ใส่ด้วยถ้ามีการรับ char
    // fgets(number , 5 , stdin);
    // int i = atoi(number); atoi คือ array to int 
    // long l = atol(); atol คือ array to long
    // double d = atof(); atof คือ array to foat
    // printf("number = %s , i = %d" , number , i); 

    // char = getcetchar();  เว้นว่างเป็น char 
    // getchar();
    // chr1 = getchar();
    // fgets(number , 5 , stdin);
    // int i = atoi(number);
    // putchar(100);
    // putchar('u');

    // int found = 0; 
    // float inExist = 0.0; 
    // char isOnline = '\0'; 
    // fgets(number , 5 ,stdin);
    // int i = atoi(number);
    // if (i > 0 && i < 11)
    // {
    //     printf("if = %d\n" , i > 0 && i < 11);
    // }else if (i <= 20 || !found){
    //     printf("else if\n");
    // }else{
    // }
    fgets(number , 5 ,stdin);
    int i = atoi(number);
    int count = 0;
    int j = atoi(number);
    // while (count < i){
    //     count++ * count - 5;    count++ ใช้ก่อนค่อยเพิ่ม
    //     ++count * count -5;     ++count เพิ่มก่อนค่อยใช้
    //     printf("count = %d\n" , count);
    //     count++;
    // }
    for (int j = 0; j < i; j++)
    {
        printf("j = %d\n" , j);
    }
}