#include <iostream>

class Entity
{
public:

	// 구현이 내부로 들어온 것일 뿐
	// 여전히 외부 함수이다 (편의상 기능)
	friend void ShowEntity(Entity& entity)
	{
		std::cout << entity.x << ", " << entity.y << "\n";
	}

private:
	int x = 0;
	int y = 0;
};

// Entity 정보를 출력하는 함수
//void ShowEntity(Entity& entity)
//{
//	std::cout << entity.x << ", " << entity.y << "\n";
//}


int main()
{
	Entity entity;
	ShowEntity(entity);

	std::cin.get();
}