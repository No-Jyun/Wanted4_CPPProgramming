#include <iostream>

void PrintString(char* string)
{
	std::cout << string << "\n";
}

class A 
{
public:
	virtual void Test() {}
};
class B : public A
{};

int main()
{
	const char* name = "TeMMiE";
	PrintString(const_cast<char*>(name));

	int number = 10;
	float floatNumber = static_cast<float>(number);

	A* a = new A();
	B* b = static_cast<B*>(a);		// 잘 알고 써야함
	if (b)
	{
		std::cout << "b is not null\n";
	}
	B* b1 = reinterpret_cast<B*>(a);	// 위험
	if (b1)
	{
		std::cout << "b1 is not null\n";
	}
	B* b2 = dynamic_cast<B*>(a);
	if (b2)
	{
		std::cout << "b2 is not null\n";
	}

	const type_info& infoA = typeid(a);
	const type_info& infoB = typeid(b);
	
	if (infoA == infoB)
	{
		std::cout << "Same\n";
	}

	//std::cout << "Type of a is " << info.name() << "\n";

	delete a;
	std::cin.get();
}