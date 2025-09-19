#include "Day0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"
#include <stdio.h>
#include <iostream>

void Day0919::TestStack()
{
	FixedStack Stack;

	// 1.�ʱ� ���� �׽�Ʈ
	//	������ ������� Ȯ���غ���(IsEmpty�� GetSize ����ϰ� printf�� ����ϱ�)
	
	Stack.Pop();
	// 2. Push �׽�Ʈ
	//	������ �ְ� Top ��ġ�� �ִ� ���� ���� ũ�� ����غ���
	//	������ �ְ� Top ��ġ�� �ִ� ���� ���� ũ�� ����غ���
	//	������ �ְ� Top ��ġ�� �ִ� ���� ���� ũ�� ����غ���
	Stack.Push(20);
	printf("������[%d] �� : %d ���� ũ�� : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	Stack.Push(30);
	printf("������[%d] �� : %d ���� ũ�� : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	Stack.Push(40);
	printf("������[%d] �� : %d ���� ũ�� : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	// 3. Pop �׽�Ʈ
	// Top�� �� �� �ִ�.
	//	������ �ϳ� ���� �� �� ����غ���, ������ ���� Top ��ġ���� ���� ũ�� ����غ���
	Stack.Pop();
	printf("������ �� : %d  ���� ũ�� : %d\n", Stack.Top(), Stack.GetSize());
	
	
	// 4. ���� �����÷ο� �׽�Ʈ
	//	���� ���� ä��� �ѹ� �� �־� ����
	for (int i = 1; i < 11; i++)
	{
		Stack.Push(i);
		printf("������[%d] �� : %d ���� ũ�� : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	}
		
	// 5. ���� ����÷ο� �׽�Ʈ
	//	���� �� ���� �ѹ� �� ������
	for (int i = 0; i < 11; i++)
	{
		Stack.Pop();
		printf("������[%d] �� : %d ���� ũ�� : %d\n", Stack.GetSize(), Stack.Top(), Stack.GetSize());
	}

}

void Day0919::TestQueue()
{
	CircularQueue Queue;
	int InData = 0;
	
	int InputMenu = 0;
	//�޴� �����
	while (true)
	{
		printf("ť �޴��� �Է� �ϼ���.\n1�� : Enqueue\n2�� : Dequeue\n3�� : Peek\n4�� : TestPrint\n5�� : ����\n ");
		std::cin >> InputMenu;
		switch (InputMenu)
		{
		case 1: //1. Enqueue
			printf("ť�� ���� ���� �Է��ϼ���. : ");
			std::cin >> InData;
			Queue.Enqueue(InData);
			printf("�Է��� %d ���� ť�� �����Ͽ����ϴ�.\n", InData);
			continue;
		case 2: //2. Dequeue
			Queue.Dequeue();
			printf("ť�� �����Ͽ����ϴ�.\n ");
			continue;
		case 3: //3. Peek
			 
			printf("���� ù ��° ť�� ���� %d �Դϴ�.\n ", Queue.Peek());
			continue;
		case 4: //4. TestPrintQueue
			Queue.TestPrintQueue();
			continue;
		case 5:
			printf("�ý����� �����մϴ�.\n");
			break;
			
		default:
			printf("�޴��� �߸��Է��Ͽ����ϴ�. �ٽ� �Է� ���ּ���.");
			continue;

		}
		break;	
	}
	// 2. Circular Queue2 �����
	//		�����ڿ��� �Ķ���͸� �޾� ũ�⸦ ���� �����ϰ� �����


}

void Day0919::TestQueue2()
{
}

void Day0919::TestSwallowCopy()
{
	// ���� ���� : ���縦 �� �� ������ �纻�� ����� ���� �ƴ϶� �ּҸ� �����ϴ� ����
	CircularQueue2 a(5);
	a.Enqueue(10);
	a.Enqueue(20);

	CircularQueue2 b(a);	// ���� �����ڷ� a�� �纻�� ���� ��
	CircularQueue2 c = a;	// ���� �����ڷ� a�� �纻�� ���� ��

	a.Enqueue(30);

	printf("a\n");
	a.TestPrintQueue();
	printf("\nb\n");
	b.TestPrintQueue();
	printf("\nc\n");
	c.TestPrintQueue();


}
