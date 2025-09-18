#pragma once
#include <cstdint>

using int32 = int32_t;
using uint32 = uint32_t;

struct ListNode
{
	int32 Data = 0;				// �ϴ� �����ʹ� int32�� Ȯ��
	ListNode* Next = nullptr;	// ���� ����� �ּ�(nullptr�̸� ���� ��尡 ����)

	ListNode(int32 InData) : Data(InData) {};
};

class LinkedList
{
public:
	LinkedList() = default;

	// ������� ������ �����ϱ� ���� �ʿ�
	~LinkedList();

	// �����͸� ����Ʈ�� �ϳ� �߰��ϴ� �Լ�(����Ʈ�� �������� �߰�)
	void Add(int32 InData);

	// �����͸� Ư�� ��ġ�� �߰��ϴ� �Լ�(������ ����� �������� �߰�)
	void InsertAt(int32 InData, uint32 InPosition);

	// �����͸� �����ϴ� �Լ�(InData�� ���� ���� ������ ��带 �����ϴ� �Լ�. �ߺ� ����.)
	void Remove(int32 InData);

	// �����͸� �����ϴ� �Լ�(InPosition��°�� �����͸� �����ϴ� �Լ�. ���� ����� ������ ���.)
	void RemoveAt(uint32 InPosition);

	// InData�� ���� ��带 ã�� �����ϴ� �Լ�(������ nullptr ����)
	ListNode* Search(int32 InData) const;

	// ����Ʈ ������ ����ϴ� �Լ�
	void PrintList() const;


private:
	inline bool IsEmpty() const { return Head == nullptr; }

	// ����Ʈ�� ù��° ���
	ListNode* Head = nullptr;

	// ����Ʈ�� ������ ���
	ListNode* Tail = nullptr;

	// ����Ʈ�� �ִ� ����� ��
	uint32 Size = 0;
};

/*
Head: ����Ʈ�� ù ��° ��带 ����Ű�� �������Դϴ�.

Tail: ����Ʈ�� ������ ��带 ����Ű�� �������Դϴ�.

Current->Next->Data: ���� ����� ���� ��尡 ���� �����͸� �ǹ��մϴ�.
*/