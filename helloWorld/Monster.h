#pragma once
#include<string>

//1. Monster 클래스 예시 만들기
//	추상화
//2. Monster 클래스 만들기
//	기본 속성 : 이름, 체력, 공격력
//	공통 함수 : Attack()
//3. 캡슐화
//	각 속성을 protected로 만들기
//	기본 속성은 생성자에서 세팅
//	각종 Getter만들기
//4. 상속
//	고블린, 오크, 좀비, 스켈레톤 등등 만들기
//	고유 스킬 만들기
//5. 미로 탈출 게임 수정하기
//	적을 클래스화하기(Monster로 대체)
//	플레이어 클래스 만들고 적용하기
//	적과 플레이어의 부모인 Actor 클래스 만들기
class Monster
{
public:
	Monster() = default;
	Monster(std::string InName)
		: MName(InName)
	{
	}

	//읽기 생성자 
	inline const std::string& GetName() const { return MName; }
	inline const float GetHealth() const { return Health; }
	inline const float GetDamage() const { return Damage; }
	inline const int GetGold() const { return Gold; }


protected:
	void Attack();

	std::string MName = "몬스터";
	float Health = 0.0f;
	float Damage = 0.0f;
	int Gold = 0;

	Monster(const char* InName); //생성자
};

