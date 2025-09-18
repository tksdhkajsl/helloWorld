#pragma once
#include <cstdint>
using uint32 = uint32_t;
using int32 = int32_t;
struct DoubleListNode
{
	int32 Data = 0;
	DoubleListNode* Next = nullptr;	// ���� ����� �ּ�(nullptr�̸� ���� ��尡 ����)
	DoubleListNode* Prev = nullptr;	// ���� ����� �ּ�(nullptr�̸� ���� ��尡 ����)

	DoubleListNode(int32 InData) : Data(InData) {};
};
class DoubleLinkedList
{
public:
	DoubleLinkedList() = default;

	// ������� ������ �����ϱ� ���� �ʿ�
	~DoubleLinkedList();

	// �����͸� ����Ʈ�� �ϳ� �߰��ϴ� �Լ�(����Ʈ�� �������� �߰�)
	void DoubleAdd(int32 InData);

	// �����͸� Ư�� ��ġ�� �߰��ϴ� �Լ�(������ ����� �������� �߰�)
	void DoubleInsertAt(int32 InData, uint32_t InPosition);

	// �����͸� �����ϴ� �Լ�(InData�� ���� ���� ������ ��带 �����ϴ� �Լ�. �ߺ� ����.)
	void DoubleRemove(int32 InData);

	// �����͸� �����ϴ� �Լ�(InPosition��°�� �����͸� �����ϴ� �Լ�. ���� ����� ������ ���.)
	void DoubleRemoveAt(int32 InPosition);

	// InData�� ���� ��带 ã�� �����ϴ� �Լ�(������ nullptr ����)
	DoubleListNode* Search(int32 InData) const;

	// ����Ʈ ������ ����ϴ� �Լ�
	void DoublePrintList() const;


private:
	inline bool IsEmpty() const { return Head == nullptr; }

	// ����Ʈ�� ù��° ���
	DoubleListNode* Head = nullptr;
	

	// ����Ʈ�� ������ ���
	DoubleListNode* Tail = nullptr;
	

	// ����Ʈ�� �ִ� ����� ��
	uint32 Size = 0;
};

