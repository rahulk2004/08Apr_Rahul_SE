#include<stdio.h>
int main(){
    char string[50];
    int i,digit=0,space=0;
    printf("enter any string includes all types of characters:\n");
    gets(string);
    for(i=0;string[i]!='\0';i++){
        if(string[i]=='0'||string[i]=='1'||string[i]=='2'||
            string[i]=='3'||string[i]=='4'||string[i]=='5'||
            string[i]=='6'||string[i]=='7'||string[i]=='8'||string[i]=='9')
            digit=digit+1;
        else if(string[i]==' ')
            space=space+1;
        
    }
    printf("\ndigit=%d\nspace=%d\n",digit,space);
    return 0;
}

