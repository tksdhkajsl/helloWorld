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
        //서브노트가 null이면 그곳에 새 노드 만들어서 연결되게 하기
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
    //    //트리에서는 키가 중복되면 안됨
    //    //중복 키는 무시
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
        //삭제할 노드 참음
        if (InNode->Left == nullptr)
        {
            //왼쪽 자식이 없다. 둘 다 없다.
            TreeNode* Temp = InNode->Right;
            delete InNode;
            return Temp;
        }
        else if (InNode->Right == nullptr)
        {
            //오른쪽 자식만 없다.
            TreeNode* Temp = InNode->Left;
            delete InNode;
            return Temp;
        }

        //두 자식이 모두 있다. 오른쪽 서브트리의 최소값으로 대체
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
        return nullptr; //못찾음
    }
    if (InKey < InNode->Key)
    {
        return SearchNode(InNode->Left, InKey); //찾는 중
    }
    else if (InKey > InNode->Key)
    {
        return SearchNode(InNode->Right, InKey); //찾는 중
    }
    else
    {
        return InNode; //찾음
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
        DestroyTree(InNode->Left); //왼쪽 서브트리 삭제
        DestroyTree(InNode->Right);//오른쪽 서브트리 삭제
        delete InNode; //자신 삭제(후위 순회 삭제)
    }
}
