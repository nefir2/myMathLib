#include "pch.h"
#include <utility>
#include <limits.h>
#include "lib.h"
#pragma region internal variables
/// <summary>
/// ���������� �������� ������������������.
/// </summary>
static unsigned long long previuos;
/// <summary>
/// ��������� �������� ������������������.
/// </summary>
static unsigned long long current;
/// <summary>
/// ��������� ������� ������������������.
/// </summary>
static unsigned index;
#pragma endregion
#pragma region functions
void fibonacci_init(const unsigned long long a, const unsigned long long b) {
	index = 0;
	current = a;
	previuos = b;
}
bool fibonacci_next() {
	if (ULLONG_MAX - previuos < current || UINT_MAX == index) return false; //���� ���������� �� ���������, ������������ false.
	if (index > 0) previuos += current; //��������� ���������� ����� ������������������
	std::swap(current, previuos);
	++index;
	return true;
}
unsigned long long fibonacci_current() {
	return current;
}
unsigned fibonacci_index() {
	return index;
}
#pragma endregion