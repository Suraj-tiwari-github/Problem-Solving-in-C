// Queue ADT(abstract data type)
#include <stdio.h> //for NULL Header
//creating a structure
struct ArrayQueue
{
   int front, rear; //Insertion is perform from rear and deletion is done from front
   int capacity;    //q size;
   int *array;      //pointer will point to where the data is stored
};

//creation of queue
struct ArrayQueue *createQueue(int capacity) //capacity is size
{
   struct ArrayQueue *Q = malloc(sizeof(struct ArrayQueue));
   //!Due to some reason malloc sometimes cannot create dyanamically memory if that happened so, malloc return NULL. It is good to check for to be a good developer
   if (!Q) // NULL is == to 0 so, if(takes 1 to be true) so inverting the result
      return (NULL);
   Q->capacity = capacity; // which is 4 receive in parameter
   //? basically front and rear will contain the address of a queue where queue value or index value in c starts from 0.we are assigning -1 in each of them to called them as empty.
   Q->front = Q->rear = -1;
   // here we are creating int block multiply to capacity;
   Q->array = malloc(sizeof(int) * capacity); //see diagram
   //checking whether the array is created or not?
   if (!Q->array)
      return NULL;
   return (Q);
}

//Function : isEmptyQueue()
int isEmptyQueue(struct ArrayQueue *Q)
{
   //to check the queue is empty, deletion is performed from front if front is equal to -1 which means the index value has been decremented and index is reaches to -1. that's it
   return (Q->front == -1); // if q->front is true it will return to return function 1 which is true and if not then it return 0 which means it is not true queue is not empty
}

//Function: isFUllQueue()
int isFullQueue(struct ArrayQueue *Q)
{
   return ((Q->rear + 1) % Q->capacity == Q->front);
   //explantion of above line: rear is 3 and front is 0 and capacity is 4 so Q->rear+1 which means rear is 3+1=4 % Q->capacity(which is 4)(remainder of 4 %4 is 0)==Q->front(is 0). The reason why it is written in this way is queue is created as in circular fashion if anyhow front value is deleted but rear value is still 3 due to circular motion 3 is just before 0 or after 3 the index is 0. see diagram in OneNote arrayImplementation of queue so then rear becames 0rear==0 return ((Q->rear + 1) % Q->capacity == Q->front);
   // now again rear=0, capacity=4, front=1 (Q->rear+1)=0+1==1 %Q->capacity==4 so 1 %4==q->front(front==1) which is true return 1 if full or return 0 if it is not full
}

//Functio: QueueSize
int QueueSize(struct ArrayQueue *Q)
{
   return ((Q->capacity - Q->front + Q->rear + 1) % Q->capacity);
   //see diagram in OneNote rear=0,front=2,capacity=4
   //4-front(2)+rear(0)+1==3 % capacity(4) so 3%4==1 so 1 block is empty which means we will subtract capacity-1(which is the result) this haven't told by sirg but i'm thinking of it.
}

//Function:Insertion or enQueue()
void enQueue(struct ArrayQueue *Q, int data) //data is value to be inserted in queue
{
   if (isFullQueue(Q)) //return 1 if full
      printf("\nOverFlow");
   else
   {
      //rear has be incremented before storing rear is the index at were the data is assigning
      //rear is -1 we incremented that to 0 %Q->capacity if rear is 3 and at rear 0 the space is vacant so Q->rear+1(3+1==4) % Q->capacity(4) 4%4==0 at Zero Index the value will be inserted.
      Q->rear = (Q->rear + 1) % Q->capacity;
      Q->array[Q->rear] = data;
      //checking front is ==-1 which means it is a first data which is to be in
      if (Q->front == -1)
      {
         Q->front = Q->rear; // Q->rear==0 we can written this in same in this way
         //Q->front=0;
      }
   }
}

//deletion of data or deQueue
int deQueue(struct ArrayQueue *Q)
{
   int data = -1;
   if (isEmptyQueue(Q))
   {
      printf("\nQueue is Empty");
      return -1;
   }
   else
   {
      data = Q->array[Q->front];
      //when their is only one value in the queue and front and rear are pointing to same index which is 0 if that element is deleted then queue will be empty and rear and front value has to be set to -1 which indicates that queue is empty
      if (Q->front == Q->rear)
         Q->front = Q->rear = -1;
      else
      {
         //if front value is 3 and further we can't add a data in the queue then we need to do the same where 3 after 0 should came
         Q->front = (Q->front + 1) % Q->capacity;
      }
      return data;
   }
}

//deleting the queue
void deleteQueue(struct ArrayQueue *Q)
{
   if (Q)
   {
      if (Q->array) //other than -1
      {
         free(Q->array);
      }
      free(Q); //structure memory will get destroyed
   }
}

void viewList(struct ArrayQueue *Q)
{
   int max = Q->rear;
   for (int i = 0; i <= max; i++)
   {
      printf("%3d", Q->array[i]);
   }
}

main()
{
   int data, choice;
   struct ArrayQueue *Q = createQueue(4);
   while (1)
   {
      printf("\n1.EnQueue\n2.ViewList\n3.DeQueue\n4.Delete Queue\n5.Exit\n6.Queue Size\n\nEnter your choice:");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
         printf("\nEnter a number:");
         scanf("%d", &data);
         enQueue(Q, data);
         break;
      case 2:
         viewList(Q);
         break;
      case 3:
         data = deQueue(Q);
         if (data == -1)
            printf("\nList is Empty");
         else
         {
            printf("\nData is %d", data);
         }
         break;
      case 4:
         deleteQueue(Q);
         printf("\nQueue is deleted");
         break;
      case 5:
         exit(0);
      case 6:
         data = QueueSize(Q);
         printf("\nThe size of the queue is %d", data);
         break;
      default:
         printf("\nInvalid choice");
      }
   }
}