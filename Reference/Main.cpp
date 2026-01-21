#include <iostream>

//#define LOG(x) std::cout << x << std::endl
 
// Call-By-Value
// 값으로 호출 = "값"을 복사
//void Increment(int value)
//{
//	value++;
//}

// Call-By-Reference
// 참조에 의한 호출
// 참조 = 주소 -> 주소 값 복사
//void Increment(int* value)
//{
//	++(*value);		// 주소를 증가시키면 안되고 역참조하여 값을 증가
//}

// Call-By-Reference
void Increment(int& value)
{
	++value;
}

int main()
{
	//int a = 5;
	//int& ref = a;	// L-Value Reference
	//ref = 10;

	int  number = 10;
	Increment(number);

	std::cin.get();
}