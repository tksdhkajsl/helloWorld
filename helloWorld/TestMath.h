#pragma once

//헤더 파일에는 선언을 작성한다.
//ctrl+k+o : Cpp와h 를 전환
//ctrl + . 같은 이름의 Cpp 파일에 함수 만들기
void PrintHelloWorld(); //리턴하는 값이 없고(void) 이름은 PrintHelloWorld , 파라메터도 없다.




/// <summary>
/// 두 파라메터를 더하는 함수
/// </summary>
/// <param name="Number1">첫번째 받는 수</param>
/// <param name="Number2">두번째 받는 수</param>
/// <returns></returns>
int Sum(int Number1, int Number2); //리턴타입이 int고 이름은 Sum이고, 파라메터는 int 2개인 함수를 선언했다.
//int Sum(int, int); //선언할 때는 함수의 파라메터 이름은 생략해도 된다.



float Sum(float Test1, float Test2);

//템플릿 함수는 헤더에 리턴 값까지 설정하는 게 좋다
template<typename T>
T Add(T Number1, T Number2)
{
	return Number1 + Number2;
}

//파라메터 두 개를 곱해서 돌려주는 함수
int Multiply(int Number1, int Number2 = 2); //디폴트 파라메터 사용 예시
										//해당 파라메터 없이 함수를 호출하면 기본적으로 설정된 값이 대신 들어간다.
										//선언부에만 값을 설정한다.
										//디폴트 파라메타는 항상 뒤에서부터 있어야 한다.

int Sub(int Number1, int Number2);

int Divide(int Number1, int Number2);

int TestRecurcive(int Number);

inline int Square(int Number)
{
	return Number * Number;
}
