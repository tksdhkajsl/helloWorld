#include "Practice.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <random>
#include "Practice_250909.h"
#include "Practice_250912.h"
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


//�ָ�����


//3���� �Ķ���͸� �޾� ��հ��� �����ϴ� �Լ� �����
float Average(float Num1, float Num2, float Num3)
{
	return (Num1 * Num2 * Num3) / 3.0f;
}




//������ ������ �Է� �޾� ���ΰ� ���ϴ� �Լ� �����
int SalePrice(int Price, int Sale)
{
	int SalePrice = (Price * Sale) / 100;
	int ResultPrice = Price - SalePrice;
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
void Practice0905_09()
{
	int Value = 120;
	int Min = 40;
	int Max = 70;
	Value = Clamp(Value, Min, Max);
}
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
int Num(int num)
{
	if(num == 0 || num == 1)
	{
		return num;
	}
	else
	{
		Num(num / 2);
		return Num(num % 2);
	}	

	
}
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
			if (Random1 == Random2 && Random1 == Random3)//(Random1 == Random2 && Random2 == Random3)  //(a == b == c) �߸��� ���
			{
							
				if (Random1 == 7)
				{
					Money += (PlayerInput * 10000);
					printf("���� ���� %d, %d, %d �Դϴ�.\n", Random1, Random2, Random3);
					printf("�λ�����!!!!. ���ñ��� 10,000�踦 ������ϴ�.\n���� �ݾ��� %d �� �Դϴ� \n", Money);
				}
				else
				{
					Money += (PlayerInput * 50);
					printf("���� ���� %d, %d, %d �Դϴ�.\n", Random1, Random2, Random3);
					printf("�����մϴ�. ���ñ��� 50�踦 ������ϴ�.\n���� �ݾ��� %d �� �Դϴ� \n", Money);

				}
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
//void RPG(Player& User)

void RPG(int& UserHP , int& Wallet)
{
	srand(time(0));
	Com* pEnemy = new Com();
	Player User;
	

	
	
	printf("���� �����߽��ϴ�.!!\nü�� : %d\n���ݷ� : %d\n", pEnemy->C_HP, pEnemy->C_Attack);

	while (true)
	{		
		int AttackDamage = (rand() % 11) + 5;
		int Critical = (rand() % 10) + 1;
		int Attack = 0;
		int CriticalAttack = 0;
		printf(" 1�� ����, 2�� ���� \n");
		std::cin >> Attack;
		

			if (Attack == 1)
			{
				if (Critical == 1)
				{
					CriticalAttack = AttackDamage * 2;
					printf("ũ��Ƽ�� ��Ʈ!! %d �������� �־����ϴ�. \n", CriticalAttack);
					pEnemy->C_HP -= CriticalAttack;
					if (pEnemy->C_HP < 0)
					{
						pEnemy->C_HP = 0;
					}
					printf(" ���� HP\n User : %d\nCom : %d\n",UserHP, pEnemy->C_HP);
					if (pEnemy->C_HP <= 0)
					{
						printf(" ���� óġ�Ͽ����ϴ�.!!\n�������� %d Gold ȹ��!!\n", pEnemy->C_Gold);
						Wallet += pEnemy->C_Gold;
						printf("������ : %d Gold\n", Wallet);						
						break;
					}
				}
				else if (Critical == 2)
				{
					AttackDamage = (rand() % 11) + 5;
					
					printf("���� ũ��Ƽ�� ��Ʈ!! %d �������� �޾ҽ��ϴ�. \n", pEnemy->C_Attack * 2);
					UserHP -= pEnemy->C_Attack * 2;;
					if (UserHP < 0)
					{
						UserHP = 0;
					}
					printf(" ���� HP\n User : %d\nCom : %d\n", UserHP, pEnemy->C_HP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");						
						break;
					}
					
				}
				else
				{
					printf("���� �����Ͽ����ϴ�.%d ������ \n", AttackDamage);
					pEnemy->C_HP -= AttackDamage;
					
					printf("���� �����Ͽ����ϴ�.%d ������ \n", pEnemy->C_Attack);
					UserHP -= pEnemy->C_Attack;
					if (UserHP < 0)
					{
						UserHP = 0;
					}
					if (pEnemy->C_HP < 0)
					{
						pEnemy->C_HP = 0;
					}
					printf(" ���� HP\n User : %d\nCom : %d\n", UserHP, pEnemy->C_HP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
						
					}
					else if (pEnemy->C_HP <= 0)
					{
						printf(" ���� óġ�Ͽ����ϴ�.!!\n�������� %d Gold ȹ��!!\n", pEnemy->C_Gold);
						Wallet += pEnemy->C_Gold;
						printf("������ : %d Gold\n", Wallet);
						break;
					}
				}
				
			}
			else
			{
				printf("������ �� �� ����, �ٸ� Ű �Է��Ͽ��� �� �����ϴ�. �ο켼��\n");
			}
		
	}

	delete pEnemy;
	pEnemy = nullptr;
}


//5. ���� ��� �����
//���� �ݾ� 10000
//���ǿ� ������ �ּ� 100 �����ؾ� ��.���� �����ݾ��� 100 ������ ��� ���� ����.
//������ A~K������ Ʈ���� ī�� �� 2���� �ߺ����� �����ϰ� ��Ŀ ī�尡 �߰��ȴ�.
// ���� ���� ���̶� ������ �ȵǰ�, ���� ������, �ش� ���� ��������.
//�÷��̾�� ������ ī�� �� ������ �����Ѵ�.
//���� �÷��̾ ��Ŀ�� ���ִٸ� �÷��̾��� �¸�.���� �ݾ��� 2�踦 �޴´�.
//�÷��̾ ��Ŀ�� ���� ���ߴٸ� ���� ������ �����ϰų� ���� �ݾ��� 2�踦 �߰��� �����ϰ� �ѹ� �� ������ �� �ִ�.

void Card()
{
	srand(time(0));
	
	enum Card
	{
		CardA = 0,
		Card2,
		Card3,
		Card4,
		Card5,
		Card6,
		Card7,
		Card8,
		Card9,
		Card10,
		CardJ,
		CardQ,
		CardK,
		CardJoker,
		NumOfCards
	};

	int Money = 10000;
	const int MinimumBet = 100;

	while (Money >= MinimumBet)
	{
		int CurrentBet = MinimumBet;

		printf("������ ���ּ��� (100~%d) : ", Money);
		std::cin >> CurrentBet;
		printf("%d���� �����߽��ϴ�.\n", CurrentBet);

		Money -= CurrentBet;

		// ������ ���ϰ� �ִ�.

		int Dealer1 = rand() % CardJoker;
		int Dealer2 = -1;
		do
		{
			Dealer2 = rand() % CardJoker;
		} while (Dealer2 == Dealer1);
		int Dealer3 = -1;
		do
		{
			Dealer3 = rand() % CardJoker;
		} while (Dealer3 == Dealer1 || Dealer3 == Dealer2);

		int JokerIndex = rand() % 3;
		switch (JokerIndex)
		{
		case 0:
			Dealer1 = CardJoker;
			break;
		case 1:
			Dealer2 = CardJoker;
			break;
		case 2:
			Dealer3 = CardJoker;
			break;
		default:
			// ���� ������ �ȵȴ�.
			break;
		}

		printf("ī�带 �����ϼ��� (0, 1, 2) : ");
		int PlayerInput = 0;
		std::cin >> PlayerInput;

		bool PlayerWin = false;
		printf("�÷��̾�� %d�� �����߽��ϴ�.\n", PlayerInput);
		switch (PlayerInput)
		{
		case 0:
			if (Dealer1 == CardJoker)
			{
				// �߰���
				PlayerWin = true;
			}
			break;
		case 1:
			if (Dealer2 == CardJoker)
			{
				// �߰���
				PlayerWin = true;
			}
			break;
		case 2:
			if (Dealer3 == CardJoker)
			{
				// �߰���
				PlayerWin = true;
			}
			break;
		default:
			// ���� ������ �ȵȴ�.
			break;
		}

		if (PlayerWin)
		{
			Money += CurrentBet * 2;
			printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d�Դϴ�.\n", Money);
		}
		else
		{
			printf("����� ���� ī��� ��Ŀ�� �ƴմϴ�.\n");

			if (Money >= CurrentBet * 2)
			{
				printf("�߰� ���� �Ͻðڽ��ϱ� ? (0:yes, 1 : no) : ");
				int Select = -1;
				std::cin >> Select;
				if (Select == 0)
				{
					Money -= CurrentBet * 2;
					CurrentBet *= 3;
					int PlayerSecondInput = -1;
					switch (PlayerInput)
					{
					case 0:
					{
						do
						{
							printf("���� ī�� �� �ϳ��� �����ϼ��� (1,2) : ");
							std::cin >> PlayerSecondInput;
						} //while (!(PlayerSecondInput == 1 || PlayerSecondInput == 2));
						while (PlayerSecondInput != 1 && PlayerSecondInput != 2);
					}
					break;
					case 1:
					{
						do
						{
							printf("���� ī�� �� �ϳ��� �����ϼ��� (0,2) : ");
							std::cin >> PlayerSecondInput;
						} while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
					}
					break;
					case 2:
					{
						do
						{
							printf("���� ī�� �� �ϳ��� �����ϼ��� (0,1) : ");
							std::cin >> PlayerSecondInput;
						} while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
					}
					break;
					default:
						// ���� ������ �ȵȴ�.
						break;
					}

					printf("�÷��̾�� �ι�°�� %d�� �����߽��ϴ�.\n", PlayerSecondInput);
					switch (PlayerSecondInput)
					{
					case 0:
						if (Dealer1 == CardJoker)
						{
							// �߰���
							PlayerWin = true;
						}
						break;
					case 1:
						if (Dealer2 == CardJoker)
						{
							// �߰���
							PlayerWin = true;
						}
						break;
					case 2:
						if (Dealer3 == CardJoker)
						{
							// �߰���
							PlayerWin = true;
						}
						break;
					default:
						// ���� ������ �ȵȴ�.
						break;
					}

					if (PlayerWin)
					{
						Money += CurrentBet * 2;
						printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d�Դϴ�.\n", Money);
					}
					else
					{
						printf("����� �й��Դϴ�.\n");
					}
				}
				else
				{
					printf("����� �й��Դϴ�.\n");
				}
			}
			else
			{
				printf("����� �й��Դϴ�.\n");
			}
		}
	}
	/*while (true)
	{
		char Card = (rand() % 11) + 65;
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
			
			
	//	}
	}
	*/
}

