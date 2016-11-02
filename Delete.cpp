#include "SNode.h"
#include "DeleteDuplicate.h"

int main()
{
	SNode* pHead=new SNode(0);
	int data[]={2,3,3,3,4,5,6,7,8,9,9};
	int size=sizeof(data)/sizeof(int); 
	for (int i=size-1;i>=0;i--)
	{
		SNode* p=new SNode(data[i]);
		p->pNext=pHead->pNext;
		pHead->pNext=p;
	}
	
	Print(pHead);
	DeleteDup(pHead);
	Print(pHead);
	return 0;
}
