//#include <iostream>
//#include <functional>
//
////typedef int (*Adder)(int a, int b);
//using Adder = int(*)(int a, int b);
////using ClassAdder = int(Operator::*)(int a, int b);
////using Adder = std::function<int(int, int)>;
//
//// 반환형이 int 이고, 파라미터를 안 받는 함수
////int Function(int a, int b, Adder adder)
////int Function(int a, int b, std::function<int(int, int)> adder)
//int Function(int a, int b, Adder adder)
//{
//	return adder(a, b);
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
////class Operator
////{
////public:
////	int Add(int a, int b)
////	{
////		return a + b;
////	}
////};
//
//int main()
//{
//	// 함수 포인터 선언
//	//int (*FunctionPointer)();
//	//FunctionPointer = Function;
//
//	// 함수 포인터를 통한 간접 호출
//	std::cout << Function(10, 20, Add) << "\n";
//
//	//Operator oper;
//	//ClassAdder adder = &Operator::Add;
//
//	std::cin.get();
//}

#include <iostream>
#include <vector>
#include <algorithm>

// Functor (함수 객체)
class Less
{
public:
	bool operator()(int a, int b)
	{
		return a < b;
	}
};

// Functor (함수 객체)
class Greater
{
public:
	bool operator()(int a, int b)
	{
		return a > b;
	}

private:
	// 상태도 추가로 관리 가능
};


int main()
{
	// 정렬할 배열
	std::vector<int> array = { 1,2,3,4,5,6,7,8,9,10 };

	// 함수 객체 생성
	//Less less;
	//Greater greater;

	// 정렬
	//std::sort(array.begin(), array.end(), greater);
	auto greater = [](int a, int b)->bool {return a > b; };
	
	int num1 = 10;
	int num2 = 5;

	if (greater(num1, num2)) std::cout << "Y\n";
	else std::cout << "N\n";

	std::sort(
		array.begin(),
		array.end(),
		greater
	);

	int sum = 0;
	//auto test = []() {};
	std::for_each(
		array.begin(),
		array.end(),
		[&sum](int item)->void { sum += item; }
	);

	std::cout << "Sum = " << sum << "\n";

	// 출력
	for (const auto& item : array)
	{
		std::cout << item << " ";
	}

	std::cout << "\n";
	std::cin.get();
}