#include <iostream>

// 배열을 함수에 전달
void PrintArray(int* array, int length)
{
	//size_t size = sizeof(array); // 포인터로 가지고 있는 저장공간(size)을 구하려하면 안됨
	for (int ix = 0; ix < length; ix++)
	{
		std::cout << array[ix] << '\n';
	}
}

int main()
{
	// 배열 선언
	//int array[10] = {};
	int array[10];
	memset(array, 0, sizeof(int) * 10);

	// 0부터 시작, 마지막은 크기 - 1
	array[0] = 1;
	array[3] = 10;
	array[9] = 100;

	// Out-Of-Index(Range)
	//array[10] = 1000; // 컴파일러가 막아줌
	//array[-1] = 1000;

	// 배열의 이름은 주소(포인터)
	int* arrayPointer = array;
	//arrayPointer[1] = 20;
	*(arrayPointer + 1) = 20;

	PrintArray(arrayPointer, 10);

	// 배열 원소 전체 읽기 (순회)
	// range-based loop
	//for (const int& item : array)
	//{
	//	std::cout << item << "\n";
	//}
	
	//for (int ix = 0; ix < 10; ix++)
	//{
	//	std::cout << array[ix] << "\n";
	//}

	// 배열 동적 할당
	int* dynamicArray = new int[10];
	memset(dynamicArray, 3, sizeof(int) * 10);
	for (int ix = 0; ix < 10; ix++)
	{
		dynamicArray[ix] = ix + 1;
	}

	// 해제
	delete[] dynamicArray;

	std::cin.get();
}