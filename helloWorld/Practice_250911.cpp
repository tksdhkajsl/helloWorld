#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <stdio.h>
#include <string>
#include "Practice_250910.h"
#include "Practice_250911.h"
#include "Practice_250909.h"

const char* DirectoryName = ".\\Data\\";

bool ReadMapFile(const char* MapFileName, std::string& OutDataString)
{
	//const char* FilePath = ".\\Data\\TestData.txt";
	char FilePath[256];
	//MyStringCopy(DirectoryName, FilePath);
	//MyStringCat(FilePath, MapFileName);
	strcpy(FilePath, DirectoryName);
	strcat(FilePath, MapFileName);

	std::ifstream InputFile(FilePath);
	if (!InputFile.is_open())	// ������ ���ȴ��� Ȯ���ϴ� �Լ�
	{
		printf("������ �� �� �����ϴ�.\n");
		printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
		return false;
	}

	OutDataString = std::string((std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>()); // InputFile�� �ִ� ���ڵ��� ��� �о OutDataString�� �����ϱ�

	//printf("���� ������ ������ �����ϴ�.\n");
	//printf("%s\n", FileContents.c_str());	// FileContents�ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�	

	return true;
}

bool ParseMapData(std::string& DataString)
{
	char Source[512];
	char* Current = Source;
	strcpy(Source, DataString.c_str());

	// ù° �� ó��
	// ���� �и��ϱ�
	char* LinePtr = GetLine(&Current);

	// ���� �Ľ��ϱ�
	int SizeNumbers[2] = { 0 };
	ParseLineData(LinePtr, 2, SizeNumbers);

	//printf("ArraySize : %d, %d\n", SizeNumbers[0], SizeNumbers[1]);

	// ���� ũ�⸦ �˾Ҵ�. => Maze ����
	MazeWidth = SizeNumbers[0];
	MazeHeight = SizeNumbers[1];

	Maze = new int* [MazeHeight];
	for (int y = 0; y < MazeHeight; y++)
	{
		Maze[y] = new int[MazeWidth];
		//memset(&Maze[y], 0, sizeof(int) * MazeWidth);
	}

	// Current�� \0�� �� ������ �ݺ�
	// LinePtr = GetLine(Current);		// ���� �߶󳻰�
	// ParseLineData(Line, MazeWidth, Maze[Index]); // �Ľ��ؼ� ������ �ְ�
	int HeightIndex = 0;
	while ((*Current) != '\0')
	{
		LinePtr = GetLine(&Current);
		ParseLineData(LinePtr, MazeWidth, Maze[HeightIndex]);
		HeightIndex++;

		if (HeightIndex >= MazeHeight)
			break;
	}

	return true;
}

char* GetLine(char** InOutSource)
{
	char* Result = (*InOutSource);
	int Index = FindCharIndex((*InOutSource), '\n');
	if (Index == -1)
	{
		(*InOutSource) = (*InOutSource) + FindCharIndex((*InOutSource), '\0');
	}
	else
	{
		*((*InOutSource) + Index) = '\0';
		(*InOutSource) = (*InOutSource) + Index + 1;
	}

	return Result;
}

void ParseLineData(const char* LineData, int ArraySize, int* OutArray)
{
	const char* LinePointer = LineData;
	int SizeIndex = 0;
	while ((*LinePointer) != '\0')
	{
		int Result = 0;
		while ((*LinePointer) != ',' && (*LinePointer) != '\0')
		{
			Result = Result * 10 + (*LinePointer) - '0';	// ���� �����
			LinePointer++;
		}
		OutArray[SizeIndex] = Result;	// ���� ��� ����
		SizeIndex++;

		if (ArraySize <= SizeIndex)	// �迭 ũ�� �̻����� �ִ� ���� ����
			break;

		if (*LinePointer < '0' || *LinePointer > '9')	// ���� �ܿ��� ��ŵ
			LinePointer++;
	}
}

void InitializeMaze()
{
	std::string Data;
	ReadMapFile("MapData.txt", Data);

	ParseMapData(Data);
}

void ClearMaze()
{
	if (Maze != nullptr)
	{
		for (int i = 0; i < MazeHeight; i++)
		{
			delete[] Maze[i];
			Maze[i] = nullptr;
		}
		delete[] Maze;
		Maze = nullptr;
	}
}

void Day0911()
{
	InitializeMaze();

	PrintMaze(1, 1);

	ClearMaze();
}
