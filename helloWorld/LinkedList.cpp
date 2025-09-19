//#include "LinkedList.h"
//#include<stdio.h>
//
//LinkedList::~LinkedList()
//{
//    ListNode* Current = Head;
//    while (Current)
//    {
//        ListNode* NodeToDelete = Current;
//        Current = Current->Next;
//        delete NodeToDelete;
//        NodeToDelete = nullptr;
//    }
//}
//
//void LinkedList::Add(int32 InData)
//{
//    //�����͸� ����Ʈ�� �ϳ� �߰��ϴ� �Լ�(����Ʈ�� �������� �߰�)
//    ListNode* NewNode = new ListNode(InData);   // �� ��� �ϳ� ����
//
//    if (IsEmpty())  // if(Head == nullptr)
//    {
//        // ����Ʈ�� �����.
//        Head = NewNode;         // �ϳ��ۿ� �����ϱ� �� ��尡 Head���� Tail�̴�.
//        Tail = NewNode;
//    }
//    else
//    {
//        // ����Ʈ�� �����Ͱ� �ִ�.
//        Tail->Next = NewNode;   // ������ ��� �ڿ� �� ��� �߰�.
//        Tail = NewNode;         // �� ��带 ���ο� ������ ���� ����
//    }
//    Size++;
//}
//
//void LinkedList::InsertAt(int32 InData, uint32 InPosition)
//{
//    if (InPosition > Size)
//    {
//        InPosition = Size;  // InPosion�� ������ ����� �ִ�ġ�� ����
//    }
//
//    if (InPosition == Size)
//    {
//        Add(InData); // ������ ��ġ�� �߰��ϴ� ���� �׳� Add�� ����.
//        return;
//    }
//    ListNode* NewNode = new ListNode(InData); //�� ��� ����
//
//    if (InPosition == 0)
//    {
//        //�� �տ� �߰��ϴ� ���
//        NewNode->Next = Head; //����� �ڿ� ���� ��� ���̰�
//        Head = NewNode; // �� ��带 �� ���� ����
//    }
//    else
//    {
//        // �߰��� �߰��ϴ� ���
//        ListNode* Prev = Head; // Prev��带 ã�� ���� Head���� �ϳ��� ����
//        const uint32 TargetIndex = InPosition - 1;
//        for (uint32 i = 0; i < TargetIndex; i++)
//        {
//            Prev = Prev->Next;
//        }
//        NewNode->Next = Prev->Next; // �� ����� ���� ��带, ���� ����� ���� ���� ����
//        Prev->Next = NewNode; //���� ����� ���� ��带 �� ���� ����
//        
//    }
//    Size++;
//}
//
//void LinkedList::Remove(int32 InData)
//{
//    if (IsEmpty())  // ��������� ������ ������ �׳� ������.
//        return;
//
//    ListNode* NodeToDelete = nullptr;   // ������ ���
//    ListNode* PrevNode = nullptr;       // ������ ����� �� ���
//
//    if (Head->Data == InData)
//    {
//        // ������ �����Ͱ� Head��
//        NodeToDelete = Head;    // ������ �����ͷ� Head�� ����
//        Head = Head->Next;      // Head�� Head�� ���� ���� ����
//        if (IsEmpty())
//        {
//            Tail = nullptr;     // Head�� ���� ��� ����Ʈ�� ��� �Ǹ� Tail�� nullptr�� ����
//        }
//    }
//    else
//    {
//        // ������ �����Ͱ� Head�� �ƴϴ�.
//        PrevNode = Head;        // PrevNode�� ã��. Head���� �����ؼ� ��� �������� �����ϸ� ã�´�.
//        while (PrevNode->Next != nullptr            // Prev�� ���� ��尡 ������� �ʴ�.
//            && PrevNode->Next->Data != InData)      // �׸��� Prev�� ���� ����� �����Ͱ� ã�� �����Ͱ� �ƴϴ�.
//        {
//            PrevNode = PrevNode->Next;
//        }
//
//        if (PrevNode->Next != nullptr)
//        {
//            // PrevNode�� ã�Ҵٸ�
//            NodeToDelete = PrevNode->Next;          // Prev�� ���� ��带 ������ ���� ����
//            PrevNode->Next = NodeToDelete->Next;    // Prev�� ���� ��带 ������ ����� ���� ���� ����
//            if (NodeToDelete == Tail)
//                Tail = PrevNode;        // ������ ��尡 ������ ���� Prev�� ���ο� ������ ���
//        }
//    }
//
//    if (NodeToDelete)   // if(NodeToDelete != nullptr)
//    {
//        delete NodeToDelete;        // NodeToDelete�� ã������ delete
//        NodeToDelete = nullptr;
//        Size--;                     // Size 1 ���̱�
//    }
//    else
//    {
//        // NodeToDelete�� �� ã������ ���� ���
//        printf("���� : %d���� ���� ��尡 �����ϴ�.\n", InData);
//    }
//}
//
//void LinkedList::RemoveAt(uint32 InPosition)
//{
//    if (InPosition >= Size)
//    {
//        printf("����: %u��ġ�� ������ ������ϴ�.(���� ũ��: %u)\n", InPosition, Size);
//        return;
//    }
//
//    ListNode* NodeToDelete = nullptr;   // ������ ����� �ּҰ� ����� ����
//    if (InPosition == 0)
//    {
//        //��带 ���� �ϴ� ���
//        NodeToDelete = Head;
//        Head = Head->Next;
//        if (IsEmpty())
//        {
//            Tail = nullptr; // ����Ʈ�� ��� �Ǹ� Tail�� nullptr�� ����
//        }
//    }
//    else
//    {
//        //��尡 �ƴ� ���
//        ListNode* Prev = Head;
//        const uint32 TargetIndex = InPosition - 1;
//        for (uint32 i = 0; i < TargetIndex; i++)
//        {
//            Prev = Prev->Next; // �ص���� �����ؼ� ������ ����� �� ��� ã��
//        }
//        NodeToDelete = Prev->Next; // ������ ���� ,�ճ���� ���� ���
//        Prev->Next = NodeToDelete->Next;  // �ճ���� ���� ����, ������ ����� ���� ���
//        if (NodeToDelete == Tail)
//        {
//            Tail = Prev; // ������ ��尡 Tail�̸�, ���� ��尡 �� Tail
//        }
//    }
//    delete NodeToDelete;
//    NodeToDelete = nullptr; //������ �ϴ� ����
//    Size--;
//}
//
//ListNode* LinkedList::Search(int32 InData) const
//{
//    ListNode* Result = nullptr;// ã�� ����� �� ������ ����
//    ListNode* Current = Head; // �ϳ��� ������ ������ ���� �ӽ� ����
//    while (Current != nullptr)// while(Current)
//    {
//        if (Current->Data == InData)
//        {
//            Result = Current; // ã������ Result�� ����ϰ� while ����
//            break;
//        }
//        Current = Current->Next;
//    }
//    return Result;
//}
//
//void LinkedList::PrintList() const
//{
//    if (IsEmpty())
//    {
//        printf("����Ʈ�� ����ֽ��ϴ�.\n");
//        return;
//    }
//
//    printf("����Ʈ(ũ��:%u) : ", Size);
//    ListNode* Current = Head;
//    while (Current) // Current != nullptr
//    {
//        printf("%d -> ", Current->Data);    // Head���� �ϳ��� ���
//        Current = Current->Next;
//    }
//    printf("nullptr\n");
//}
