// Star pattern-29
//    A
//   CB
//  FED
// JIHG
//ONMLK
void main()
{
    int i,j,k=64,z;
    for(i=1; i<=5; i++){
            k=k+i;
            z=k;
        for(j=1; j<=5; j++){
            if(j>=6-i){
                printf("%c",z--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
