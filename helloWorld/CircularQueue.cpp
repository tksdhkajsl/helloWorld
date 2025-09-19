#include "CircularQueue.h"

void CircularQueue::Enqueue(int InValue)
{
    if (IsFull())
    {
        printf("���� : ť�� ���� á���ϴ�.\n");
        return;
    }
    if (IsEmpty()) //����� �� �ִ� ����� Front�� 0
    {
        Front = 0;
    }
    //Rear�� 1����, MaxSize�� �Ѿ�� �ٽ� 0����
    Rear = (Rear + 1) % MaxSize;
    Data[Rear] = InValue;
}

int CircularQueue::Dequeue()
{
    if (IsEmpty())
    {
        printf("���� : ť�� ����ֽ��ϴ�.\n");
        return Empty;
    }
    int Result = Data[Front];

    if (Front != Rear)
    {
        //�Ϲ����� ��Ȳ
        Front = (Front + 1) % MaxSize;
    }
    else
    {
        //������ ����
        Front = Empty;
        Rear = Empty;
    }
    return Result;
}

void CircularQueue::TestPrintQueue()
{
    // Front���� Rear���� ����ϱ�
    // ť�� ũ�⵵ ���
    printf("����� ť�� �� : ");
    
        for (int i = 0; i < GetSize(); i++)
        {
            printf(" %d ", Data[(Front+i)%MaxSize]);
        }
   
   
    printf("\nť�� ũ��� %d �Դϴ�.", GetSize());
}
