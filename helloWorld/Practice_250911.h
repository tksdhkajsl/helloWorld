#pragma once

// extern : �ٸ� cpp�� �� ������ �Լ��� �ִٰ� �˷��ִ� �뵵.
extern int MazeWidth;
extern int MazeHeight;
extern int** Maze;



/// <summary>
/// �� ������ �д� �Լ�
/// </summary>
/// <param name="MapFileName">�� ���� �̸�</param>
/// <param name="OutDataString">��¿�. ���Ͽ��� ���� �ؽ�Ʈ�� �����ش�.</param>
/// <returns>������ �дµ� �����ϸ� true, �����ϸ� false</returns>
bool ReadMapFile(const char* MapFileName, std::string& OutDataString);

/// <summary>
/// string�� �޾Ƽ� Maze�� ü��µ� �ʿ��� �����͸� �Ľ��ϴ� �Լ�
/// </summary>
/// <param name="DataString">�ҽ��� ���ڿ�</param>
/// <returns>true : �Ľ̼���, false : �� ������(DataString)�� �߸��� ���</returns>
bool ParseMapData(std::string& DataString);

/// <summary>
/// Source���� �߰ߵ� ù���� �����ϴ� �Լ�
/// </summary>
/// <param name="InOutSource">��(\n)�� ã�� ���� ������</param>
/// <returns>Source���� ù���� �ּ�</returns>
char* GetLine(char** InOutSource);

/// <summary>
/// ���ڿ� ������ �Ľ��ϴ� �Լ�
/// </summary>
/// <param name="LineData">�Ľ��� ���ڿ�</param>
/// <param name="ArraySize">����� ����� �迭�� ũ��</param>
/// <param name="OutArray">����� ����� �迭</param>
void ParseLineData(const char* LineData, int ArraySize, int* OutArray);

/// <summary>
/// �̷� ������ �ʱ�ȭ �ϴ� �Լ�
/// </summary>
void InitializeMaze();

/// <summary>
/// �̷� ������ �����ϴ� �Լ�(�Ҵ�� �޸𸮸� �����ϴ� �Լ�)
/// </summary>
void ClearMaze();

void Day0911();