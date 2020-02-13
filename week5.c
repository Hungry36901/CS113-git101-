#include <stdio.h>
int main()
{
    int x = 100; //เลขฐานสิบ
    int q = 0144; //เลขฐานแปป
    int w = 0x64; //เลขฐานสิบหก
    // printf("x = %d\n" , x);
    // printf("reference of x = %lu\n" , &x);
    // printf("reference of x = %p\n", &x);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6}; สมาชิก 6 ตัว
    // int number[100]; สมาชิก 100 ตัว
    // int number[100] = {1,2,3,4,5,6}; สมาชิก 6 ตัว
    // number[1000] = 200;
    // printf("index 1 = %d" , number[1]);
    // printf("reference of &number[1] = %p\n", &number[1]);
    // printf("reference of &number[0] = %p\n", &number[0]);   
    // printf("reference of number = %p\n", &number + 1);
    // printf("reference of number = %p\n", &number + 1);
    // printf("index 1 = %d" , number[1000]); 

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // int *ptr = &x; ประกาศ pointer ต้องมี *
    // int *arrPtr;
    // arrPtr = number; เรียกใช้ไม่ต้องมี *
    // arrPtr += 3; ค่าจะเปลี่ยนจากการบวก
    // *arrPtr += 3; ค่าที่เปลี่ยนจะกลับมาที่addressเดิม
    // printf("arrPtr = %p , *arrPtr = %d" , arrPtr , *arrPtr);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // for (int *ptr = number; ptr < &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n" , ptr , *ptr);
    // }
    // printf("\n");
    // int *ptr2 = number;
    // for(int i = 0; i< 5; i++)
    // {
    //     printf("[%p] = %d\n" , ptr2 + i , *(ptr2 + i)); 
    // }
    
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n') 
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input; *cPtr != '\0' ;cPtr++)
    // {
    //     printf("%c\n" , *cPtr);
    // }

    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s", &i, &c, s); //รับ array ไม่ต้องมี &
    printf("%d--%c--%s", i, c, s);
    
}