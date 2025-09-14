#include "Practice_250910.h"
#include <iostream>
#include <stdio.h>
#include <direct.h>
#include <fstream>
#include <string>

void Day0910_String()
{
	char HelloString[14];
	HelloString[0] = 'H';
	HelloString[1] = 'e';
	HelloString[2] = 'l';
	HelloString[3] = 'l';
	HelloString[4] = 'o';
	HelloString[5] = ' ';
	HelloString[6] = 'W';
	HelloString[7] = 'o';
	HelloString[8] = 'r';
	HelloString[9] = 'l';
	HelloString[10] = 'd';
	HelloString[11] = '!';
	HelloString[12] = '\n';
	HelloString[13] = '\0';
	//char HelloString[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n' };
	//char HelloString[] = "Hello World!\n";

	printf("%s", HelloString);	// ���ڿ� ����ϱ�

	HelloString[5] = '\0';
	printf("%s", HelloString);	// Hello�� ��µ�

	// ���� �ǽ�
	// HelloString���� 'e'�� ���°�� �ִ��� ����غ���

	printf("\n\n\n\n\n\n\n\n\n\n\n");
	//int Index = 0;
	//char Target = 'e';
	//bool IsFind = false;
	//while (HelloString[Index] != '\0')
	//{
	//	if (HelloString[Index] == Target)
	//	{
	//		IsFind = true;
	//		break;
	//	}
	//	Index++;
	//}
	//if (IsFind)
	//{
	//	printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	//}
	//else
	//{
	//	printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	//}

	char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0)
	{
		printf("[%c]�� %d�� �ε����� �ֽ��ϴ�.\n", Target, Index);
	}
	else
	{
		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	}

	// �ǽ�
	// 1. ���ڿ��� ���̸� �����ϴ� �Լ� �����
	//		int MyStringLength(const char* Target);
	const char* TestString = "Hello";
	int Length = MyStringLength(TestString);
	printf("\n\n���ڿ� ���� ����\n");
	printf("[%s]�� ���̴� %d�Դϴ�.", TestString, Length);

	// 2. ���ڿ��� �����ϴ� �Լ� �����
	//		void MyStringCopy(const char* Source, char* Destination);
	char Destination[256] = { 0 };	// ũ��� �׳� ����ϴٰ� ����
	char* Destination2 = new char[MyStringLength(TestString) + 1];	// +1�� '\0'�� ����
	MyStringCopy(TestString, Destination2);
	printf("\n\n���ڿ� �����ϱ�\n");
	printf("Source\t\t: %s\n", TestString);
	printf("Destination\t: %s\n", Destination2);
	delete[] Destination2;
	Destination2 = nullptr;

	// 3. ���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)
	//		void MyStringCat(char* Source, const char* Destination);
	printf("\n\n���ڿ� ��ġ��\n");
	char TestSource[32] = "Hello";
	printf("���� : %s\n", TestSource);
	MyStringCat(TestSource, " World!");
	printf("��� : %s\n", TestSource);

	// 4. ���ڿ� �ΰ��� ���ϴ� �Լ� �����
	//		���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
	//		int MyStringCompare(const char* String1, const char* String2);
	printf("\n\n���ڿ� ���ϱ�\n");
	int CompareResult = MyStringCompare("abd", "abd");
	if (CompareResult < 0)
	{
		printf("ù��° ������ �� �۽��ϴ�.");
	}
	else if (CompareResult > 0)
	{
		printf("�ι�° ������ �� �۽��ϴ�.");
	}
	else
	{
		printf("�� ������ ���� �����Դϴ�.");
	}

	// 5. ���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
	//		int MyAtoI(const char* Source);
	int IntegerNumber = MyAtoI("567");
	IntegerNumber = MyAtoI("-888");

	// 6. ���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
	//		float MyAtoF(const char* Source);
	float FloatNumber = MyAtoF("123.45");
	FloatNumber = MyAtoF("55");

	int i = 0;
	//const int Size = 32;
	//char InputString[Size];
	//printf("\n\n������ �Է��ϼ��� : ");
	//std::cin.getline(InputString, Size);
	//printf("�Էµ� ������ [%s]�Դϴ�.\n", InputString);

	//// ���� �ǽ�
	//// ,�ڿ� �ִ� ���� ���ĺ��� ��� �빮���̾�� �Ѵ�.
	//// �Է¹��� ���� : "Hello,World!"
	//// ��¹��� ���� : "Hello,WORLD!"
	//SimpleParser(InputString, ',');
	//printf("�Ľ̵� ������ [%s]�Դϴ�.\n", InputString);

	//// #include <direct.h> �߰�
	//char Working[256];
	//if (_getcwd(Working, 256) != nullptr)
	//{
	//	printf("�۾� ���丮 : %s\n", Working);
	//}

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

