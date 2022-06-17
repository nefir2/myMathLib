#include "pch.h"
#include <utility>
#include <limits.h>
#include "lib.h"
#pragma region internal variables
/// <summary>
/// прошлое значение последовательности.
/// </summary>
static unsigned long long previuos;
/// <summary>
/// настоящее значение последовательности.
/// </summary>
static unsigned long long current;
/// <summary>
/// индекс значения последовательности.
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
	if (ULLONG_MAX - previuos < current || UINT_MAX == index) return false; //если выходит за пределы типа значения, то возвращается false.
	if (index > 0) previuos += current; //получение следующего значения последовательности.
	std::swap(current, previuos);
	++index;
	return true; //возврат true, при удачном получении следующего значения последовательности.
}
unsigned long long fibonacci_current() {
	return current; //возврат настоящего числа.
}
unsigned fibonacci_index() {
	return index; //возврат индекса настоящего числа последовательности.
}
#pragma endregion