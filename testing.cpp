// Print Binary of a decimal number using recursion in C
#include <iostream>
using namespace std;

//program practice of single list.

class linkedListADT
{
private:
    struct node
    {
        int item;
        node *next;
    };
node *start;
public:
    node *searchItem(int data);
    linkedListADT() // constructor used to intialize the variables.
    {
        start = NULL;
    }
    ~linkedListADT() // destructor used to free the memory.
    {
        while (start != NULL)
        {
            deleteItemFromStart();
        }
    }

    int countItem();

    void insertAtStart(int data);
    void insertAtLast(int data);
    void insertAfter(int currentData, int data);
    int searchValue(int data);
    int deleteItemFromStart();
    int deleteItemFromLast();
    int deleteCurrentItem(int currentData);
    void editItem(int currentData, int data);
    int getFirstItem();
    int getLastItem();
    void viewList();
    void sortList();
};

node *linkedListADT::searchItem(int data)
{
    node *find;
    if (start == NULL)
    {
        cout << "\nList is empty\n";
        return NULL;
    }
    else
    {
        find = start;
        while (find != NULL)
        {
            if (find->item == data)
                return find;
            find = find->next;
        }
    }
    return NULL;
}

void linkedListADT::sortList()
{
    // using the logic of bubble sort here,
    node *temp;
    int i, round, max = countItem();
    for (round = 1; round <= max - 1; round++)
    {
        temp = start;
        for (i = 0; i < max - 1 - round; i++)
        {
            if (temp->item > temp->next->item)
            {
                swap(temp->item, temp->next->item);
            }
            temp = temp->next;
        }
    }
}

int linkedListADT::searchValue(int data)
{
    node *temp = start;
    temp = start;
    while (temp != NULL)
    {
        if (temp->item == data)
        {
            return 1;
        }
    }
    return 0;
}

void linkedListADT::viewList()
{
    if (start == NULL)
    {
        cout << "\nList is empty";
        return;
    }
    else
    {
        node *temp = start;
        while (temp != NULL)
        {
            cout << "  " << temp->item;
            temp = temp->next;
        }
    }
}

int linkedListADT::getLastItem()
{
    if (start == NULL)
    {
        cout << "\nList is empty";
        return -1;
    }
    else
    {
        node *temp = start;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        return (temp->item);
    }
}

int linkedListADT::getFirstItem()
{
    if (start == NULL)
    {
        cout << "\nList is empty";
        return -1;
    }
    return (start->item);
}

void linkedListADT::editItem(int currentData, int data)
{
    if (start == NULL)
    {
        cout << "\nList is empty";
        return;
    }
    else
    {
        node *temp = searchItem(currentData);
        if (temp == NULL)
        {
            cout << "\nCurrentData is not found in the list:";
            return;
        }
        else
        {
            if (temp->item == currentData)
            {
                temp->item = data;
            }
            cout << "\nvalue is edited in the list";
        }
    }
}

int linkedListADT::deleteCurrentItem(int currentData)
{
    node *temp = searchItem(currentData); // search item will search a item in the list, if not there return NULL.
    if (temp == NULL)
    {
        cout << "\nitem not found";
        return 0;
    }
    while (temp->next != NULL)
    {
        temp->item = temp->next->item; // next item is assigning into previous item.
        temp = temp->next;
    }
    // coming outof the while loop we can call the function to deleteAtLast.
    deleteItemFromLast();
    return 1;
}

int linkedListADT::deleteItemFromLast()
{
    if (start == NULL)
    {
        cout << "\nUnderflow ";
        return 0;
    }
    else if (start->next == NULL) //* A case where will be only one node in the list.
    {
        delete (start);
        start = NULL;
        return 1;
    }
    else
    {
        node *temp1, *temp2;
        temp1 = temp2 = start;
        do
        {
            temp2 = temp1;
            temp1 = temp1->next; // temp1 will point to last node and temp2 point to previous of last node, In previous of last node we need to assign NULL in it.
        } while (temp1->next != NULL);
        temp2->next = NULL; // last node remove in the list.
        delete (temp1);     // last is delete t1 is pointing to a last node.
        return 1;
    }
}

int linkedListADT::deleteItemFromStart()
{
    if (start == NULL)
    {
        cout << "\nUnderflow";
        return 0;
    }
    else
    {
        node *temp = start;
        start = start->next;
        delete (temp);
        return 1;
    }
}

void linkedListADT::insertAfter(int currentData, int data)
{
    node *temp = new node;
    temp->item = data;
    if (start == NULL)
    {
        start = temp;
        return;
    }
    else
    {
        node *find = start;
        while (find->item != currentData)
        {
            find = find->next;
        }
        if (find->item == currentData)
        {
            temp->next = find->next;
            find->next = temp;
        }
    }
}

void linkedListADT::insertAtLast(int data)
{
    node *temp = new node;
    temp->item = data;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        node *traverse = start;
        while (traverse->next != NULL)
        {
            traverse = traverse->next;
        }
        traverse->next = temp;
    }
    cout << "\nvalue Insert At Last\n";
}

void linkedListADT::insertAtStart(int data)
{
    node *temp = new node;
    temp->item = data;
    temp->next = start;
    start = temp;
}

int linkedListADT::countItem()
{
    int count = 0;
    if (start == NULL)
    {
        cout << "\nList is empty";
        return 0;
    }
    else
    {
        node *temp = start;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
    }
    return count;
}

int main()
{
    linkedListADT l1; // l1 is a object and a constructor is called and we initialize null in the start.
    cout << l1.getFirstItem();
    return 0;
}
