#include <iostream> //입출력 관련
#include <cstdio>  // stdio.h에 네임 스페이스 추가한 래퍼
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
	//printf("%s" , HelloString); //\0 가 문자열 마지막에 들어있어 끝맺음된다. %s 문자열 출력하기

	//간단 실습
	//HelloString에서 몇번째에 있는지 출력해보기

	/*int HelloCount = sizeof(HelloString) / sizeof(HelloString[0]);
	for (int i = 0; i < HelloCount; i++)
	{
		HelloString[i];
		if (HelloString[i] == 'e')
		{
			printf("e는 문자열의 %d 번째에 있습니다.", i + 1);
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
		printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
	}
	else
	{
		printf("[%c]는 찾을 수 없습니다.\n", Target);
	}*/
	/*char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0)
	{
		printf("[%c]는 %d번 인덱스에 있습니다.\n", Target, Index);
	}
	else
	{
		printf("[%c]는 찾을 수 없습니다.\n", Target);
	}*/
	//실습
	//1.문자열 길이 측정 함수 MyStringLength
	const char* TestString = "Hdllo";
	const char* TestString2 = "12345";
	const char* TestString3 = "12345.123";
	MyAtoF(TestString3);
	int Integer = MyAtoI(TestString2);
	printf("\n %d \n", Integer);
	//int Length = MyStringLength(TestString);
	//printf("[%s]의 길이는 %d입니다.", TestString, Length);
	////printf("%d\n", MyStringLength(TestString1));
	////2. 문자열을 복사하는 함수 MyStringCopy
	//char Destination[256] = { 0 };	// 크기는 그냥 충분하다고 가정
	//char* Destination2 = new char[MyStringLength(TestString) + 1]; //+1은'\0'용 공간
	//MyStringCopy(TestString, Destination2);
	//printf("\n\n문자열 복사하기\n");
	//printf("Source\t\t: %s\n", TestString);
	//printf("Destination\t: %s\n", Destination);
	//delete[] Destination2;
	//Destination2 = nullptr;
	////MyStringCopy(TestStr, TestString1);
	////3. 문자열 합치기 MyStringCat
	//printf("\n\n문자열 합치기\n");
	//char TestSource[32] = "Hello";
	//printf("원본 : %s\n", TestSource);
	//MyStringCat(TestSource, " World!");
	//printf("추가된 버전 : %s\n", TestSource);
	/*int Result = MyStringCompare(TestString, TestString2);
	printf("문자열 수 : %d\n", Result);*/
	//4. 비교
	/*int CompareResult = MyStringCompare("abc", "abd");

	if (CompareResult < 0)
	{
		printf("첫번째 문장이 더 작습니다..");
	}
	else if (CompareResult > 0)
	{
		printf("두번째 문장이 더 작습니다.");
	}
	else
	{
		printf("두 문장은 같은 문장입니다.");
	}*/
	//5. 정수 표현
	/*int IntegerNumber = MyAtoI("567");
	IntegerNumber = MyAtoI("-888");*/


	/*float FloatNumber = MyAtoF("123.45");
	FloatNumber = MyAtoF("55");


	const int Size = 32;
	char InputString[Size];
	printf("\n문장을 입력하세요.\n");
	std::cin.getline(InputString, Size);
	printf("입력된 문장은 [%s]입니다.\n", InputString);*/



	//간단 실습
	//입력문장 예시 : "Hello,World!"
	//,뒤에 있는 영어 알파벳은 모두 대문자이어야한다.
	//출력문장 예시 : "Hello,WORLD!"


	/*SimpleParser(InputString, ',');
	printf("파싱된 문장은 [%s]입니다.\n", InputString);*/

	//direct.h
	char Working[256];
	if (_getcwd(Working, 256) != nullptr)
	{
		printf("작업 디렉토리 : %s\n", Working);
	}

	// 파일 읽기
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

