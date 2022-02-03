/* Wirte a recursive function to print N natural numbers *


 void Nnatural(int);
int main()
{
    int user;
    printf("\nEnter the N term of N natural numbers:\n");
    scanf("%d",&user);
    Nnatural(user);
}

 void Nnatural(int user)
{
    if(user>=1){
    Nnatural(user-1); // (5-1)=4 (4-1)=3    (3-1)=2     (2-1)=1     (1-1)=0
    printf("%d ",user);// 5       4          3           2          1 now printf(1,2,3,4,5)
    }    
}
 */

/* write a recursive function to print N natural numbers in reverse order */
int main()
{
    int user;
    printf("\nEnter a N natural number:\n");
    scanf("%d",&user);
    printf("\nThe N natural numbers in reverse order:\n");
    Nnatural(user);
}

void Nnatural(int user){
    
    if(user>=1)
    {
        printf("%d ",user);
        Nnatural(user-1);
        
    }
    
}