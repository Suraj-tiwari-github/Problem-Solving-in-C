  //Stack implementation through array
struct ArrayStack
{
   int top;
   int capacity;
   int *array;
};

//creating a stack using array
struct ArrayStack *createStack(int cap) //caps is the size of the array to be created
{
   struct ArrayStack *stack;
   stack = (struct ArrayStack *)malloc(sizeof(struct ArrayStack));
   stack->capacity = cap;
   stack->top = -1;
   stack->array = malloc(sizeof(int) * cap);
   return stack;
}

//creating a function to check whether the stack is full or not
int isFull(struct ArrayStack *stack)
{
   //here we would check the capacity value if the capacity-1 is equal to top value then stack is full capacity is the total numbers of element.ex:5 which start from 0 to 4 if capacity-1==4 then stack is full
   if (stack->top == stack->capacity - 1)
      return (1);
   else
   {
      return 0;
   }
}

//creating a isEmpty function to check whether a stack is empty;
int isEmpty(struct ArrayStack *stack)
{
   //to check the stack is empty top value should be -1 to be called as empty
   if (stack->top == -1)
      return 1; // it is empty
   else
   {
      return 0; // not empty
   }
}

//creating push or insert
void push(struct ArrayStack *stack, int item) // item is the data to insert
{
   if (!isFull(stack))
   {                // not ! will invert the result
      stack->top++; //top which is -1 is incremented to 0
      stack->array[stack->top] = item;
   }
}

//creating pop or removing the element
int pop(struct ArrayStack *stack)
{
   int item;
   if (!isEmpty(stack))
   {
      item = stack->array[stack->top];
      stack->top--;
      return (item);
   }
   return -1; // which is empty 
}

main()
{
   int choice, item;
   struct ArrayStack *stack;
   stack = createStack(5);
   while (1)
   {
      printf("\n1.Push\n2.Pop\n3.Exit\n\nEnter your choice:");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
         printf("\nEnter a number to push:");
         scanf("%d", &item);
         push(stack, item);
         break;
      case 2:
         item = pop(stack);
         if (item == -1)
            printf("\nStack is empty:");
         else
            printf("\nPoped value is %d", item);
         break;
      case 3:
         exit(0);
      default:
         printf("\nInvalid choice");
         break;
      }
   }
}