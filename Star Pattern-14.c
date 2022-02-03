/*

6 5 4 3 2 1 0
5 4 3 2 1 0
4 3 2 1 0
3 2 1 0
2 1 0
1 0
0

*/
void main(){
int i,j,a=0;
for(i=0; i<=6; i++){
    a=6-i;
    for(a; a>=0; a--)
    {
        printf("%d ",a);
    }
    printf("\n");
}

}
