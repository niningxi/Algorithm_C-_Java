#include "SNode.h"
#include<stdlib.h>
#include "Reverse.h"
int main()
{
	SNode* pHead1=new SNode(0);
	for (int i=0;i!=10;++i)
	{
		SNode* pCur=new SNode(rand()%10);
		pCur->pNext=pHead1->pNext;
		pHead1->pNext=pCur;
	}
	SNode* pHead2=new SNode(0);
	for (int i=0;i!=6;++i)
	{
		SNode* pCur=new SNode(rand()%10); 
		pCur->pNext=pHead2->pNext;
		pHead2->pNext=pCur;
	}
	Print(pHead1);
	Print(pHead2);
	Print(Reverse(pHead1,3,7));
	Destroy(pHead1);
	Destroy(pHead2);
	return 0;
}