// 실습
	// 1. 문자열의 길이를 측정하는 함수 만들기
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
	// 2. 문자열을 복사하는 함수 만들기
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
	// 3. 문자열을 합치는 함수 만들기(Source 뒤에 Destination의 내용을 붙이기)
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
	// 4. 문자열 두개를 비교하는 함수 만들기
	//		리턴 값이 두 문자열이 같으면 0, 첫번째가 작으면 음수, 두번째가 작으면 양수
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
	// 둘 다 \0가 되었다.			-> 둘의 길이가 같고 안의 글자들도 같았다. -> 0
	// 하나만 \0가 되었다.		-> 둘의 길이가 다르다 -> 서로 다르다.
	// 중간에 다른 곳이 있었다.	-> 서로 다르다.
		
		
	}
	// 5. 문자열을 입력 받아 정수를 리턴하는 함수 만들기
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
				하면 좋다.
			}*/
			// IntChar = (IntChar + (Source[Index] - 48)) * 10;
			Result = Result * 10 + Source[Index] - '0';
			Index++;
		}
		return Sign * Result;

	}
	// 6. 문자열을 입력 받아 실수를 리턴하는 함수 만들기
	float MyAtoF(const char* Source)
	{
		float Result = 0.0f;
		int PointPosition = FindCharIndex(Source, '.');
		if (PointPosition >= 0)
		{
			// 점을 찾았다.
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
			// 점을 못찾았다.
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
		//#include <fstream>	#include <string> 필요
		const char* FilePath = ".\\Data\\TestData.txt";

		std::ifstream InputFile(FilePath);
		if (!InputFile.is_open())	// 파일이 열렸는지 확인하는 함수
		{
			printf("파일을 열 수 없습니다.\n");
			printf("[%s] 경로를 확인하세요.\n", FilePath);
			return;
		}

		//InputFile에 있는 글자들을 모두 읽어서 FileContents에 저장하기
		std::string FileContents(
			(std::istreambuf_iterator<char>(InputFile)),
			std::istreambuf_iterator<char>());	

		// FileContents안에 있는 문자열을 const char*로 돌려주는 함수
		printf("파일 내용은 다음과 같습니다.\n");
		printf("%s\n", FileContents.c_str());	
	}

	void TestString()
	{
		//#include <string>
		std::string str1 = "Hello";
		std::string str2("World");	//str1보다 이쪽이 더 바람직한 문법

		const char* Temp1 = "Hello";
		char Temp[32] = { 0 };
		//Temp2 = Temp1;
		//char* Temp3 = Temp1; 가능한 형식이지만 Temp1이 상수 형태라서 안됌.

		std::string str3 = str1;
		size_t Length = str3.length();

		//int Size = Length;	// 크기가 안맞아서 짤릴 수 있다.
		Length = str3.size();

		std::string str4 = str1 + " " + str2;	// str4 = "Hello World" , + 방식은 성능에 문제가 있을 수 있다.

		str4 += "!";

		if (str1 == str2)
		{

		}
		if (str1 != str2)
		{

		}
		if (str1 > str2) //사전 순서대로 비교
		{

		}

		//문자열 찾는 문법
		size_t Position = str1.find('e'); 
		//발견을 못했으면 std::string::npos 리턴
		Position = str1.find('e',Position + 1); // 두번재 e를 찾을 때(1번째 e 발견되었다는 전제하에)

		str1[1] = 'E'; //특정 위치의 글자에 접근하기, 인덱스 범위 확인 을 안함. 런타임 에러가 뜰 수 있음
		//str1[10] = 'E'; 터짐 해당 타입의 범위 벗어남
		str1.at(1) = 'E'; //안전하게 접근

		str1.c_str(); //C스타일 문자열 접근하기
	}

	//심화
	/*미로 탈출 게임을 수정하여 맵 데이터파일에서 읽은 내용을 기반으로 맵 만들기
		1) 데이터 파일 구조
		2) 첫줄은 가로 길이와 세로 길이가 저장되어 있다.
			ex) 20, 10 ⇒ 가로 20, 세로 10
		3) 두번째 줄 부터는 미로의 각 셀을 콤마(, )로 구분하여 셀의 타입을 나타낸다.
		4) 콤마(, ),
		5) \n으로 다음 줄로 이동한다.*/