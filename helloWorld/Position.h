#pragma once
//
//
//struct Position
//{
//	int x = 0;
//	int y = 0;
//
//	//�ޱ� �� �ִ� ��Ȳ�̸� ��������� ǥ���ϴ� �� ����.
//	Position() = default; //�ڵ����� �����Ǵ� �⺻ �����ڿ� ����.
//	
//
//	// �ޱ� �� �ִ� ��Ȳ�̸� ��������� �̾߱� ���ִ� ���� ����.
//	Position() = default;	// �ڵ����� �����Ǵ� �⺻�����ڿ� ����.	
//	Position(int InX, int InY)
//		: x(InX), y(InY)
//	{
//		// �߰� ����� �ʿ��� ���. ���ʿ� ���� �����ϱ�.
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
////// �̷�
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