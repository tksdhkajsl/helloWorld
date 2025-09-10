#pragma once


void Day0910_String();

/// <summary>
/// TargetString���� TargetCharacter�� ���° �ִ��� ã���ִ� �Լ�
/// </summary>
/// <param name="TargetString">ã���� ���ڿ�</param>
/// <param name="TargetCharacter">ã�� ����</param>
/// <returns>-1�̸� ��ã��, �� �ܴ� TargetCharacter�� �ε���</returns>
int FindCharIndex(const char* TargetString, const char TargetCharacter);

// 1. ���ڿ� ���� ���� �Լ�
int MyStringLength(const char* Target);

// 2. ���ڿ��� �����ϴ� �Լ� �����
void MyStringCopy(const char* Source, char* Destination);

// 3. ���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)
void MyStringCat(char* Source, const char* Destination);

// 4. ���ڿ� �ΰ��� ���ϴ� �Լ� �����
//		���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
int MyStringCompare(const char* String1, const char* String2);
// 5. ���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
int MyAtoI(const char* Source);
// 6. ���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
float MyAtoF(const char* Source);


void SimpleParser(char* Source, const char Delimiter);

void ReadFile();

void TestString();