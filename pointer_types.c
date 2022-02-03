/*In this code we are going to learn about the pointer and different type of pointer.
 *1.wild pointer
 *2. NULL pointer
 *3. void pointer
 *4.dangling pointer


 WILD POINTER
 when a program is going to run, it get allocates memory in the ram. It depends on the architecture that how much memory
 is going to allocates. Based on the 16,32 bit architecture. The amount of memory is same for the program either this is a large
 program or a smaller one. On 32 bit architecture the memory is allocates to the program is 2^32 which is 4,29,49,67,296.
 The memory which is there for execution is of two type. one is free memory and another memory is consumed memory.
 main()
 {
  int *p;// p is a pointer and it is not initialized, contain garbage value. but that garbage value is also a address of
  of a memory.
  uninitialized or wild pointer.
  *p=4; means the pointer is pointing to an unknown location, and it is called illegal memory access
  which is error. The solution of this error is we have to assigned a valid address in it (which means assigning a address of an decalr
variable) or this problem is solved by NULL pointer


"uninitialized pointer are called wild pointer".

                                NULL POINTER
when we create a pointer variable we assigned NULL to it. NULL is written in capital letter.NULL
is a macro
int *p=NULL// example of NULL this is declared in #include<stdio.h> and define in this way
#define NULL 0
when we define the pointer like int *p=NULL, its means that the pointer is not pointing to anu thing
it a special type of character where NULL is equal to zero.But still we say that the pointer is not
pointer

                                VOID POINTER
int *p; this is a pointer, the declaration of the pointer tell us that the pointer is of int type
and it will point to the int type of block

void *p; void pointer is a pointer which can point to any type of block. It is also called as generic pointer
int x;
p=&x;// p is a void pointer, p doesn't know that which type of address it is storing.
To that we have to type cast it.
(int *)p=10;

                                  Dangling pointer
  main()
  {
     int x=5;
     void fun();
  }
  void fun()
  {
  int *p
  {
  int x;
  p=&x;
  .
  .// This problem is called dangling pointer
  .// to solve that problem we have to assigned NUll in p. so that p is pointing to no where
  p=NULL
  }// x is going to destroy
  //now p is going to point a address which is illegal.
  }













