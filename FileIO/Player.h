#pragma once

// 언리얼의 직렬화 방식
// id int 1
// score int 300
// attack float 100.0
//enum VariableType
//{
//	Unknown,
//	Int,
//	Float,
//	Enum,
//	String,
//};
//
//template<typename T, VariableType Type>
//class Variable
//{
//public:
//	T GetValue();
//	//int GetIntValue();
//	//float GetFloatValue();	// ....
//
//private:
//	char* name = nullptr;
//	//VariableType type = VariableType::Unknown;
//	VariableType type = Type;
//	void* data = nullptr;
//};

class Player
{
public:
	Player();
	Player(int id, int score, float attack);
	~Player();

	// 직렬화 (파일에)
	void Serialize(const char* path);

	// 역직렬화 (파일에서)
	void Deserialize(const char* path);

private:
	int score = 0;
	int id = 0;
	float attack = 0.0f;
};
