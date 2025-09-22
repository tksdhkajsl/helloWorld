#pragma once


struct position
{
	int x = 0;
	int y = 0;

	//�ޱ� �� �ִ� ��Ȳ�̸� ��������� ǥ���ϴ� �� ����.
	position() = default; //�ڵ����� �����Ǵ� �⺻ �����ڿ� ����.
	

	// �ޱ� �� �ִ� ��Ȳ�̸� ��������� �̾߱� ���ִ� ���� ����.
	position() = default;	// �ڵ����� �����Ǵ� �⺻�����ڿ� ����.	
	position(int inx, int iny)
		: x(inx), y(iny)
	{
		// �߰� ����� �ʿ��� ���. ���ʿ� ���� �����ϱ�.
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


//// �̷�
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