#include <stdio.h>
struct node
{
    int data;
    struct node *next; // self referencing struct.
};

struct node *createList(struct node *last);            // this will create a linked list.
void display(struct node *last);                       //for traversing
struct node *addtoempty(struct node *last, int value); // when there is a one node, last should point to it and a node should also point to self.
struct node *addAtBeg(struct node *last, int value);   // at beginning.
struct node *addAtEnd(struct node *last, int value);
struct node *addAfter(struct node *last, int value, int item); // to add in the middle or somewhere else
struct node *del(struct node *last, int value);                // value to be deleted.
void main() {
    int choice, value, item;
    struct node *last=NULL;
    while (1) {
        system("cls");
        printf("\n1. Create List\n2. Display List\n3. Add-to-Empty List\n4. Add at Beginning\n5. Add at End\n6. Add at After\n7. Delete a value\n8. Exit\n\n\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
        case 1: last=createList(last);
            break;
        case 2: display(last);
            break;
        case 3: printf("\nEnter a number for the list:");
            scanf("%d", &value);
            last=addtoempty(last, value);
            break;
        case 4: printf("\nEnter a number for the list:");
            scanf("%d", &value);
            last=addAtBeg(last, value);
            break;
        case 5: printf("\nEnter a number for the list:");
            scanf("%d", &value);
            last=addAtEnd(last, value);
            break;
        case 6: printf("\nEnter a number for the list:");
            scanf("%d", &value);
            printf("\nEnter a item value after new value to be inserted");
            scanf("%d", &item);
            last=addAfter(last, value, item);
            break;
        case 7: printf("\nEnter a value of element to be deleted");
            scanf("%d", &value);
            last=del(last, value);
            break;
        case 8: exit(0);
        default: printf("\nInvalid choice Entered");
        }//end of switch
        _getch();
    }//end of while

}

void display(struct node *last)
{
    //to check whether last is empty
    if (last == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        //* as we are learning circular linked list, where the last node's next(which is a pointer) is pointing to a first block in the linked list.
        //* so, we are going to create a pointer which will point to the first block.

        struct node *temp = last->next; // last->next is the first block in the circular linked list.
        //!THis is important where we are going to learn about the application of do-while loop as the condition goes in while loop like
        //! while(temp!=last->next) // as temp =last->next; which is same there are equal to each other, While loop fails.
        //!while(temp!=last->next) // As temp is containing the address of first block and we need to print till last node, last is the node which is containing the address of last node,regular linked list doesn't have NULL in its pointer, as temp is containing the address of last->next(1st block) and till last block,
        //! but the condition fails in 1st temp only, so we need to use the do while loop.

        do
        {
            printf("%d  ", temp->data);
            temp = temp->next;        // now temp is containing the address of second block.
        } while (temp != last->next); // condition checks for 2nd block not for the first block, application of do-while loop
    }
}

struct node *addAtBeg(struct node *last, int value)
{
    //*Here we are assigning a new node in the beginning of a existing node.
    struct node *temp = malloc(sizeof(struct node));
    temp->data = value;
    //*Logic= to assign a new node as a first node, we need to change the last->next node which is the first node as of now. but we want temp to be a start node, so temp->next=previous first block of node(which is last->next).
    temp->next = last->next; //*temp is pointing to a first node and we want the last->next node to point temp node, so that temp will became first and the first will changes to second node and again last pointed to new node which is temp.
    last->next = temp;       //temp chances to first block
    return last;             // return the linked list.
}

struct node *addtoempty(struct node *last, int value)
{
    //* if the list is empty here we will join the first node.
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = value;
    // As when the function run Last will be NULL so we need to assign in last the node which we created.
    last = temp;
    //* As it is a first node and in the circular linked list, last node will point to the first node and so on, so here we need to assign in first node of next pointer has every node has a next pointer to point, so, 
    //!first->next=first; as it is a only node in the list.
    last->next = last; // or temp.
    return last;
}

