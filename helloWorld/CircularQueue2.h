#pragma once
#include <stdio.h>

// ��ŧ�� ť. ũ�� ����. �����ʹ� int
class CircularQueue2
{
public:
	CircularQueue2(unsigned int InSize = 5)
		: MaxSize(InSize == 0 ? MinSize : InSize)
	{
		if (InSize == 0)
		{
			printf("��û�� ũ�� 0�� ��ȿ���� �����Ƿ� �ּ�ũ���� %u�� �����߽��ϴ�.\n", MinSize);
		}
		Data = new int[MaxSize];

	
	}
	~CircularQueue2()
	{
		if (Data != nullptr)
		{
			delete[] Data;
			Data = nullptr;
		}
	}
	//���� �����ڴ� ���� ���� ����
	//CircularQueue2(const CircularQueue2&) = delete;
	////���Կ����ڰ� ����
	//CircularQueue2& operator=(const CircularQueue2&) = delete;
	
	// ť�� ������ �ϳ� �߰�
	void Enqueue(int InValue);
	// ť���� ������ �ϳ� ����
	int Dequeue();

	// �����ϰ� �׽�Ʈ��. ť ���θ� ��� ���
	void TestPrintQueue();

	// ť�� ���� á���� Ȯ���ϴ� �Լ�
	inline bool IsFull() const
	{
		// Rear�� �ϳ� �� �������� �� Front�� ħ���ϳ� ���ķ� �������� üũ
		return (Rear + 1) % MaxSize == Front;
	}
	// ť�� ������� Ȯ���ϴ� �Լ�
	inline bool IsEmpty() const
	{
		return Front == Empty;	// Front�� �迭�� �ƹ����� ����Ű�� ������ ����ٰ� �Ǵ�
	}
	// ť�� Front�� �ִ� ���� Ȯ���ϴ� �Լ�
	inline int Peek() const
	{
		if (IsEmpty())
		{
			printf("����: ť�� ����ֽ��ϴ�.\n");
			return Empty;
		}
		return Data[Front];
	}
	// ť�� ���̸� ����ϴ� �Լ�
	inline int GetSize() const
	{
		return ((Rear + MaxSize) - Front) % MaxSize + 1;
	}

private:
	static constexpr int Empty = -1;
	static constexpr unsigned int MinSize = 1;

	unsigned int MaxSize = 1;

	int Front = Empty;
	int Rear = Empty;
	int* Data = nullptr;
};

