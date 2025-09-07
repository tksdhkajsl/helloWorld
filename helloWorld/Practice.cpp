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
//����Լ�
int Factorial(int Num)
{
	if (Num == 0)
		return 1;

	return Num * Factorial(Num-1);
}





//3���� �Ķ���͸� �޾� ��հ��� �����ϴ� �Լ� �����
float Average(float Num1, float Num2, float Num3)
{
	return (Num1 * Num2 * Num3) / 3.0f;
}




//������ ������ �Է� �޾� ���ΰ� ���ϴ� �Լ� �����
int SalePrice(int Price, int Sale)
{
	int SalePercent = Sale / 100;
	int ResultPrice = Price - (Price * SalePercent);
	return ResultPrice;
}

//�ֻ����� ���� ����� �����ϴ� �Լ� �����

void DiceResult()
{
srand(time(0));
int Dice = rand() % 6;

	printf("�ֻ��� ����� %d\n", Dice + 1);
}




//������ �ָ� ����(A~F)�� �ִ� �Լ� �����

int PointGrade(int Point)
{
	int Grade = Point;
	
	if (Point >= 90)
	{
		return printf("����� ������ %d�̹Ƿ� A�����Դϴ�.\n", Point);
	}
	else if (Point >= 80)
	{
		return printf("����� ������ %d�̹Ƿ� B�����Դϴ�.\n", Point);
	}
	else if (Point >= 70)
	{
		return printf("����� ������ %d�̹Ƿ� C�����Դϴ�.\n", Point);
	}
	else if (Point >= 60)
	{
		return printf("����� ������ %d�̹Ƿ� D�����Դϴ�.\n", Point);
	}
	else
	{
		return printf("����� ������ %d�̹Ƿ� F�����Դϴ�.\n", Point);
	}
	
	
}

//���ø� �Լ��� Clamp �Լ� �����ϱ�

//1. �ڸ��� �и��ϱ�(�Է��� �ڸ� �� ���� ����)
//�� �ڸ��� ���� ���ؼ� ����ϱ�
void DigitNum()
{
	int Num = 0;
	int Sum = 0;
	printf("���� �Է����ּ���\n");
	std::cin >> Num;
	while(Num != 0)
	{
		int Num2 = Num % 10;
		
		Num = Num / 10;

		Sum += Num2;
		
	}
	printf("�ڸ��� ���� %d", Sum);
}


//2. ��� �Լ��� �̿��Ͽ� 10������ �Է¹޾� 2������ ����ϴ� �Լ� �����

//3. ���� �ӽ� ���� �����
//���� �ݾ� 10000
//���ǿ� ������  �ּ� 100 �����ؾ� ��.���� �����ݾ��� 100 ������ ��� ���� ����.
//���� ���� 3���� ������ 50��� ���� �޴´�.
//���� 777�̸� 10000�� ����
void SlotMachine() 
{
	srand(time(0));
	int Money = 10000;
	
	
	while (true)
	{
		int Random1 = (rand() % 10) + 1;
		int Random2 = (rand() % 10) + 1;
		int Random3 = (rand() % 10) + 1;
		int PlayerInput = 0;
		printf("���� �ݾ��� �Է����ּ���. \n");
		std::cin >> PlayerInput;
		if (PlayerInput < 100)
		{
			printf("���� �ݾ��� �۽��ϴ�.\n �ٽ� �Է����ּ���. \n");
			continue;
		 }
		else
		{
			if (Random1 == Random2 == Random3)
			{
								
				Money += (PlayerInput * 50);
				printf("���� ���� %d, %d, %d �Դϴ�.\n", Random1, Random2, Random3);
				printf("�����մϴ�. ���ñ��� 50�踦 ������ϴ�.\n���� �ݾ��� %d �� �Դϴ� \n", Money);
			}
			else if (Random1 == Random2 == Random3 == 7)
			{
				Money += (PlayerInput * 10000);
				printf("���� ���� %d, %d, %d �Դϴ�.\n", Random1, Random2, Random3);
				printf("�λ�����!!!!. ���ñ��� 10,000�踦 ������ϴ�.\n���� �ݾ��� %d �� �Դϴ� \n", Money);
			}
			else
			{
				Money -= PlayerInput;
				printf("���� ���� %d, %d, %d �Դϴ�.\n", Random1, Random2, Random3);
				printf("��! ���� �ݾ��� %d �� �Դϴ�. \n", Money);
				if (Money < 100)
				{
					printf("�а����� �ϼ̽��ϴ�.\n ��������.\n");
					break;
				}
			}
		}
	}

}

