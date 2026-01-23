#include <iostream>

// 클래스
class Entity
{
public:
	Entity()
	{
		std::cout << "Constructor called\n";
	}

	~Entity() = default;

	// 함수 끝에 const를 지정하면,
	// 함수 본문에서 객체 내부의 값을 변경할 수 없음
	void ShowName() const
	{
		std::cout << "Entity. \n";
	}

	const Entity* GetSelf() const
	{
		// this는 자기 자신을 가리키는 '포인터'
		return this;
	}
};

int main()
{
	// 면접문제. 아래 코드가 작동하는 이유
	//Entity* entity = nullptr;
	//entity->ShowName();
	// 이게 왜 됨?
	// C++ 가 컴파일할 때 C의 문법처럼 변환함
	// void ShowName(Entity* entity)
	// ....
	// ShowName(entity)		의 형식으로 바뀜
	// 객체 정보를 전달해서 실행하는 식으로 바뀌면서
	// 함수 내부에서 클래스의 내부를 건드리지 않으면 함수가 정상적으로 실행된다
	// 그래서 실행되더라...


	//const int count = 5;
	//Entity entities[count];

	//// Range-Based Loop ( foreach )
	//for (const Entity& entity : entities)
	//{
	//	entity.ShowName();
	//}

	//const int count = 5;
	//Entity* entities[count] = { };
	////memset(entities, 0, sizeof(Entity*) * count);

	//for (int ix = 0; ix < count; ++ix) 
	//{
	//	entities[ix] = new Entity();
	//}

	//// 참조를 하는 행위는 메모리를 복사를 하는 것이고
	//// 실제로 두 포인터는 같은 주소를 가리키는 것일 뿐,
	//// 다른 변수이기 때문에 참조를 해야함
	////for (Entity* entity : entities)	<- 문제있음
	//for (Entity*& entity : entities)
	//{
	//	delete entity;
	//	entity = nullptr;
	//}

	Entity* entity = new Entity();
	std::cout << entity << "\n";
	std::cout << entity->GetSelf() << "\n";

	delete entity;


	std::cin.get();
}