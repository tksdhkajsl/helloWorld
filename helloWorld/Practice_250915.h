#pragma once
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Practice_250910.h"
#include "Practice_250911.h"
#include "Practice_250909.h"
#include "Practice_250912.h"
#include "BlackJack.h"


void Day0915_WeekPracticeBlackJackTest();
void Day0915_WeekPracticeTest();
/// <summary>
/// ��¥�� �Է��ϸ� ������ �˷��ִ� �Լ�
/// </summary>
/// <param name="Year">��</param>
/// <param name="Month">��</param>
/// <param name="Day">��</param>
/// <returns>���� ���ڿ�</returns>
const char* GetDayOfWeek(int Year, int Month,int Day);


/// <summary>
/// ���� �Ǻ� �Լ�
/// </summary>
/// <param name="Year">Ȯ���� ����</param>
/// <returns>�����̸� true, �ƴϸ� false</returns>
bool IsLeap(int Year);


/// <summary>
/// 1�� 1�� 1�Ͽ��� ��ĥ�� �������� ����ϴ� �Լ�
/// </summary>
/// <param name="Year">��</param>
/// <param name="Month">��</param>
/// <param name="Day">��</param>
/// <returns></returns>
int TotalGetTotalDays(int Year, int Month, int Day);

void Day0915_WeekPractice();