#include <iostream>

// void DeletePointer(void* ptr) : 안되는 이유 pointer를 해제하는게 아니라 pointer가 가리키는 곳을 가리킴
void DeletePointer(void*& ptr)
{
	if (ptr != nullptr)
	{
		delete ptr;
		ptr = nullptr;
	}
}

int main()
{
	// 동적 할당
	char* buffer = new char[10];

	// 포인터는 저장하는 변수
	//void* pointer = nullptr;
	void* pointer = new int;
	DeletePointer(pointer);
	//delete pointer;
	//pointer = nullptr;

	// null check
	if (pointer != nullptr)
	{
		std::cout << "Pointer is not null\n";
	}
	else
	{
		std::cout << "Pointer is null\n";
	}

	// 의미는 없음
	std::cin.get();
}