#include<iostream>
using namespace std;

typedef struct tagSNode
{
	int value;
	tagSNode* pNext;
	tagSNode(int v):value(v),pNext(NULL){};
}SNode;


void Print(SNode* p)
{
	p=p->pNext;
	while(p)
	{
		cout<<p->value<<" ";
		p=p->pNext;
	}
	cout<<endl;
}

void Destroy(SNode* p)
{
	SNode* next;
	while (p)
	{
	next=p->pNext;
	delete p;
	p=next;
	}
}

SNode* Sum(SNode* p1,SNode* p2)
{
	SNode* pSum=new SNode(0);
	SNode* pTail=pSum;
	int carry=0;
	int sum=0;
	SNode* pCur1=p1->pNext;
	SNode* pCur2=p2->pNext;
	while(pCur1&&pCur2)
	{
		sum=(pCur1->value+pCur2->value+carry)%10;
		carry=(pCur1->value+pCur2->value+carry)/10;
		SNode* pCur=new SNode(sum);
		pTail->pNext=pCur;
		pTail=pCur;
		pCur1=pCur1->pNext;
		pCur2=pCur2->pNext;
	
	}
	SNode* p=pCur1 ? pCur1 : pCur2;
	
	while(p)
        {
        	sum=(p->value+carry)%10;
        	carry=(p->value+carry)/10;
        	SNode* pCur=new SNode(sum);
        	pTail->pNext=pCur;
        	pTail=pCur;
        	p=p->pNext;
        	
        }
	if (carry!=0)
	{
		SNode* pCur=new SNode(carry);
		pTail->pNext=pCur;
	}
	return pSum;
}

