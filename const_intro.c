/* const is a keyword in c language, const is a qualifier
main()
{
    const int x=5;// once constant is written we cannot perform any operation on it. assignment,incre,decre. The only way we can perform operation is by using ''pointer''
    printf("x=%d",x);
    x++;// compilation error: increment of read only variable 'x'
    printf("x=%d",x);

}
*/
/* main()
{
    const int x;
    printf("x=%d",x); // in this example the garbage value will be there in the varible, further if we need to
    assigned some values to the variable,we cannot do so becoz we qualifies const in the declaration, no further operation will be
    made on it. we have to assigned a value at a time of declaration, we cannot assigned later becoz the value is fixed now

} */
/*main()
{
    const int x=5;// x will not be changed
    int *p;// pointer
    p=&x;// pointer is pointing to x
    printf("x=%d\n",x);
    ++*p; // writing *p is same as writing x;// we incremented the value by using pointer
    //in other words the value of x is incremented by using the pointer. meaning is same but
    //accessing is way different. we can modify the value in x but we cannot modify by using the name of the variable
    printf("x=%d", x);
} */
/* but this is DANGEROUS  sometimes while coding we don't want to change a value
in a code,if we do so the entire program perform in an different way. we don't want in any way the const changes it value */
/*main()
{
    const int x=5;
    const int *p;// pointer to const. you can make changes in the pointer but you cannot change the value to
    which the pointer is pointing to. pointer is not const but the pointer is pointing to is const */
    /* const pointer is int * const p;
    p=&x;
    printf("x=%d",x);
    ++*p;// we cannot do so by using the pointer,becoz the pointer is pointing to the const
    printf("x=%d",x);
}  */
 /* CONST POINTER
 int * const p;  */
 /*main()
{
    const int x=5;
    int * const p=&x;// here p is const we connot perform any operation on it
    printf("x=%d",x);
    ++*p;// yes this is possible
    printf("x=%d",x);
} */
//  THE ONLY WAY WE CAN DO SO IS
main()
{
    const int x=5;
    const int * const p=&x; // here x is const and pointer is also const, and pointer is pointing to is also const
    printf("x=%d",x);
    ++*p;// this is not possible now.!!!! now we cannot change the value, we can only accessed it, read it
    printf("x=%d",x);
}
