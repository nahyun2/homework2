#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    printf("[----- [�ֳ���] [2023041039] -----]\n");
    printf("Size of char: %ld byte\n",sizeof(charType)); //���� chartype�� ũ�⸦ ����Ʈ ������ ���. �ڷ����� char�̱� ������ 1�̴�.
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //���� integertype�� ũ�⸦ ����Ʈ ������ ���. �ڷ����� int�̱� ������ 4�̴�.
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //���� floattype�� ũ�⸦ ����Ʈ ������ ���. �ڷ����� float�̱� ������ 4�̴�.
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //���� doubletype�� ũ�⸦ ����Ʈ ������ ���. �ڷ����� double�̱� ������ 8�̴�.
    printf("-----------------------------------------\n"); 
    printf("Size of char: %ld byte\n",sizeof(char)); //�ڷ��� char�� ũ�⸦ ����Ʈ ������ ���.
    printf("Size of int: %ld bytes\n",sizeof(int)); //�ڷ��� int�� ũ�⸦ ����Ʈ ������ ���.
    printf("Size of float: %ld bytes\n",sizeof(float)); //�ڷ��� float�� ũ�⸦ ����Ʈ ������ ���.
    printf("Size of double: %ld bytes\n",sizeof(double)); //�ڷ��� double�� ũ�⸦ ����Ʈ ������ ���.
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char �������� ũ�⸦ ����Ʈ ������ ���.
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int �������� ũ�⸦ ����Ʈ ������ ���.
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float �������� ũ�⸦ ����Ʈ ������ ���.
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double �������� ũ�⸦ ����Ʈ ������ ���.
    // �����ʹ� �ּҰ��� �����ϱ� ������ ����Ű�� ������ �ڷ����� �ٸ����� �������� ũ�Ⱑ ����.
    return 0;
}