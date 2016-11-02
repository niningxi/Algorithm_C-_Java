SNode* Reverse(SNode* pHead,int from,int to)
{
	int count=0;
	SNode* pPre=pHead;
	SNode* pCur=pHead->pNext;
	while(count<from-1)
	{
		pCur=pCur->pNext;
		pPre=pPre->pNext;
		count+=1;
	}
	SNode* pStart=pCur;
	pCur=pCur->pNext;
	while(count<to-1)
	{
		count+=1;
		SNode* next=pCur->pNext;
		pCur->pNext=pPre->pNext;
		pPre->pNext=pCur;
		pStart->pNext=next;
		pCur=next;
	}
	return pHead;
}
