#define LIST_INIT_SIZE 10
#define LIST_INCREMENT 2
typedef struct
{
    ElemType *elem;
    int length;
    int listsize;
}SqList;

void InitList(SqList *L)
{
    L->elem = malloc(LIST_INIT_SIZE*sizeof(ElemType));
    if(!L->elem)
        exit(OVERFLOW);
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
}

void DestroyList(SqList *L)
{
    free(L->elem);
    L->elem = NULL;
    L->length = 0;
    L->listsize = 0;
}

void ClearList(SqList *L)
{
    L->length = 0;
}

Status ListEmpty(SqList L)
{
    if(L.length==0)
        return TRUE;
    else
        return FALSE;

}

int ListLength(SqList L)
{
    return L.length;
}

Status GetElem(SqList L,int i,ElemType *e)
{
    if(i<1||i>L.length)
        return ERROR;
    *e = *(L.elem+i-1);
    return OK;
}

int LocateElem(SqList L,ElemType e,)



