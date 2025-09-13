#pragma once




/// <summary>
/// TargetString에서 TargetCharacter가 몇번째 있는지 찾아주는 함수
/// </summary>
/// <param name="TargetString">찾아질 문자열</param>
/// <param name="TargetCharacter">찾을 글자</param>
/// <returns>-1이면 못찾음, 그 외는 TargetCharacter의 인덱스</returns>


// 1. 문자열 길이 측정 함수

// 2. 문자열을 복사하는 함수 만들기

// 3. 문자열을 합치는 함수 만들기(Source 뒤에 Destination의 내용을 붙이기)
// 4. 문자열 두개를 비교하는 함수 만들기
//		리턴 값이 두 문자열이 같으면 0, 첫번째가 작으면 음수, 두번째가 작으면 양수
// 5. 문자열을 입력 받아 정수를 리턴하는 함수 만들기
// 6. 문자열을 입력 받아 실수를 리턴하는 함수 만들기
void Day0910_String();

/// <summary>
/// TargetString에서 TargetCharacter가 몇번째 있는지 찾아주는 함수
/// </summary>
/// <param name="TargetString">찾아질 문자열</param>
/// <param name="TargetCharacter">찾을 글자</param>
/// <returns>-1이면 못찾음, 그 외는 TargetCharacter의 인덱스</returns>
int FindCharIndex(const char* TargetString, const char TargetCharacter);

int MyStringLength(const char* Target);
void MyStringCopy(const char* Source, char* Destination);
void MyStringCat(char* Source, const char* Destination);
int MyStringCompare(const char* String1, const char* string2);
int MyAtoI(const char* Source);
float MyAtoF(const char* Source);
void SimpleParser(char* Source, const char Delimiter);
void ReadFile();
void TestString();
