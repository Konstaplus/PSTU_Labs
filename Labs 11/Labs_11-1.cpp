#include <iostream>

struct ELEM {
    int value;
    ELEM* pNext;
}*head;

void AddItem(int m_val)
{
    ELEM* pElem = new ELEM;
    pElem->value = m_val;
    pElem->pNext = head;
    head = pElem;
}

void DeleteItems()
{
    ELEM* elem = head;
    ELEM* prev = NULL;

    while (elem)
    {
        if (elem->value % 2 == 0)
        {
            if (prev)
            {
                prev->pNext = elem->pNext;
                elem = elem->pNext;
                continue;
            }
            else
                head = elem->pNext;
        }
        prev = elem;
        elem = elem->pNext;
    }
}

void PrintList()
{
    ELEM* elem = head;
    while (elem)
    {
        printf("%d\n", elem->value);
        elem = elem->pNext;
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
        AddItem(i);

    DeleteItems();
    PrintList();

    return 0;
}