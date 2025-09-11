#pragma once




/// <summary>
/// TargetString���� TargetCharacter�� ���° �ִ��� ã���ִ� �Լ�
/// </summary>
/// <param name="TargetString">ã���� ���ڿ�</param>
/// <param name="TargetCharacter">ã�� ����</param>
/// <returns>-1�̸� ��ã��, �� �ܴ� TargetCharacter�� �ε���</returns>


// 1. ���ڿ� ���� ���� �Լ�

// 2. ���ڿ��� �����ϴ� �Լ� �����

// 3. ���ڿ��� ��ġ�� �Լ� �����(Source �ڿ� Destination�� ������ ���̱�)
// 4. ���ڿ� �ΰ��� ���ϴ� �Լ� �����
//		���� ���� �� ���ڿ��� ������ 0, ù��°�� ������ ����, �ι�°�� ������ ���
// 5. ���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
// 6. ���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
void Day0910_String();

/// <summary>
/// TargetString���� TargetCharacter�� ���° �ִ��� ã���ִ� �Լ�
/// </summary>
/// <param name="TargetString">ã���� ���ڿ�</param>
/// <param name="TargetCharacter">ã�� ����</param>
/// <returns>-1�̸� ��ã��, �� �ܴ� TargetCharacter�� �ε���</returns>
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
