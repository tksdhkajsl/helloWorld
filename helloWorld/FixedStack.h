#pragma once
//�����ʹ� int�� ���� ũ�Ⱑ ������ ����
class FixedStack
{
public:
	// ���ÿ� InValue�� �߰��ϴ� �Լ�
	void Push(int InValue);

	// ������ Top ��ġ�� �ִ� ���� ������ �Լ�
	int Pop();

	// Top�� �ִ� ���� Ȯ���� �ϴ� �Լ�. �������� �ʴ´�.(Peek�̶�� ��)
	int Top() const;

	// ������ ���� á���� Ȯ���ϴ� �Լ�. Stack Overflow ����
	inline bool IsFull() const
	{
		return TopIndex == (StackCapacity - 1);
	}

	// ������ ����ִ��� Ȯ���ϴ� �Լ�. Stack Underflow ������ ���� ���.
	inline bool IsEmpty() const
	{
		return TopIndex == Empty;
	}

	// ������ ���� ũ�⸦ ��ȯ�ϴ� �Լ�.(���� ���� �ִ� ������ ����)
	inline int GetSize() const
	{
		return TopIndex + 1;
	}

private:
	// ������ ��ü ũ��
	static constexpr int StackCapacity = 10;

	// ������ ������� ǥ���ϱ� ���� �ε����� ���
	static constexpr int Empty = -1;
	//���� Top ��ġ Empty�� ����ִ�.
	int TopIndex = Empty;
	int Data[StackCapacity];
};

