#pragma once


struct position
{
	int x = 0;
	int y = 0;

	//햇깔릴 수 있는 상황이면 명시적으로 표현하는 게 좋다.
	position() = default; //자동으로 생성되는 기본 생성자와 같다.
	

	// 햇깔릴 수 있는 상황이면 명시적으로 이야기 해주는 것이 좋다.
	position() = default;	// 자동으로 생성되는 기본생성자와 같다.	
	position(int inx, int iny)
		: x(inx), y(iny)
	{
		// 추가 계산이 필요한 경우. 이쪽에 새로 대입하기.
	}

	position& operator+=(const position& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}
	position& operator-=(const position& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}
};


//// 미로
struct mazeposition
{
	int x;
	int y;

	mazeposition() : x(0), y(0) {}
	mazeposition(int inx, int iny) : x(inx), y(iny) {}

	mazeposition operator+(const mazeposition& other) const
	{
		return mazeposition(x + other.x, y + other.y);
	}

	mazeposition operator-(const mazeposition& other) const
	{
		return mazeposition(x - other.x, y - other.y);
	}

	bool operator==(const mazeposition& other) const
	{
		return x == other.x && y == other.y;
	}

	bool operator!=(const mazeposition& other) const
	{
		return !(*this == other);
	}
};