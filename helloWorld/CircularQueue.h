#pragma once
#include<stdio.h>
//��ŧ�� ť, ũ�� ����, ������ int
class CircularQueue
{
public:
	//ť ������ �ϳ� �߰�
	void Enqueue(int InValue);
	//ť ������ �ϳ� ����
	int Dequeue();

	//ť ���θ� ��� ���
	void TestPrintQueue();

	//ť Ǯ Ȯ��
	inline bool IsFull() const
	{
		//Rear�� �ϳ��� �������� �� front�� ħ���ϳ� �� �ϳķ� ������ üũ
		return (Rear + 1) % MaxSize == Front;

	}
	//ť�� ����ִ��� Ȯ��
	inline bool IsEmpty() const
	{
		//front�� �迭���� �ƹ����� ����Ű�� ������ �����.
		return Front == Empty;
	}

	//ť�� front�� �ִ� ���� Ȯ��
	inline int Peek() const
	{
		if (IsEmpty())
		{
			printf("���� : ť�� ����ֽ��ϴ�.\n");
			return Empty;
		}
		return Data[Front];
	}
	//ť�� ���� ���
	inline int GetSize() const
	{
		return (((Rear + MaxSize) - Front) % MaxSize) + 1;
	}

private:
	static constexpr int Empty = -1;
	static constexpr unsigned int MaxSize = 10;

	int Front = Empty;
	int Rear = Empty;
	int Data[MaxSize];
};

