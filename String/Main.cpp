#include <iostream>
#include <Windows.h>

#define MYTEXT(value) L##value
#define MYTEST(value1, value2) value1##value2

// 클래스 내부에서 문자열을 다루기
class Player
{
	// public / private / protected
	// -> 접근 한정자 / 접근 제한자
	// 접근 가능한 범위를 설정
public:
	// 생성자 (Constructer)
	// 객체를 생성할 때 호출되는 특별한 함수
	// 반환형이 없고, 클래스 이름과 동일
	Player(const char* inName)
	{
		// 문자열 복사
		//name = inName;
		
		// 1. 저장 공간 확보
		// -> 확보할 공간의 크기를 알아야 함
		size_t length = strlen(inName) + 1;	// NULL 문자는 빼기 때문에 1을 더해준다
		name = new char[length];

		// 2. 문자열 복사
		// memcpy()
		strcpy_s(name, length, inName);
	}

	// 소멸자
	// 객체가 해제될 때 실행
	~Player()
	{
		//if (name != nullptr)
		if (name)
		{
			delete[] name;
			name = nullptr;
		}
	}

private:
	// 문자열을 저장할 변수
	char* name = nullptr;
};

int main()
{
	// 문자열
	// 문자열은 불변성을 가짐
	const char* testString = "TeMMiE";
	std::cout << testString << "\n";

	// 문자 배열도 가능
	char buffer[7] = { 'T', 'e','M','M','i','E','\0' };
	std::cout << buffer << "\n";

	// 객체 기반으로 문자열 사용
	Player player("TeMMiEH");

	// wide-character
	//const wchar_t* wideString = L"Hello wide string";
	const wchar_t* wideString = MYTEXT("Hello wide string");

	std::wcout << wideString << TEXT("\n");

	//auto test = MYTEST(10000000, '5');

	std::cin.get();
}