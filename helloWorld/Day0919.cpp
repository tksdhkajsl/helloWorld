#include "Day0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"
#include <stdio.h>
#include <iostream>

void Day0919::TestStack()
{
	FixedStack Stack;

	// 1.초기 상태 테스트
	//	스택이 비었는지 확인해보기(IsEmpty와 GetSize 사용하고 printf로 출력하기)
	
	Stack.Pop();
	// 2. Push 테스트
	//	데이터 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	//	데이터 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	//	데이터 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	Stack.Push(20);
	printf("데이터[%d] 값 : %d 스택 크기 : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	Stack.Push(30);
	printf("데이터[%d] 값 : %d 스택 크기 : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	Stack.Push(40);
	printf("데이터[%d] 값 : %d 스택 크기 : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	// 3. Pop 테스트
	// Top만 볼 수 있다.
	//	데이터 하나 빼고 뺀 값 출력해보기, 스탟의 남은 Top 위치값과 스택 크기 출력해보기
	Stack.Pop();
	printf("데이터 값 : %d  스택 크기 : %d\n", Stack.Top(), Stack.GetSize());
	
	
	// 4. 스택 오버플로우 테스트
	//	스택 가득 채우고 한번 더 넣어 보기
	for (int i = 1; i < 11; i++)
	{
		Stack.Push(i);
		printf("데이터[%d] 값 : %d 스택 크기 : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	}
		
	// 5. 스택 언더플로우 테스트
	//	스택 다 비우고 한번 더 빼보기
	for (int i = 0; i < 11; i++)
	{
		Stack.Pop();
		printf("데이터[%d] 값 : %d 스택 크기 : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	}

}

void Day0919::TestQueue()
{
	CircularQueue Queue;
	int InData = 0;
	
	int InputMenu = 0;
	//메뉴 만들기
	while (true)
	{
		printf("큐 메뉴를 입력 하세요.\n1번 : Enqueue\n2번 : Dequeue\n3번 : Peek\n4번 : TestPrint\n5번 : 종료\n ");
		std::cin >> InputMenu;
		switch (InputMenu)
		{
		case 1: //1. Enqueue
			printf("큐에 넣을 값을 입력하세요. : ");
			std::cin >> InData;
			Queue.Enqueue(InData);
			printf("입력한 %d 값을 큐에 저장하였습니다.\n", InData);
			continue;
		case 2: //2. Dequeue
			Queue.Dequeue();
			printf("큐를 삭제하였습니다.\n ");
			continue;
		case 3: //3. Peek
			 
			printf("현재 첫 번째 큐의 값은 %d 입니다.\n ", Queue.Peek());
			continue;
		case 4: //4. TestPrintQueue
			Queue.TestPrintQueue();
			continue;
		case 5:
			printf("시스템을 종료합니다.\n");
			break;
			
		default:
			printf("메뉴를 잘못입력하였습니다. 다시 입력 해주세요.");
			continue;

		}
		break;	
	}
	// 2. Circular Queue2 만들기
	//		생성자에서 파라메터를 받아 크기를 조절 가능하게 만들기


}

void Day0919::TestQueue2()
{
}

void Day0919::TestSwallowCopy()
{
	// 얕은 복사 : 복사를 할 때 완전한 사본을 만드는 것이 아니라 주소만 복사하는 복사
	CircularQueue2 a(5);
	a.Enqueue(10);
	a.Enqueue(20);

	CircularQueue2 b(a);	// 복사 생성자로 a의 사본을 만든 것
	CircularQueue2 c = a;	// 대입 연산자로 a의 사본을 만든 것

	a.Enqueue(30);

	printf("a\n");
	a.TestPrintQueue();
	printf("\nb\n");
	b.TestPrintQueue();
	printf("\nc\n");
	c.TestPrintQueue();


}
