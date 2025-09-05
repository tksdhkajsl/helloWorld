#include "Practice.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <random>
//1 Ư�� �������� ������ ���� ����
/*	int �Ķ���� 2��
	int ����*/
void Practice0905_01()
{
	int Max = 0;
	int Min = 0;
	printf("���� ���� ������ �ּ���\n �ּҰ�\n");
	std::cin >> Min;
	printf("�ִ밪\n");
	std::cin >> Max;

	int Random = Range(Min, Max);
	printf("�ִ밪 %d�� �ּҰ� %d ���� ���� ���� ���� %d �Դϴ�.\n",Max,Min,Random);

}

int Range(int Min, int Max)
{
	srand(time(0));
	int Random = (rand() % (Max - Min + 1)) + Min;

	return Random;
}

//2. ���̸� �Է� -> ���� ���
/*
 int �Ķ���� 1��
*/
void Practice0905_02()
{
	int Age = 0;
	printf("���̸� �Է����ּ���\n");
	std::cin >> Age;

	printf("����� ���̴� %d �� �Դϴ�.\n",Age);

}



//3.���� �������� �Է� �ް� ���� ���ϱ�
/*
* float�Ķ���� 1��
  float����
*/
void Practice0905_03()
{
	float OneHalf = 0.0f;
	printf("���� �������� �Է����ּ���\n");
	std::cin >> OneHalf;

	float Circle = CircleArea(OneHalf);

	printf("���� �������� ���̴� %f �Դϴ�.\n",Circle);
}

float CircleArea(float CircleHalf)
{
	float Circle = CircleHalf * CircleHalf * 3.141592f;

	return Circle;
}


//4. ���ڸ� �Է¹޾� Ȧ�� ¦�� ���� �Լ�
	/*- int�Ķ���� 1��
	-bool ����(true Ȧ��, false ¦��)*/
void Practice0905_04()
{
	int Number = 0;
	printf("���ڸ� �Է����ּ���\n");
	std::cin >> Number;
	

	int Result = OddnEven(Number);	

	if (Result == true)
	{
		printf("���� %d�� Ȧ��\n",Number);
	}
	else
	{
		printf("���� %d�� ¦��\n", Number);
	}
}

bool OddnEven(int Num)
{
	
	if ((Num % 2) == 1)
	{
		return	true;
	}
	else
	{
		return	false;
	}
	 
}


/*5. ���� �з� �Լ�(A-F)
int �Ķ���� 1��
int ����(enum ��)
*/
void Practice0905_05()
{
	int Point = 0;
	printf("������ �Է����ּ���\n");
	std::cin >> Point;

	int Grade = GradePoint(Point);
	switch (Grade)
	{
	case 0:
		printf("����� ������ %d�̹Ƿ� A�����Դϴ�.\n", Point);;
		break;
	case 1:
		printf("����� ������ %d�̹Ƿ� B�����Դϴ�.\n", Point);
		break;
	case 2:
		printf("����� ������ %d�̹Ƿ� C�����Դϴ�.\n",Point);
		break;
	case 3:
		printf("����� ������ %d�̹Ƿ� D�����Դϴ�.\n", Point);
		break;
	case 4:
		printf("����� ������ %d�̹Ƿ� F�����Դϴ�.\n", Point);
		break;
	}
}

int GradePoint(int Point)
{
	enum Grade
	{
		A,
		B,
		C,
		D,
		F
	};

	if (Point >= 90)
	{
		return Grade::A;
	}
	else if (Point >= 80)
	{
		return Grade::B;
	}
	else if (Point >= 70)
	{
		return Grade::C;
	}
	else if (Point >= 60)
	{
		return Grade::D;
	}
	else
	{
		return Grade::F;
	}
}
/*
 6. ������ ����, ������ ����, ������ ��ۿ� �Լ� �� 3��
��Ʈ �÷��� �κ��丮 �ڵ� ����
int �Ķ���� �ΰ�(Inventory, ��Ʈ�÷��׿� enum)
*/
/*
enum Item
{
	Fuse = 1 << 0, 0b0001
	Light = 1 << 1,0b0010
	Book = 1 << 2,0b0100
	Key = 1 << 3 0b1000
};
*/

void Practice0905_06()
{
	int MyInventory = 0;
	MyInventory = AddItem(MyInventory, Fuse);	
	printf("%d\n",MyInventory);
	MyInventory = ClearItem(MyInventory, Fuse);	
	printf("%d\n",MyInventory);
	
}

int AddItem(int Inventory, int Flag)
{
	Inventory |= Flag;
	return Inventory;
	
}

int ClearItem(int Inventory, int Flag)
{
	Inventory &= ~Flag;
	return Inventory;
}

int ToggleItem(int Inventory, int Flag)
{
	Inventory ;
	return Inventory;
}

/*
7. �Ƕ�̵� ��� �Լ�
int �Ķ���� 1��
*/
void Practice0905_07(int Star)
{
	for (int i = 0; i < Star; i++)
	{
		for (int j = 0; j < (Star - (i + 1)); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2 + 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
}



//���ø� �Լ� �����
//1. Min
//�Ķ���� 2��
//���� : �Ķ���� �� ���� �� ����



//2. Max
//�Ķ���� 2��
//���� : �Ķ���� �� ū �� ����



//3. Clamp
//�Ķ���� 3��(value, min, max)
//����
//value���� min���� ������ min
//value���� max���� ũ�� max
//value���� min�� max ���̸� value


//4. ����Լ��� �̿��ؼ� ���丮�� ���� ����� �Լ� �����
//5���丮�� = 5 * 4 * 3 * 2 * 1