#include <iostream>

// 최적화 : 용량 / 속도
// 인라인 함수 -> 속도 때문에 사용 (용량을 포기함)
// 매크로(Macro)

// #define Square(x) ( (x) * (x) )
// inline int Square(int x)
// __forceinline int Square(int x)
// FORCEINLINE int Square(int x)

#define FORCEINLINE __forceinline

FORCEINLINE int Square(int x)
{
	return x * x;
}

int main()
{
	int number = Square(10);
	std::cout << number << '\n';

	std::cin.get();
}