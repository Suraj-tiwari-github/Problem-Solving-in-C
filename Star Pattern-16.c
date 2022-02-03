// Star pattern-16
// Note- Ascii for the backslash is (\)-92, forward slash is(/)-47
// \*****/
// *\***/*
// **\*/**
// ***\***
// **/*\**
// */***\*
// /*****\

void main(){
int i,j,k=1;
for(i=1; i<=7; i++){
    for(j=1; j<=7; j++)
    {
        k=i;
        if(i<=4)
        {
            if(j==i)
                printf("%c",92);// character takes the ascii code follow by the decimal no of that ascii.
            else
              if(j==8-i)
                printf("%c",47);// aschii for forward slash
            else
                printf("*");

        }
        else
        {
            if(j==8-i)//print forward slash
                printf("%c",47);
            else
                if(j==i)
                printf("%c",92);
            else
                printf("*");
        }
    }
    printf("\n");
}
}
