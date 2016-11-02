void DeleteDuplicate(SNode* p)
{	
	SNode* pCur=p->pNext;
	SNode* pnext=pCur->pNext;
	while(pnext)
	{			
		if (pCur->value==pnext->value)
		{
			pCur->pNext=pnext->pNext;
			pnext=pnext->pNext;
		}
		else
		{
			pCur=pCur->pNext;
			pnext=pnext->pNext;
		}
	}
} 

void DeleteDup(SNode* pHead)
{
	SNode* pPre=pHead;
	SNode* pCur=pPre->pNext;
	bool bDup;
	while (pCur)
	{
		SNode* pnext=pCur->pNext;
		while(pnext&&pCur->value==pnext->value)
		{
			pPre->pNext=pnext;
			delete pCur;
			pCur=pnext;
			pnext=pnext->pNext;
			bDup=true;
		}
		if (bDup)
		{
			pPre->pNext=pnext;
			delete pCur;
			bDup=false;
		}
		else
		{
			pPre=pCur;
			pCur=pCur->pNext;
		}
	}
}
