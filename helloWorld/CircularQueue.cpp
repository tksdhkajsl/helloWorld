#include "CircularQueue.h"

void CircularQueue::Enqueue(int InValue)
{
    if (IsFull())
    {
        printf("오류 : 큐가 가득 찼습니다.\n");
        return;
    }
    if (IsEmpty()) //비었을 때 넣는 경우라면 Front도 0
    {
        Front = 0;
    }
    //Rear는 1증가, MaxSize를 넘어서면 다시 0으로
    Rear = (Rear + 1) % MaxSize;
    Data[Rear] = InValue;
}

int CircularQueue::Dequeue()
{
    if (IsEmpty())
    {
        printf("오류 : 큐가 비어있습니다.\n");
        return Empty;
    }
    int Result = Data[Front];

    if (Front != Rear)
    {
        //일반적인 상황
        Front = (Front + 1) % MaxSize;
    }
    else
    {
        //마지막 라인
        Front = Empty;
        Rear = Empty;
    }
    return Result;
}

void CircularQueue::TestPrintQueue()
{
    // Front부터 Rear까지 출력하기
    // 큐의 크기도 출력
    printf("저장된 큐의 값 : ");
    
        for (int i = 0; i < GetSize(); i++)
        {
            printf(" %d ", Data[(Front+i)%MaxSize]);
        }
   
   
    printf("\n큐의 크기는 %d 입니다.", GetSize());
}
