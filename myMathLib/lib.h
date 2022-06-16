#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

/// <summary>
/// ������������� ������������������ ���������.
/// </summary>
/// <param name="a">F(n - 2)</param>
/// <param name="b">F(n - 1)</param>
/// <returns></returns>
extern "C" MATHLIBRARY_API void fibonacci_init(const unsigned long long a, const unsigned long long b);

/// <summary>
/// ���������� ��������� �������� ������������������.
/// </summary>
/// <returns>
/// ���������� true ��� �������� ���������� ���������� �������� � �������;
/// ���������� false ��� ������������ � �� ������ �������� � ������.
/// </returns>
extern "C" MATHLIBRARY_API bool fibonacci_next();

/// <summary>
/// ���������� �������� �������� ������������������.
/// </summary>
/// <returns>��������� �������� ������������������.</returns>
extern "C" MATHLIBRARY_API unsigned long long fibonacci_current();

/// <summary>
/// ���������� ������� ���������� �������� � ������������������.
/// </summary>
/// <returns>
/// ��������� ������ ������������������.
/// </returns>
extern "C" MATHLIBRARY_API unsigned fibonacci_index();