#include <iostream> //����� ����
#include <cstdio>  // stdio.h�� ���� �����̽� �߰��� ����
#include <stdio.h>
#include "header.h"
#include <time.h>
#include <random>
#include "TestMath.h"
#include "Practice.h"
#include "Practice_250909.h"
#include "Practice_250910.h"
#include <limits.h>
#include <direct.h>
#include <fstream>
#include <string>

void Day0910_String()
{
	//char HelloString[] = "Hello World!!\n";
	char HelloString[] = { 'H','e','l','l','o',' ','W','o','r','l','d','!','\n' };
	//printf("%s" , HelloString); //\0 �� ���ڿ� �������� ����־� �������ȴ�. %s ���ڿ� ����ϱ�

	//���� �ǽ�
	//HelloString���� ���°�� �ִ��� ����غ���

	/*int HelloCount = sizeof(HelloString) / sizeof(HelloString[0]);
	for (int i = 0; i < HelloCount; i++)
	{
		HelloString[i];
		if (HelloString[i] == 'e')
		{
			printf("e�� ���ڿ��� %d ��°�� �ֽ��ϴ�.", i + 1);
			break;
		}
	}*/
	/*int Index = 0;
	char Target = 'e';
	bool IsFind = false;
	while (HelloString[Index] != '\0')
	{
		if (HelloString[Index] == Target)
		{
			IsFind = true;
			break;
		}
		Index++;
	}

	if (IsFind)
	{
		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	}
	else
	{
		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	}*/
	/*char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0)
	{
		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	}
	else
	{
		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	}*/
	//�ǽ�
	//1.���ڿ� ���� ���� �Լ� MyStringLength
	const char* TestString = "Hdllo";
	const char* TestString2 = "12345";
	const char* TestString3 = "12345.123";
	MyAtoF(TestString3);
	int Integer = MyAtoI(TestString2);
	printf("\n %d \n", Integer);
	//int Length = MyStringLength(TestString);
	//printf("[%s]�� ���̴� %d�Դϴ�.", TestString, Length);
	////printf("%d\n", MyStringLength(TestString1));
	////2. ���ڿ��� �����ϴ� �Լ� MyStringCopy
	//char Destination[256] = { 0 };	// ũ��� �׳� ����ϴٰ� ����
	//char* Destination2 = new char[MyStringLength(TestString) + 1]; //+1��'\0'�� ����
	//MyStringCopy(TestString, Destination2);
	//printf("\n\n���ڿ� �����ϱ�\n");
	//printf("Source\t\t: %s\n", TestString);
	//printf("Destination\t: %s\n", Destination);
	//delete[] Destination2;
	//Destination2 = nullptr;
	////MyStringCopy(TestStr, TestString1);
	////3. ���ڿ� ��ġ�� MyStringCat
	//printf("\n\n���ڿ� ��ġ��\n");
	//char TestSource[32] = "Hello";
	//printf("���� : %s\n", TestSource);
	//MyStringCat(TestSource, " World!");
	//printf("�߰��� ���� : %s\n", TestSource);
	/*int Result = MyStringCompare(TestString, TestString2);
	printf("���ڿ� �� : %d\n", Result);*/
	//4. ��
	/*int CompareResult = MyStringCompare("abc", "abd");

	if (CompareResult < 0)
	{
		printf("ù��° ������ �� �۽��ϴ�..");
	}
	else if (CompareResult > 0)
	{
		printf("�ι�° ������ �� �۽��ϴ�.");
	}
	else
	{
		printf("�� ������ ���� �����Դϴ�.");
	}*/
	//5. ���� ǥ��
	/*int IntegerNumber = MyAtoI("567");
	IntegerNumber = MyAtoI("-888");*/


	/*float FloatNumber = MyAtoF("123.45");
	FloatNumber = MyAtoF("55");


	const int Size = 32;
	char InputString[Size];
	printf("\n������ �Է��ϼ���.\n");
	std::cin.getline(InputString, Size);
	printf("�Էµ� ������ [%s]�Դϴ�.\n", InputString);*/



	//���� �ǽ�
	//�Է¹��� ���� : "Hello,World!"
	//,�ڿ� �ִ� ���� ���ĺ��� ��� �빮���̾���Ѵ�.
	//��¹��� ���� : "Hello,WORLD!"


	/*SimpleParser(InputString, ',');
	printf("�Ľ̵� ������ [%s]�Դϴ�.\n", InputString);*/

	//direct.h
	char Working[256];
	if (_getcwd(Working, 256) != nullptr)
	{
		printf("�۾� ���丮 : %s\n", Working);
	}

	// ���� �б�
	ReadFile();

	
}



