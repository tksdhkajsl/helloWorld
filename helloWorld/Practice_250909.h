#pragma once

void TestPointer(int* pInt, float* pFloat);

void Day0909_02();

void Day0909_DynamicAllocation();

void Day0909_Example();


/// <summary>
/// �ֻ��� ������ �Լ�
/// </summary>
/// <param name="FaceNumber">�ֻ����� �� ��. �⺻���� 6</param>
/// <returns>�������� ���� �ֻ��� ��</returns>
int RollDice(int FaceNumber = 6);

void Day0908_Practice1();
void Day0908_Practice2();
void Day0908_Practice3();

//�̷�Ż����� ���� �ڵ�
void Day0908_MazeEscape();

enum MazeTile
{
    Path = 0,
    Wall = 1,
    Start = 2,
    End = 3
};

enum MoveDirection
{
    DirNone = 0,
    DirUp = 1 << 0,
    DirDown = 1 << 1,
    DirLeft = 1 << 2,
    DirRight = 1 << 3
};

//�̷� ũ�Ⱑ �����̾��� �� �ڵ�
//const int MazeWidth = 20;
//const int MazeHeight = 10;
//
//const int Maze[MazeHeight][MazeWidth] =
//{
//    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
//    {1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
//    {1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
//    {1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
//    {1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
//    {1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
//    {1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
//    {1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
//    {1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
//    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
//};


//int* Maze = nullptr;


/// <summary>
/// �̷θ� ����ϴ� �Լ�
/// </summary>
/// <param name="PlayerX">�÷��̾��� ���� ��ġ(X)</param>
/// <param name="PlayerY">�÷��̾��� ���� ��ġ(Y)</param>
void PrintMaze(int PlayerX, int PlayerY);

/// <summary>
/// �÷��̾��� ������ġ�� �޾ƿ��� �Լ�
/// </summary>
/// <param name="OutStartX">�÷��̾��� ������ġ(X) ��¿��Ķ����</param>
/// <param name="OutStartY">�÷��̾��� ������ġ(Y) ��¿��Ķ����</param>
void FindStartPosition(int& OutStartX, int& OutStartY);

/// <summary>
/// �÷��̾��� ���� ��ġ���� ������ �̵� ��θ� ����ϰ� ��� ��θ� ��ģ ��Ʈ �÷��׸� ��ȯ�մϴ�.
/// </summary>
/// <param name="PlayerX">�÷��̾��� ���� X ��ǥ�Դϴ�.</param>
/// <param name="PlayerY">�÷��̾��� ���� Y ��ǥ�Դϴ�.</param>
/// <returns>�÷��̾ �̵��� �� �ִ� ��θ� ��ģ ��Ʈ �÷��׸� ��ȯ�մϴ�.</returns>
int PrintAvailableMoves(int PlayerX, int PlayerY);

/// <summary>
/// �ش� ��ġ�� ������ Ȯ���ϴ� �Լ�
/// </summary>
/// <param name="X">Ȯ���� ��ġ(X)</param>
/// <param name="Y">Ȯ���� ��ġ(Y)</param>
/// <returns>���̸� true, �ƴϸ� false</returns>
bool IsWall(int X, int Y);

/// <summary>
/// �ش� ��ġ�� ���������� Ȯ���ϴ� �Լ�
/// </summary>
/// <param name="X">Ȯ���� ��ġ(X)</param>
/// <param name="Y">Ȯ���� ��ġ(Y)</param>
/// <returns>�������̸� true, �ƴϸ� false</returns>
bool IsEnd(int X, int Y);

/// <summary>
/// �Է�ó���� �ϴ� �Լ�. ���������� ������ �̵� ���� ����
/// </summary>
/// <param name="MoveFlags">�̵������� ��� ����� ��Ʈ�÷��� ��</param>
/// <returns>������ ����</returns>
MoveDirection GetMoveInput(int MoveFlags);


void Matrix();

void HighRow();