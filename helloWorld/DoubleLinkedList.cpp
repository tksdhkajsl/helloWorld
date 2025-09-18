#include "DoubleLinkedList.h"

DoubleLinkedList::~DoubleLinkedList()
{
}

void DoubleLinkedList::DoubleAdd(int32 InData)
{
    //�����͸� ����Ʈ�� �ϳ� �߰��ϴ� �Լ�(����Ʈ�� �������� �߰�)
    DoubleListNode* NewNode = new DoubleListNode(InData);   // �� ��� �ϳ� ����

    if (IsEmpty())  // if(Head == nullptr)
    {
        // ����Ʈ�� �����.
        Head = NewNode;         // �ϳ��ۿ� �����ϱ� �� ��尡 Head���� Tail�̴�.
        Head->Prev = NewNode;         // �ϳ��ۿ� �����ϱ� �� ��尡 Head���� Tail�̴�.
        Tail = NewNode;
    }
    else
    {
        // ����Ʈ�� �����Ͱ� �ִ�.
        Tail->Prev = Tail;
        Tail->Next = NewNode;   // ������ ��� �ڿ� �� ��� �߰�.
        Tail = NewNode;         // �� ��带 ���ο� ������ ���� ����
        
    }
    Size++;
}

void DoubleLinkedList::DoubleInsertAt(int32 InData, uint32_t InPosition)
{
}



void DoubleLinkedList::DoubleRemove(int32 InData)
{
}

void DoubleLinkedList::DoubleRemoveAt(int32 InPosition)
{
}

DoubleListNode* DoubleLinkedList::Search(int32 InData) const
{
    return nullptr;
}

void DoubleLinkedList::DoublePrintList() const
{
}