int FindCharIndex(const char* TargetString, const char TargetCharacter)
{
	int Index = 0;
	bool IsFind = false;
	while (TargetString[Index] != '\0')
	{
		if (TargetString[Index] == TargetCharacter)
		{
			IsFind = true;
			break;
		}
		Index++;
	}

	if (!IsFind)
	{
		Index = -1;
	}
	return Index;
}

// �ǽ�
	// 1. ���ڿ��� ���̸� �����ϴ� �Լ� �����
	//		int MyStringLength(const char* Target);
	int MyStringLength(const char* Target)
	{
		int Index = 0;

		while (Target[Index] != '\0')
		{
			
			Index++;
		}
		return Index;
	}	
	// 2. ���ڿ��� �����ϴ� �Լ� �����
	//		void MyStringCopy(const char* Source, char* Destination);
	void MyStringCopy(const char* Source, char* Destination)
	{
		int i = 0;
		while(Source[i] != '\0')
		{			
			Destination[i] = Source[i];	
			printf("%c ", Destination[i]);
			i++;
		}
		
	}
	// 3. ���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)
	//		void MyStringCat(char* Source, const char* Destination);
	void MyStringCat(char* Source, const char* Destination)
	{
		
		int SourceLast = MyStringLength(Source);
		int Index = 0;
		
		while (Destination[Index] != '\0')
		{
			Source[SourceLast + Index] = Destination[Index];
			Index++;
			
		}
		Source[SourceLast + Index] = '\0';
		
		
	}
	// 4. ���ڿ� �ΰ��� ���ϴ� �Լ� �����
	//		���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
	//		int MyStringCompare(const char* String1, const char* string2);
	int MyStringCompare(const char* String1, const char* String2)
	{

		// 1 : "a4bc" String1[0] 'a', 
		// 2 : "agbc"

		int Index = 0;
		
		while (String1[Index] != '\0' && String2[Index] != '\0')
		{
			

			if (String1[Index] !=  String2[Index])
			{
				
				//return String1[Index] - String2[Index];
				break;
			}
			Index++;
		}
		return String1[Index] - String2[Index];
	// �� �� \0�� �Ǿ���.			-> ���� ���̰� ���� ���� ���ڵ鵵 ���Ҵ�. -> 0
	// �ϳ��� \0�� �Ǿ���.		-> ���� ���̰� �ٸ��� -> ���� �ٸ���.
	// �߰��� �ٸ� ���� �־���.	-> ���� �ٸ���.
		
		
	}
	// 5. ���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
	//	int MyAtoI(const char* Source);
	int MyAtoI(const char* Source)
	{
		int Index = 0;
		int Sign = -1;
		bool IsMinus = false;
		if (Source[0] == '-')
		{
			IsMinus = true;
			Index++;
		}
		
		// int IntChar = 0;
		int Result = 0;
		while (Source[Index] != '\0')
		{	
			
			/*if (Source[Index] >= '0' && Source[Index] <= '9')
			{
				�ϸ� ����.
			}*/
			// IntChar = (IntChar + (Source[Index] - 48)) * 10;
			Result = Result * 10 + Source[Index] - '0';
			Index++;
		}
		return Sign * Result;

	}
	// 6. ���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
	float MyAtoF(const char* Source)
	{
		float Result = 0.0f;
		int PointPosition = FindCharIndex(Source, '.');
		if (PointPosition >= 0)
		{
			// ���� ã�Ҵ�.
			char Integral[32];
			MyStringCopy(Source, Integral);
			Integral[PointPosition] = '\0';
			Result = static_cast<float>(MyAtoI(Integral));

			char Fractional[32];
			float frac = 0.1f;
			MyStringCopy(Source + PointPosition + 1, Fractional);
			int Index = 0;
			while (Fractional[Index] != '\0')
			{
				Result += (Fractional[Index] - '0') * frac;
				Index++;
				frac *= 0.1f;
			}
		}
		else
		{
			// ���� ��ã�Ҵ�.
			Result = static_cast<float>(MyAtoI(Source));
		}

		return Result;
	}

	void SimpleParser(char* Source, const char Delimiter)
	{
		int CommaIndex = FindCharIndex(Source, Delimiter);
		char* AfterComma = Source + CommaIndex + 1;
		int ToUpper = 'a' - 'A';
		while ((*AfterComma) != '\0')
		{
			if ((*AfterComma) >= 'a' && (*AfterComma) <= 'z')
			{
				(*AfterComma) -= ToUpper;
			}
			AfterComma++;

		}


	}

	void ReadFile()
	{
		//C:\Users\KGA\source\repos\helloWorld\helloWorld\Data
		//#include <direct.h>
		//#include <fstream>
		//#include <string>
		//#include <fstream>	#include <string> �ʿ�
		const char* FilePath = ".\\Data\\TestData.txt";

		std::ifstream InputFile(FilePath);
		if (!InputFile.is_open())	// ������ ���ȴ��� Ȯ���ϴ� �Լ�
		{
			printf("������ �� �� �����ϴ�.\n");
			printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
			return;
		}

		//InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�
		std::string FileContents(
			(std::istreambuf_iterator<char>(InputFile)),
			std::istreambuf_iterator<char>());	

		// FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
		printf("���� ������ ������ �����ϴ�.\n");
		printf("%s\n", FileContents.c_str());	
	}

	void TestString()
	{
		//#include <string>
		std::string str1 = "Hello";
		std::string str2("World");	//str1���� ������ �� �ٶ����� ����

		const char* Temp1 = "Hello";
		char Temp[32] = { 0 };
		//Temp2 = Temp1;
		//char* Temp3 = Temp1; ������ ���������� Temp1�� ��� ���¶� �ȉ�.

		std::string str3 = str1;
		size_t Length = str3.length();

		//int Size = Length;	// ũ�Ⱑ �ȸ¾Ƽ� ©�� �� �ִ�.
		Length = str3.size();

		std::string str4 = str1 + " " + str2;	// str4 = "Hello World" , + ����� ���ɿ� ������ ���� �� �ִ�.

		str4 += "!";

		if (str1 == str2)
		{

		}
		if (str1 != str2)
		{

		}
		if (str1 > str2) //���� ������� ��
		{

		}

		//���ڿ� ã�� ����
		size_t Position = str1.find('e'); 
		//�߰��� �������� std::string::npos ����
		Position = str1.find('e',Position + 1); // �ι��� e�� ã�� ��(1��° e �߰ߵǾ��ٴ� �����Ͽ�)

		str1[1] = 'E'; //Ư�� ��ġ�� ���ڿ� �����ϱ�, �ε��� ���� Ȯ�� �� ����. ��Ÿ�� ������ �� �� ����
		//str1[10] = 'E'; ���� �ش� Ÿ���� ���� ���
		str1.at(1) = 'E'; //�����ϰ� ����

		str1.c_str(); //C��Ÿ�� ���ڿ� �����ϱ�
	}

	//��ȭ
	/*�̷� Ż�� ������ �����Ͽ� �� ���������Ͽ��� ���� ������ ������� �� �����
		1) ������ ���� ����
		2) ù���� ���� ���̿� ���� ���̰� ����Ǿ� �ִ�.
			ex) 20, 10 �� ���� 20, ���� 10
		3) �ι�° �� ���ʹ� �̷��� �� ���� �޸�(, )�� �����Ͽ� ���� Ÿ���� ��Ÿ����.
		4) �޸�(, ),
		5) \n���� ���� �ٷ� �̵��Ѵ�.*/