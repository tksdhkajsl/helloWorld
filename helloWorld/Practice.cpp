#include "Practice.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <random>
//1 특정 범위안의 랜덤한 수를 리턴
/*	int 파라메터 2개
	int 리턴*/
void Practice0905_01()
{
	int Max = 0;
	int Min = 0;
	printf("범위 값을 지정해 주세요\n 최소값\n");
	std::cin >> Min;
	printf("최대값\n");
	std::cin >> Max;

	int Random = Range(Min, Max);
	printf("최대값 %d과 최소값 %d 사이 나온 임의 값은 %d 입니다.\n",Max,Min,Random);

}

int Range(int Min, int Max)
{
	srand(time(0));
	int Random = (rand() % (Max - Min + 1)) + Min;

	return Random;
}

//2. 나이를 입력 -> 나이 출력
/*
 int 파라메터 1개
*/
void Practice0905_02()
{
	int Age = 0;
	printf("나이를 입력해주세요\n");
	std::cin >> Age;

	printf("당신의 나이는 %d 세 입니다.\n",Age);

}



//3.원의 반지름을 입력 받고 넓이 구하기
/*
* float파라메터 1개
  float리턴
*/
void Practice0905_03()
{
	float OneHalf = 0.0f;
	printf("원의 반지름을 입력해주세요\n");
	std::cin >> OneHalf;

	float Circle = CircleArea(OneHalf);

	printf("원의 반지름을 넓이는 %f 입니다.\n",Circle);
}

float CircleArea(float CircleHalf)
{
	float Circle = CircleHalf * CircleHalf * 3.141592f;

	return Circle;
}


//4. 숫자를 입력받아 홀수 짝수 구분 함수
	/*- int파라메터 1개
	-bool 리턴(true 홀수, false 짝수)*/
