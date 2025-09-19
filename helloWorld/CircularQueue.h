#pragma once
#include<stdio.h>
//서큘러 큐, 크기 고정, 데이터 int
class CircularQueue
{
public:
	//큐 데이터 하나 추가
	void Enqueue(int InValue);
	//큐 데이터 하나 제거
	int Dequeue();

	//큐 내부를 모두 출력
	void TestPrintQueue();

	//큐 풀 확인
	inline bool IsFull() const
	{
		//Rear가 하나더 증가했을 때 front를 침범하냐 안 하냐로 가득참 체크
		return (Rear + 1) % MaxSize == Front;

	}
	//큐가 비어있는지 확인
	inline bool IsEmpty() const
	{
		//front가 배열내에 아무곳도 가리키지 않으면 비었다.
		return Front == Empty;
	}

	//큐의 front에 있는 값을 확인
	inline int Peek() const
	{
		if (IsEmpty())
		{
			printf("오류 : 큐가 비어있습니다.\n");
			return Empty;
		}
		return Data[Front];
	}
	//큐의 길이 출력
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

