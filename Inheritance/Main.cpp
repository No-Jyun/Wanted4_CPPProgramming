#include <iostream>

// 클래스
class Entity
{
public:
	Entity()
	{
		std:: cout << "Entity() called\n";
	}

	~Entity()
	{
		std::cout << "~Entity() called\n";
	}

protected:
	float x = 0.0f;
	float y = 0.0f;
};

// : 다음에 상속할 부모 클래스 타입 지정
// Is-A 관계	A가 B로 치환이 가능할 때
class Player : public Entity
{
public:
	Player()
	{
		std::cout << "Player() called\n";
	}
	~Player()
	{
		std::cout << "~Player() called\n";
	}

private:
	char* name = nullptr;
};

int main()
{
	//Entity entity;
	Player player;

	std::cin.get();
}