#include "DoubleLinkedList.h"

DoubleLinkedList::~DoubleLinkedList()
{
}

void DoubleLinkedList::DoubleAdd(int32 InData)
{
    //데이터를 리스트에 하나 추가하는 함수(리스트의 마지막에 추가)
    DoubleListNode* NewNode = new DoubleListNode(InData);   // 새 노드 하나 생성

    if (IsEmpty())  // if(Head == nullptr)
    {
        // 리스트가 비었다.
        Head = NewNode;         // 하나밖에 없으니까 새 노드가 Head이자 Tail이다.
        Head->Prev = NewNode;         // 하나밖에 없으니까 새 노드가 Head이자 Tail이다.
        Tail = NewNode;
    }
    else
    {
        // 리스트에 데이터가 있다.
        Tail->Prev = Tail;
        Tail->Next = NewNode;   // 마지막 노드 뒤에 새 노드 추가.
        Tail = NewNode;         // 새 노드를 새로운 마지막 노드로 설정
        
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
