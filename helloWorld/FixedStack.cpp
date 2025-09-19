#include "FixedStack.h"
#include <stdio.h>

void FixedStack::Push(int InValue)
{
	if (IsFull())
	{
		printf("Error : Stack is Full!!\n");
		return;
	}
	TopIndex++; // Top��ġ�� ���� ��Ű��
	Data[TopIndex] = InValue;	// �� ��ġ�� ���� �ֱ�
	
}

int FixedStack::Pop()
{
	if(IsEmpty())
	{
		printf("����: ������ ����ֽ��ϴ�! (Stack Underflow)\n");
		return Empty;
	}
	int Result = Data[TopIndex];
	TopIndex--;
	return Result;
}

int FixedStack::Top() const
{
	if (IsEmpty())
	{
		printf("����: ������ ����ֽ��ϴ�!");
		return Empty;	// ���� ���� �ƴ϶� ���������� �츮�� ������ ���� �����ϴ� ��
	}
	return Data[TopIndex];
}
