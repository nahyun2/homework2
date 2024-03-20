# homework2
lab2-1, lab2-2
#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    printf("[----- [최나현] [2023041039] -----]\n");
    printf("Size of char: %ld byte\n",sizeof(charType)); //변수 chartype의 크기를 바이트 단위로 출력. 자료형이 char이기 때문에 1이다.
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //변수 integertype의 크기를 바이트 단위로 출력. 자료형이 int이기 때문에 4이다.
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //변수 floattype의 크기를 바이트 단위로 출력. 자료형이 float이기 때문에 4이다.
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //변수 doubletype의 크기를 바이트 단위로 출력. 자료형이 double이기 때문에 8이다.
    printf("-----------------------------------------\n"); 
    printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char의 크기를 바이트 단위로 출력.
    printf("Size of int: %ld bytes\n",sizeof(int)); //자료형 int의 크기를 바이트 단위로 출력.
    printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float의 크기를 바이트 단위로 출력.
    printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double의 크기를 바이트 단위로 출력.
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char 포인터의 크기를 바이트 단위로 출력.
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int 포인터의 크기를 바이트 단위로 출력.
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float 포인터의 크기를 바이트 단위로 출력.
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double 포인터의 크기를 바이트 단위로 출력.
    // 포인터는 주소값을 저장하기 때문에 가리키는 변수의 자료형이 다르더라도 포인터의 크기가 같다.
    return 0;
}
