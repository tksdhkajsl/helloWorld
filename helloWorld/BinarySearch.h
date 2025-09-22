#pragma once

struct TreeNode
{
	int Key = 0;
	TreeNode* Left = nullptr;
	TreeNode* Right = nullptr;


	TreeNode() = default;
	TreeNode(int InKey) : Key(InKey){}
};
class BinarySearch
{
public:
	BinarySearch() = default;
	~BinarySearch();

	void Insert(int InKey);
	void Delete(int InKey);
	TreeNode* Search(int InKey);

	void PrintPreOrder() const; //���� ��ȸ
	void PrintInOrder() const;	//���� ��ȸ	
	void PrintPoseOrder() const;//���� ��ȸ

	inline bool IsEmpty() const { return Root == nullptr; }
private:
	TreeNode* Root = nullptr;

	TreeNode* InsertNode(TreeNode* InNode, int InKey);
	TreeNode* DeleteNode(TreeNode* InNode, int InKey);
	TreeNode* SearchNode(TreeNode* InNode, int InKey);

	//InNode�� ��Ʈ���ϴ� ����Ʈ������ ���� ���� Ű�� ������ ��带 ã�� �Լ�
	TreeNode* FindMinNode(TreeNode* InNode); 

	void PreOrderTraversal(TreeNode* InNode) const;
	void InOrderTraversal(TreeNode* InNode) const;
	void PoseOrderTraversal(TreeNode* InNode) const;


	void DestroyTree(TreeNode* InNode);
};