int MyStringLength(const char* Target)
{
	int Length = 0;
	while (Target[Length] != '\0')
	{
		Length++;
	}
	return Length;
}

void MyStringCopy(const char* Source, char* Destination)
{
	int Index = 0;
	while (Source[Index] != '\0')
	{
		Destination[Index] = Source[Index];
		Index++;
	}
	Destination[Index] = '\0';
}

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

int MyStringCompare(const char* String1, const char* String2)
{
	int Index = 0;
	while (String1[Index] != '\0' && String2[Index] != '\0')
	{
		if (String1[Index] != String2[Index])
		{
			break;
		}
		Index++;
	}
	// �� �� \0�� �Ǿ���.			-> ���� ���̰� ���� ���� ���ڵ鵵 ���Ҵ�. -> 0
	// �ϳ��� \0�� �Ǿ���.		-> ���� ���̰� �ٸ��� -> ���� �ٸ���.
	// �߰��� �ٸ� ���� �־���.	-> ���� �ٸ���.

	return String1[Index] - String2[Index];
}

int MyAtoI(const char* Source)
{
	int Index = 0;
	int Sign = 1;
	if (Source[0] == '-')
	{
		Sign = -1;
		Index++;
	}

	int Result = 0;
	while (Source[Index] != '\0')
	{
		//if (Source[Index] >= '0' && Source[Index] <= '9')
		//{ // �ϸ� ����.
		//}
		Result = Result * 10 + Source[Index] - '0';

		Index++;
	}
	return Sign * Result;
}

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
	const int ToUpperGap = 'a' - 'A';
	while ((*AfterComma) != '\0')
	{
		if ((*AfterComma) >= 'a' && (*AfterComma) <= 'z')
		{
			(*AfterComma) -= ToUpperGap;
		}
		AfterComma++;
	}
}

void ReadFile()
{
	//#include <fstream>	#include <string> �ʿ�
	const char* FilePath = ".\\Data\\TestData.txt";

	std::ifstream InputFile(FilePath);
	if (!InputFile.is_open())	// ������ ���ȴ��� Ȯ���ϴ� �Լ�
	{
		printf("������ �� �� �����ϴ�.\n");
		printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
		return;
	}

	std::string FileContents(
		(std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>());	//InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�

	printf("���� ������ ������ �����ϴ�.\n");
	printf("%s\n", FileContents.c_str());	// FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
}

void TestString()
{
	//#include <string>
	std::string str1 = "Hello";
	std::string str2("World");	// str1���� ������ �� �ٶ����ϴ�

	const char* Temp1 = "Hello";
	char Temp2[32] = { 0 };
	//Temp2 = Temp1;
	//char* Temp3 = Temp1;

	std::string str3 = str1;		// ����
	size_t Length = str3.length();	// ���� Ȯ��
	//int Size = Length;	// ũ�Ⱑ �ȸ¾Ƽ� ©�� �� �ִ�.
	Length = str3.size();

	std::string str4 = str1 + " " + str2;	// str4 = "Hello World", + ����� ���ɿ� ������ ���� �� �ִ�.
	str4 += "!";

	if (str1 == str2)
	{

	}
	if (str1 != str2)
	{

	}
	if (str1 > str2)	// ���� ������� ��
	{

	}

	size_t Position = str1.find('e');
	// �߰��� �������� std::string::npos ����
	Position = str1.find('e', Position + 1);	// �ι�° e�� ã�� ��(ù��° e�� �߰ߵǾ��ٴ� �����Ͽ�)

	str1[1] = 'E';	// Ư�� ��ġ�� ���ڿ� �����ϱ�. �ε��� ���� Ȯ���� ����. ��Ÿ�� ������ �� �� ����
	//str1[10] = 'E';	// ����
	str1.at(1) = 'E';	// �����ϰ� ����

	str1.c_str();	// C��Ÿ�� ���ڿ� �����ϱ�
}

