// In doubly linked list their are two pointer which point to both the direction like next pointer, previous pointer. (NOTEBOOK: data structure,Doubly linked list)

#include <stdio.h>
struct node
{
   int info;
   struct node *previous, *next;
};

struct node *start = NULL;

void InsertAsFirstNode()
{
   struct node *n;
   n = (struct node *)malloc(sizeof(struct node));
   printf("\nEnter a number:");
   scanf("%d", &n->info);
   // assigning Null in previos and next as it a first node.
   n->previous = NULL;
   n->next = NULL;
   // checking whether a start containing NULL as it is a first node.
   if (start == NULL)
   {
      start = n;
   }
   else
   {
      // start is a pointer which will point to the first node. Every node contain a previous and next pointer,2nd node need the address of 1st node in previous right.all this happen when start is not a first node
      start->previous = n;
      n->next = start;
      start = n;
   }
}

//deleting the first node(The function is below)
void deleteFirstNode()
{
   //checking whether the start containing NULL as it may be a first node and the first node can't be deleted.
   if (start == NULL)
   {
      printf("\nThe list is empty\n");
   }

   else
   {
      struct node *r;
      //as we want to delete the first node start is pointing to the node which we want to delete it. storing the start pointer in r
      r = start;
      //remember the first node previous should contain the NULL and we are trying to delete the first node so the second node will became the first node, the second node previous pointer should contain NULL and start which is pointing to the first node,the next pointer of 1st node contain the address of second node,so second node address should be kept in start,as we are going to delete the first node.
      start = start->next;
      start->previous = NULL;
      free(r);
   }
}

//creating a function to view list
void viewList()
{
   struct node *t;
   if (start == NULL)
      printf("\nThe list is empty\n");
   else
   {
      t = start;
      while (t!= NULL)
      {
         printf("%5d", t->info);
         t = t->next;
      }
   }
}
int menu()
{
   int choice;
   printf("\n1.Insert a value");
   printf("\n2.View List:");
   printf("\n3.Delete First node:");
   printf("\n4.Exit program");
   printf("\n\nEnter a choice:");
   scanf("%d", &choice);
   return (choice);
}
void main()
{
   while (1)
   {
      switch (menu())
      {
      case 1:
         InsertAsFirstNode();
         break;
      case 2:
         viewList();
         break;
      case 3:
         deleteFirstNode();
         break;
      case 4:
         exit(0);
      default:
         printf("\nInvalid choice is entered\n");
      }
   }
}