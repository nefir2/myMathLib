#pragma once

#ifdef MYMATHLIB_EXPORTS
#define MYMATHLIB_API __declspec(dllexport)
#else
#define MYMATHLIB_API __declspec(dllimport)
#endif

/// <summary>
/// инициализация последовательности фибоначчи.
/// </summary>
/// <param name="a">F(n - 2)</param>
/// <param name="b">F(n - 1)</param>
/// <returns></returns>
extern "C" MYMATHLIB_API void fibonacci_init(const unsigned long long a, const unsigned long long b);

/// <summary>
/// производит следующее значение последовательности.
/// </summary>
/// <returns>
/// возвращает true при успешном обновлении настоящего значения и индекса;
/// возвращает false при переполнении и не меняет значение и индекс.
/// </returns>
extern "C" MYMATHLIB_API bool fibonacci_next();

/// <summary>
/// возвращает нынешнее значение последовательности.
/// </summary>
/// <returns>настоящее значение последовательности.</returns>
extern "C" MYMATHLIB_API unsigned long long fibonacci_current();

/// <summary>
/// возвращает позицию настоящего значения в последовательности.
/// </summary>
/// <returns>
/// настоящий индекс последовательности.
/// </returns>
extern "C" MYMATHLIB_API unsigned fibonacci_index();