void Practice0905_04()
{
	int Number = 0;
	printf("숫자를 입력해주세요\n");
	std::cin >> Number;
	

	int Result = OddnEven(Number);	

	if (Result == true)
	{
		printf("숫자 %d는 홀수\n",Number);
	}
	else
	{
		printf("숫자 %d는 짝수\n", Number);
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


/*5. 성적 분류 함수(A-F)
int 파라메터 1개
int 리턴(enum 값)
*/
void Practice0905_05()
{
	int Point = 0;
	printf("점수를 입력해주세요\n");
	std::cin >> Point;

	int Grade = GradePoint(Point);
	switch (Grade)
	{
	case 0:
		printf("당신의 점수는 %d이므로 A학점입니다.\n", Point);;
		break;
	case 1:
		printf("당신의 점수는 %d이므로 B학점입니다.\n", Point);
		break;
	case 2:
		printf("당신의 점수는 %d이므로 C학점입니다.\n",Point);
		break;
	case 3:
		printf("당신의 점수는 %d이므로 D학점입니다.\n", Point);
		break;
	case 4:
		printf("당신의 점수는 %d이므로 F학점입니다.\n", Point);
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
 6. 아이템 설정, 아이템 해제, 아이템 토글용 함수 총 3개
비트 플래그 인벤토리 코드 수정
int 파라메터 두개(Inventory, 비트플래그용 enum)
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
7. 피라미드 출력 함수
int 파라메터 1개
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
//재귀함수
int Factorial(int Num)
{
	if (Num == 0)
		return 1;

	return Num * Factorial(Num-1);
}





//3개의 파라메터를 받아 평균값을 리턴하는 함수 만들기
float Average(float Num1, float Num2, float Num3)
{
	return (Num1 * Num2 * Num3) / 3.0f;
}




//정가와 할인율 입력 받아 할인가 구하는 함수 만들기
int SalePrice(int Price, int Sale)
{
	int SalePercent = Sale / 100;
	int ResultPrice = Price - (Price * SalePercent);
	return ResultPrice;
}

//주사위를 굴린 결과를 리턴하는 함수 만들기

void DiceResult()
{
srand(time(0));
int Dice = rand() % 6;

	printf("주사위 결과는 %d\n", Dice + 1);
}




//점수를 주면 성적(A~F)를 주는 함수 만들기

int PointGrade(int Point)
{
	int Grade = Point;
	
	if (Point >= 90)
	{
		return printf("당신의 점수는 %d이므로 A학점입니다.\n", Point);
	}
	else if (Point >= 80)
	{
		return printf("당신의 점수는 %d이므로 B학점입니다.\n", Point);
	}
	else if (Point >= 70)
	{
		return printf("당신의 점수는 %d이므로 C학점입니다.\n", Point);
	}
	else if (Point >= 60)
	{
		return printf("당신의 점수는 %d이므로 D학점입니다.\n", Point);
	}
	else
	{
		return printf("당신의 점수는 %d이므로 F학점입니다.\n", Point);
	}
	
	
}

//템플릿 함수로 Clamp 함수 구현하기

//1. 자리수 분리하기(입력은 자리 수 제한 없음)
//각 자리의 수를 합해서 출력하기
void DigitNum()
{
	int Num = 0;
	int Sum = 0;
	printf("수를 입력해주세요\n");
	std::cin >> Num;
	while(Num != 0)
	{
		int Num2 = Num % 10;
		
		Num = Num / 10;

		Sum += Num2;
		
	}
	printf("자리수 합은 %d", Sum);
}


//2. 재귀 함수를 이용하여 10진수를 입력받아 2진수로 출력하는 함수 만들기

//3. 슬롯 머신 게임 만들기
//시작 금액 10000
//한판에 무조건  최소 100 배팅해야 함.만약 소지금액이 100 이하일 경우 게임 종료.
//같은 숫자 3개가 나오면 50배로 돌려 받는다.
//만약 777이면 10000배 받음
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
		printf("배팅 금액을 입력해주세요. \n");
		std::cin >> PlayerInput;
		if (PlayerInput < 100)
		{
			printf("배팅 금액이 작습니다.\n 다시 입력해주세요. \n");
			continue;
		 }
		else
		{
			if (Random1 == Random2 == Random3)
			{
								
				Money += (PlayerInput * 50);
				printf("나온 수는 %d, %d, %d 입니다.\n", Random1, Random2, Random3);
				printf("축하합니다. 배팅금의 50배를 얻었습니다.\n남은 금액은 %d 원 입니다 \n", Money);
			}
			else if (Random1 == Random2 == Random3 == 7)
			{
				Money += (PlayerInput * 10000);
				printf("나온 수는 %d, %d, %d 입니다.\n", Random1, Random2, Random3);
				printf("인생역전!!!!. 배팅금의 10,000배를 얻었습니다.\n남은 금액은 %d 원 입니다 \n", Money);
			}
			else
			{
				Money -= PlayerInput;
				printf("나온 수는 %d, %d, %d 입니다.\n", Random1, Random2, Random3);
				printf("꽝! 남은 금액은 %d 원 입니다. \n", Money);
				if (Money < 100)
				{
					printf("패가망신 하셨습니다.\n 나가세요.\n");
					break;
				}
			}
		}
	}

}

//4. 플레이어와 적의 턴제 전투 만들기
//HP는 100으로 시작
//공격을 할 때 상대방에게 5~15의 데미지를 준다.
//10 % 의 확률로 크리티컬이 발생해 2배의 데미지를 준다.
//상대방의 HP가 0 이하가 되면 승리한다.
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
		printf("적과 조우했습니다.\n 1번 공격, 2번 도망 \n");
		std::cin >> Attack;
		

			if (Attack == 1)
			{
				if (Critical == 1)
				{
					CriticalAttack = AttackDamage * 2;
					printf("크리티컬 히트!! %d 데미지를 주었습니다. \n", CriticalAttack);
					ComHP -= CriticalAttack;
					printf(" 남은 HP\n User : %d\nCom : %d\n",UserHP,ComHP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
					}
					else if (ComHP <= 0)
					{
						printf(" 적을 처치하였습니다.!!\n승리!!!\n");
						break;
					}
				}
				else if (Critical == 2)
				{
					AttackDamage = (rand() % 11) + 5;
					CriticalAttack = AttackDamage * 2;
					printf("적의 크리티컬 히트!! %d 데미지를 받았습니다. \n", CriticalAttack);
					UserHP -= CriticalAttack;
					printf(" 남은 HP\n User : %d\nCom : %d\n", UserHP, ComHP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
					}
					else if (ComHP <= 0)
					{
						printf(" 적을 처치하였습니다.!!\n승리!!!\n");
						break;
					}
				}
				else
				{
					printf("적을 공격하였습니다.%d 데미지 \n", AttackDamage);
					ComHP -= AttackDamage;
					AttackDamage = (rand() % 11) + 5;
					printf("적이 공격하였습니다.%d 데미지 \n", AttackDamage);
					UserHP -= AttackDamage;
					printf(" 남은 HP\n User : %d\nCom : %d\n", UserHP, ComHP);
					if (UserHP <= 0)
					{
						printf(" You Died!!\n");
						break;
					}
					else if (ComHP <= 0)
					{
						printf("적을 처치하였습니다.!!\n승리!!!\n");
						break;
					}
				}
				
			}
			else
			{
				printf("도망을 갈 수 없고, 다른 키 입력하여도 뭐 없습니다. 싸우세요\n");
			}
		
	}


}


//5. 도둑 잡기 만들기
//시작 금액 10000
//한판에 무조건 최소 100 배팅해야 함.만약 소지금액이 100 이하일 경우 게임 종료.
//딜러는 A~K까지의 트럼프 카드 중 2장을 중복없이 선택하고 조커 카드가 추가된다.
//플레이어는 딜러의 카드 중 한장을 선택한다.
//만약 플레이어가 조커를 뽑있다면 플레이어의 승리.배팅 금액의 2배를 받는다.
//플레이어가 조커를 뽑지 못했다면 다음 게임을 시작하거나 배팅 금액의 2배를 추가로 지불하고 한번 더 선택할 수 있다.

void Card()
{
}

