#pragma once

//��� ���Ͽ��� ������ �ۼ��Ѵ�.
//ctrl+k+o : Cpp��h �� ��ȯ
//ctrl + . ���� �̸��� Cpp ���Ͽ� �Լ� �����
void PrintHelloWorld(); //�����ϴ� ���� ����(void) �̸��� PrintHelloWorld , �Ķ���͵� ����.




/// <summary>
/// �� �Ķ���͸� ���ϴ� �Լ�
/// </summary>
/// <param name="Number1">ù��° �޴� ��</param>
/// <param name="Number2">�ι�° �޴� ��</param>
/// <returns></returns>
int Sum(int Number1, int Number2); //����Ÿ���� int�� �̸��� Sum�̰�, �Ķ���ʹ� int 2���� �Լ��� �����ߴ�.
//int Sum(int, int); //������ ���� �Լ��� �Ķ���� �̸��� �����ص� �ȴ�.



float Sum(float Test1, float Test2);

//���ø� �Լ��� ����� ���� ������ �����ϴ� �� ����
template<typename T>
T Add(T Number1, T Number2)
{
	return Number1 + Number2;
}

//�Ķ���� �� ���� ���ؼ� �����ִ� �Լ�
int Multiply(int Number1, int Number2 = 2); //����Ʈ �Ķ���� ��� ����
										//�ش� �Ķ���� ���� �Լ��� ȣ���ϸ� �⺻������ ������ ���� ��� ����.
										//����ο��� ���� �����Ѵ�.
										//����Ʈ �Ķ��Ÿ�� �׻� �ڿ������� �־�� �Ѵ�.

int Sub(int Number1, int Number2);

int Divide(int Number1, int Number2);

int TestRecurcive(int Number);

inline int Square(int Number)
{
	return Number * Number;
}
