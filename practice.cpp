// Queue using linkedlist
#include <stdio.h>
#include <iostream>
using namespace std;
class queueLinkedList
{
private:
    struct node
    {
        int item;
        node *next;
    } * front, *rear;

public:
    queueLinkedList() //constructor
    {
        rear = NULL;
        front = NULL;
    }

    void displayQueue()
    {
        if (front == NULL)
        {
            cout << "\nList is empty\n";
        }
        struct node *temp = front;

        while (temp != rear)
        {
            cout << temp->item << "   \n";
            temp = temp->next;
        }
        if (temp == rear)
        {
            cout << temp->item << "  \n";
        }
    }

    void insertData()
    {
        node *temp = new node;
        int a;
        cout << "Enter a value to insert into the list:";
        cin >> a;
        temp->item = a;
        temp->next = NULL;
        if (rear == NULL)
        {
            front = rear = temp; // as it is a first node both rear and front will point to a first node,
        }
        else
        {
            rear->next = temp; // rear next is the new inserted node
            rear = temp;       // rear always point to a new inserted node.
        }
    }
    int remove(void)
    {
        node *temp;
        temp = front;
        if (front == NULL)
        {
            cout << "List is empty\n";
            return 0;
        }
        else
        {
            if (front == rear) // a case where in a list there a single node
            {
                delete front;
                front = rear = NULL;
                cout << "Element is deleted\n";
                return 1;
            }
        }
        // to remove an element in the list, deleting front becoz, insertion from rear, and deletion from front
        front = front->next;
        delete (temp);
        cout << "\nElement is deleted\n";
        return 1;
    }

    int getFirst()
    {
        if (front == NULL)
        {
            return -1;
        }
        else
            return (front->item);
    }

    int getLast()
    {
        if (rear == NULL)
            return -1;
        else
        {
            /* code */

            return (rear->item);
        }
    }

    int countItem()
    {
        int c = 0;
        struct node *temp = front;
        while (temp != rear) //* what if there is a single node in the list, where front and rear are exactly equal to each other in that situation, this while loop will failed. to correct this error, we need to increment c a single time outside the loop to count that single item.
        //*c=0 and front =rear, while failed, but there is a node so increment c outside the loop c++ to count as 1.
        //* if there are 3 element in the list, so while loop run for 3 times, 0->1->2 three element but count is 2 as counting starts from 0. two cases are getting covered in this way.
        {
            c++;
            temp = temp->next;
        }
        c++;
        return c;
    }
};
int main()
{
    queueLinkedList l1;
    l1.insertData();
    l1.displayQueue();
    l1.insertData();
    l1.displayQueue();
    l1.insertData();
    l1.displayQueue();
    l1.insertData();
    l1.displayQueue();
    l1.insertData();
    l1.displayQueue();
    cout << "\nFirst element is " << l1.getFirst();
    cout << "\nRemoving first element in the list\n";
    l1.remove();
    l1.displayQueue();
    cout << "\nTotal item in the list:"<<l1.countItem();
    
    //l1.displayQueue();
}