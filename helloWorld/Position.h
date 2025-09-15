#pragma once
//
//
//struct Position
//{
//	int x = 0;
//	int y = 0;
//
//	//햇깔릴 수 있는 상황이면 명시적으로 표현하는 게 좋다.
//	Position() = default; //자동으로 생성되는 기본 생성자와 같다.
//	
//
//	// 햇깔릴 수 있는 상황이면 명시적으로 이야기 해주는 것이 좋다.
//	Position() = default;	// 자동으로 생성되는 기본생성자와 같다.	
//	Position(int InX, int InY)
//		: x(InX), y(InY)
//	{
//		// 추가 계산이 필요한 경우. 이쪽에 새로 대입하기.
//	}
//
//	Position& operator+=(const Position& other)
//	{
//		x += other.x;
//		y += other.y;
//		return *this;
//	}
//	Position& operator-=(const Position& other)
//	{
//		x -= other.x;
//		y -= other.y;
//		return *this;
//	}
//};
//
//
////// 미로
////struct MazePosition
////{
////	int x;
////	int y;
////
////	MazePosition() : x(0), y(0) {}
////	MazePosition(int InX, int InY) : x(InX), y(InY) {}
////
////	MazePosition operator+(const MazePosition& Other) const
////	{
////		return MazePosition(x + Other.x, y + Other.y);
////	}
////
////	MazePosition operator-(const MazePosition& Other) const
////	{
////		return MazePosition(x - Other.x, y - Other.y);
////	}
////
////	bool operator==(const MazePosition& Other) const
////	{
////		return x == Other.x && y == Other.y;
////	}
////
////	bool operator!=(const MazePosition& Other) const
////	{
////		return !(*this == Other);
////	}
////};