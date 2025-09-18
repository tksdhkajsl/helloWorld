#pragma once
#include <cstdint>
using uint32 = uint32_t;
using int32 = int32_t;
struct DoubleListNode
{
	int32 Data = 0;
	DoubleListNode* Next = nullptr;	// 다음 노드의 주소(nullptr이면 다음 노드가 없다)
	DoubleListNode* Prev = nullptr;	// 이전 노드의 주소(nullptr이면 이전 노드가 없다)

	DoubleListNode(int32 InData) : Data(InData) {};
};
class DoubleLinkedList
{
public:
	DoubleLinkedList() = default;

	// 만들어진 노드들을 정리하기 위해 필요
	~DoubleLinkedList();

	// 데이터를 리스트에 하나 추가하는 함수(리스트의 마지막에 추가)
	void DoubleAdd(int32 InData);

	// 데이터를 특정 위치에 추가하는 함수(범위를 벗어나면 마지막에 추가)
	void DoubleInsertAt(int32 InData, uint32_t InPosition);

	// 데이터를 삭제하는 함수(InData와 같은 값을 가지는 노드를 삭제하는 함수. 중복 없음.)
	void DoubleRemove(int32 InData);

	// 데이터를 삭제하는 함수(InPosition번째의 데이터를 삭제하는 함수. 범위 벗어나면 에러만 출력.)
	void DoubleRemoveAt(int32 InPosition);

	// InData를 가진 노드를 찾아 리턴하는 함수(없으면 nullptr 리턴)
	DoubleListNode* Search(int32 InData) const;

	// 리스트 내용을 출력하는 함수
	void DoublePrintList() const;


private:
	inline bool IsEmpty() const { return Head == nullptr; }

	// 리스트의 첫번째 노드
	DoubleListNode* Head = nullptr;
	

	// 리스트의 마지막 노드
	DoubleListNode* Tail = nullptr;
	

	// 리스트에 있는 노드의 수
	uint32 Size = 0;
};