//4. �÷��̾�� ���� ���� ���� �����
//HP�� 100���� ����
//������ �� �� ���濡�� 5~15�� �������� �ش�.
//10 % �� Ȯ���� ũ��Ƽ���� �߻��� 2���� �������� �ش�.
//������ HP�� 0 ���ϰ� �Ǹ� �¸��Ѵ�.
void RPG()
{
	srand(time(0));
	int UserHP = 100;
	int ComHP = 100;

	while (true)
	{		
		int AttackDamage = (rand() % 11) + 5;
		int Critical = (rand() % 10) + 1;
		int Attack = 0;
		int CriticalAttack = 0;
		printf("���� �����߽��ϴ�.\n 1�� ����, 2�� ���� \n");
		std::cin >> Attack;
		

			if (Attack == 1)
			{
				if (Critical == 1)
				{
					CriticalAttack = AttackDamage * 2;
					printf("ũ��Ƽ�� ��Ʈ!! %d �������� �־����ϴ�. \n", CriticalAttack);
					ComHP -= CriticalAttack;
					printf(" ���� HP\n User : %d\nCom : %d\n",UserHP,ComHP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
					}
					else if (ComHP <= 0)
					{
						printf(" ���� óġ�Ͽ����ϴ�.!!\n�¸�!!!\n");
						break;
					}
				}
				else if (Critical == 2)
				{
					AttackDamage = (rand() % 11) + 5;
					CriticalAttack = AttackDamage * 2;
					printf("���� ũ��Ƽ�� ��Ʈ!! %d �������� �޾ҽ��ϴ�. \n", CriticalAttack);
					UserHP -= CriticalAttack;
					printf(" ���� HP\n User : %d\nCom : %d\n", UserHP, ComHP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
					}
					else if (ComHP <= 0)
					{
						printf(" ���� óġ�Ͽ����ϴ�.!!\n�¸�!!!\n");
						break;
					}
				}
				else
				{
					printf("���� �����Ͽ����ϴ�.%d ������ \n", AttackDamage);
					ComHP -= AttackDamage;
					AttackDamage = (rand() % 11) + 5;
					printf("���� �����Ͽ����ϴ�.%d ������ \n", AttackDamage);
					UserHP -= AttackDamage;
					printf(" ���� HP\n User : %d\nCom : %d\n", UserHP, ComHP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
					}
					else if (ComHP <= 0)
					{
						printf("���� óġ�Ͽ����ϴ�.!!\n�¸�!!!\n");
						break;
					}
				}
				
			}
			else
			{
				printf("������ �� �� ����, �ٸ� Ű �Է��Ͽ��� �� �����ϴ�. �ο켼��\n");
			}
		
	}


}


//5. ���� ��� �����
//���� �ݾ� 10000
//���ǿ� ������ �ּ� 100 �����ؾ� ��.���� �����ݾ��� 100 ������ ��� ���� ����.
//������ A~K������ Ʈ���� ī�� �� 2���� �ߺ����� �����ϰ� ��Ŀ ī�尡 �߰��ȴ�.
//�÷��̾�� ������ ī�� �� ������ �����Ѵ�.
//���� �÷��̾ ��Ŀ�� ���ִٸ� �÷��̾��� �¸�.���� �ݾ��� 2�踦 �޴´�.
//�÷��̾ ��Ŀ�� ���� ���ߴٸ� ���� ������ �����ϰų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ִ�.

void Card()
{
}

