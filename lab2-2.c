#include <stdio.h>
int main()
{
    int i;
    int *ptr;
    int **dptr;
    i = 1234;
    printf("[----- [최나현] [2023041039] -----]\n");
    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i); // 변수 i의 값을 출력
    printf("address of i == %p\n", &i); // i의 주소 출력
    printf("value of ptr == %p\n", ptr); // 포인터 ptr의 값 출력(쓰레기값)
    printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소 출력
    
    ptr = &i; /* ptr is now holding the address of i */
    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); // 변수 i의 값을 출력
    printf("address of i == %p\n", &i); // 변수 i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr이 가리키고 있는 변수의 주소 출력(i의 주소) 
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소(i)의 값 출력
    
    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n"); 
    printf("value of i == %d\n", i); // 변수 i의 값을 출력
    printf("address of i == %p\n", &i); // 변수 i의 주소 출력
    printf("value of ptr == %p\n", ptr); // ptr이 가리키는 변수의 주소 출력(i의 주소)
    printf("address of ptr == %p\n", &ptr); // ptr의 주소 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소 출력(i)의 값 출력
    printf("value of dptr == %p\n", dptr); // dptr이 가리키는 주소 출력(ptr의 주소)
    printf("address of dptr == %p\n", &dptr); // dptr의 주소 출력
    printf("value of *dptr == %p\n", *dptr); // dptr이 가리키는 주소의 값 출력(ptr의 값이므로 i의 주소)
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 주소의 값이 가리키는 값 출력(ptr이 가리키는 i의 값)

    *ptr = 7777; /* changing the value of *ptr */ //ptr이 가리키는 변수의 값을 변경
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); // i는 ptr이 가리키는 변수였으므로 변경된 값 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 주소의 값 출력(i의 값)
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소의 값이 가리키는 값 출력(ptr이 가리키는 i의 값)
    
    **dptr = 8888; /* changing the value of **dptr */ //dptr이 가리키는 주소의 값이 가리키는 값을 변경, 최종적으로 i의 값 변화
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); // i는 dptr이 가리키는 주소의 값이 가리키고 있으므로 변경된 값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 주소의 값 출력(i)
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소의 가리키는 값 출력(ptr이 가리키는 i의 값)
    return 0;
}
