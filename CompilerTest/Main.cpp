#include <iostream>
#include "Log.h"

//void Log(const char* message);
//void Log(const char* message)
//{
//	std::cout << message << "\n";
//}

// Ctrl + 방향키 좌우
// Home + End + (Shift)
// F12, Ctrl + - (탐색, 복귀)
// Alt + Shift (여러줄 한번에 쓰기)
// Ctrl + K + O (함수 선언부, 몸통)

int main()
{
	//std::cout << "Hello World\n";
	Log("Hello World");

	// 프로그램 바로 종료되지 말라고 붙임
	// 의미 없음
	std::cin.get();
}