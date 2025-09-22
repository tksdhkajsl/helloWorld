#include "BinarySearch.h"
#include<cstdio>

BinarySearch::~BinarySearch()
{
    DestroyTree(Root);
}

void BinarySearch::Insert(int InKey)
{
    Root = InsertNode(Root, InKey);
}

void BinarySearch::Delete(int InKey)
{
    Root = DeleteNode(Root, InKey);
}

TreeNode* BinarySearch::Search(int InKey)
{
    return SearchNode(Root, InKey);
}

void BinarySearch::PrintPreOrder()  const
{
    printf("PreOrder : ");
    PreOrderTraversal(Root);
    printf("\n");
}

void BinarySearch::PrintInOrder() const
{
}

void BinarySearch::PrintPoseOrder() const
{
}

TreeNode* BinarySearch::InsertNode(TreeNode* InNode, int InKey)
{
    if (InNode == nullptr)
    {
        //�����Ʈ�� null�̸� �װ��� �� ��� ���� ����ǰ� �ϱ�
        return new TreeNode(InKey); 

    }
    if (InKey < InNode->Key)
    {
        InNode->Left = InsertNode(InNode->Left, InKey);
    }
    else if (InKey > InNode->Key)
    {
        InNode->Right = InsertNode(InNode->Right, InKey);
    }
    //else
    //{
    //    //Ʈ�������� Ű�� �ߺ��Ǹ� �ȵ�
    //    //�ߺ� Ű�� ����
    //}

    return InNode;
}

TreeNode* BinarySearch::DeleteNode(TreeNode* InNode, int InKey)
{
    if (InNode == nullptr)
    {
        return InNode;
    }
    if (InKey < InNode->Key)
    {
        InNode->Left = DeleteNode(InNode->Left, InKey);
    }
    else if (InKey > InNode->Key)
    {
        InNode->Right = DeleteNode(InNode->Right, InKey);
    }
    else
    {
        //������ ��� ����
        if (InNode->Left == nullptr)
        {
            //���� �ڽ��� ����. �� �� ����.
            TreeNode* Temp = InNode->Right;
            delete InNode;
            return Temp;
        }
        else if (InNode->Right == nullptr)
        {
            //������ �ڽĸ� ����.
            TreeNode* Temp = InNode->Left;
            delete InNode;
            return Temp;
        }

        //�� �ڽ��� ��� �ִ�. ������ ����Ʈ���� �ּҰ����� ��ü
        TreeNode* Temp = FindMinNode(InNode->Right);
        InNode->Key = Temp->Key;
        InNode->Right = DeleteNode(InNode->Right, Temp->Key);
    }
    return InNode;
}

TreeNode* BinarySearch::SearchNode(TreeNode* InNode, int InKey)
{
    if (InNode == nullptr)
    {
        return nullptr; //��ã��
    }
    if (InKey < InNode->Key)
    {
        return SearchNode(InNode->Left, InKey); //ã�� ��
    }
    else if (InKey > InNode->Key)
    {
        return SearchNode(InNode->Right, InKey); //ã�� ��
    }
    else
    {
        return InNode; //ã��
    }
    
}

TreeNode* BinarySearch::FindMinNode(TreeNode* InNode)
{
    while (InNode != nullptr && InNode->Left != nullptr)
    {
        InNode = InNode->Left;
    }
    return InNode;
}

void BinarySearch::PreOrderTraversal(TreeNode* InNode) const
{
    if (InNode != nullptr)
    {
        printf("%d ", InNode->Key);
        PreOrderTraversal(InNode->Left);
        PreOrderTraversal(InNode->Right);
    }
}

void BinarySearch::InOrderTraversal(TreeNode* InNode) const
{
}

void BinarySearch::PoseOrderTraversal(TreeNode* InNode) const
{
}

void BinarySearch::DestroyTree(TreeNode* InNode) 
{
    if (InNode != nullptr)
    { 
        DestroyTree(InNode->Left); //���� ����Ʈ�� ����
        DestroyTree(InNode->Right);//������ ����Ʈ�� ����
        delete InNode; //�ڽ� ����(���� ��ȸ ����)
    }
}
