#include <stdio.h>
#include "TestMath.h"


void PrintHelloWorld()
{
    printf("Hello World\n");
    return; //������ �ϸ� ������ ���������� �� ���� ��� 
}

int Sum(int Test1, int Test2) // int Sum(int, int); �� ������ �����ߴ�.
{
    if (Test1 == -1)
    {
        return 0;
    }
    return Test1 + Test2;
}

float Sum(float Test1, float Test2)
{
     return Test1 + Test2;    
}

int Multiply(int Number1, int Number2)
{
    return Number1 * Number2;
}

int Sub(int Number1, int Number2)
{
    return Number1 - Number2;
}

int Divide(int Number1, int Number2)
{
    return Number1 / Number2;
}

int TestRecurcive(int Number)
{
    if (Number < 2)
    {
        return 1;
    }
    printf("Recurcive : %d\n ",Number);
        return TestRecurcive(Number - 1);
}

