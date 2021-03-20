#ifndef DOUBLYLINKEDLIST
#define DOUBLYLINKEDLIST

typedef struct TDListNode { 
  int m_nValue; 
  struct TDListNode* m_pNextNode; 
  struct TDListNode* m_pPrevNode; 
} TDListNode;

extern short NodeCounter;

extern TDListNode* gHead;
extern TDListNode* gTail;
extern TDListNode* KeyNode;

void SetupList(TDListNode** Head, TDListNode** Tail);
void AddBeginning (TDListNode** Head);
void AppendEnd (TDListNode** Tail);
void AddBetween(TDListNode* Head);
void RemoveNode(TDListNode** Head, TDListNode** Tail);
short DevMenu(short Selector);
void ListPrinter(TDListNode* Head);
int ValidateEntry();

#endif 