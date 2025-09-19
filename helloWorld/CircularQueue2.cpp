#include "CircularQueue2.h"

void CircularQueue2::Enqueue(int InValue)
{
	if (IsFull())
	{
		printf("����: ť�� ���� á���ϴ�!\n");
		return;
	}

	if (IsEmpty())	// ����� �� �ִ� ����� Front�� 0���� ����
	{
		Front = 0;
	}

	Rear = (Rear + 1) % MaxSize;	// Rear�� 1����. MaxSize�� �Ѿ�� �ٽ� 0���� 
	Data[Rear] = InValue;

	TestPrintQueue();
}

int CircularQueue2::Dequeue()
{
	if (IsEmpty())
	{
		printf("����: ť�� ����ֽ��ϴ�!\n");
		return Empty;
	}
	int Result = Data[Front];

	if (Front != Rear)
	{
		// �Ϲ����� ��Ȳ
		Front = (Front + 1) % MaxSize;
	}
	else
	{
		// ���������� 1���� ���� ��Ȳ
		Front = Empty;
		Rear = Empty;
	}

	TestPrintQueue();
	return Result;
}

void CircularQueue2::TestPrintQueue()
{
	// Front���� Rear���� ����ϱ�
	printf("Queue : ");
	for (int i = 0; i < GetSize(); i++)
	{
		printf("[%d] ", Data[(Front + i) % MaxSize]);
	}
	printf("\n");

	// ť�� ũ�⵵ ���
	printf("Queue Size : %d\n", GetSize());
}