struct node *addAtEnd(struct node *last, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    //*TO add a node at the last, last node has a next pointer which is pointing to a first block, so we need to change it to point the node temp which is created just now.
    //!but wait, first we need to store the address of last->next(which is 1st block) in temp as temp is going to be a last node.
    temp->next = last->next;
    //now last node has to change as we preserve the first node in the temp->next
    last->next = temp;
    // now we need to change the last node address
    last = temp; // that's it.
    return last;
}

struct node *addAfter(struct node *last, int value, int item)
{
    // this function add a value after a particular item which we received in the parameter of addAfter-function
    struct node *temp, *n;
    temp = last->next; // which is the first block.
                       // we need to traverse till we reaches to a item
    do
    {
        if (temp->data == item)
        {
            n = malloc(sizeof(struct node));
            n->data = value;
            n->next = temp->next; //new block->next assign the new block which we created.
            temp->next = n;       // new node
            //!imagine there is also a situation where item is equal to last node and in the last node where we putting a new block, in that situation new block should be made as last node. so we need to check that the item is equal to last or not.
            if (temp == last)
                last = n; // n is the new block.
            //if everything is done like we found the element which we are looking for. then it's time to return the control.
            return (last);
        }
        temp = temp->next;
    } while (temp != last->next);
    //! what if the element is not in the list.
    printf("\n%d is not in the list\n", item);
    return last;
}

struct node *del(struct node *last, int value)
{
    struct node *temp, *p;
    if (last == NULL)
    {
        printf("\nList is empty\n");
        return;
    }

    // case where there is a single node.if there is a single node then that is a last node and as well as first.
    if (last == last->next && last->data == value)
    {
        //! here we need to check whether the deleting element is matching with a data of a node. what if the the data is different.
        temp = last;
        last = NULL;
        free(temp);
    }

    if (last->next->data == value) // means it's a first value which needs to be deleted last->next means 1st block ->data ==value .
    {
        temp = last->next;
        last->next = temp->next; // second block is assigned in the last->next.
        free(temp);
        return (last);
    }

    // if the condition doesn't match with the special cases then a node must in the middle of somewhere.
    p = last->next; // p is containing the first address
    while (p->next != last)
    {
        if (p->next->data == value) //2nd node data as we already done a if statement for the first block of element.
        {
            temp = p->next; // the temp block is a node which is going to delete.
            //p->next should point to the next block of a node which is going to delete.
            p->next = temp->next;
            free(temp);
            return (last);
        }
        p = p->next;
    }

    if (last->data == value)
    {
        //*what if the item is the last element in the list. The above case is for the last element is for the single element which was a last and first element. Here the number of nodes are available and the last element is to be deleted.
        temp = last;
        //! the above while condition in the del FUntion. p is pointing to the second last node in the link so we need to change p->next and assign in p->next as a first node in the list. THat is how we need to do.
        p->next = last->next;
        //* if last element is going to be deleted then we need to change the last pointer to point second last block as a new last node.
        last = p;
        free(temp);
        return (last);
    }

    // if the item which we want to delete is not there in the list. we need to just give a message and return it.
    printf("\n%d is not found", value);
    return (last);
}
 
struct node *createList(struct node *last) {
    int n, i, value;
    printf("\nHow many values you want to enter:");
    scanf("%d", &n);
    printf("\nEnter 1st data for the list:");
    scanf("%d", &value);
    //*here we need to create a new node, We created a function called addToEmpty which will create a node. so we just need to call it and that function return the struct node* address.
    last=addtoempty(last, value);// node is created for 1st value.
//* n is the variable till we need to store the values in the list. as n is entered by the user. We'll run a loop which starts from i=2,because we have already inserted first value by calling the function addtoempty.
    for (i=2; i<=n; i++) {
        printf("Enter %d value for the list:", i);
        scanf("%d", &value);
        //*adding the value at the end of the list, there is a function for doing so which is addtoEnd
        last=addAtEnd(last, value);
    }
    return(last);
}