#include <stdio.h>
//WAP to read numbers from a file and write evn ,odd to seprate file
main(){
    FILE *inputfile; 
	FILE *evenfile;
	FILE *oddfile;
    int num;

    inputfile=fopen("numbers.txt","r");
    evenfile=fopen("even.txt","a");
    oddfile=fopen("odd.txt","a");

    
    while(fscanf(inputfile,"%d",&num)==1){
        if(num%2==0){
            fprintf(evenfile,"Even number: %d\n",num);
        }else{
            fprintf(oddfile,"Odd number: %d\n",num);
        }
    }

    printf("Even numbers are stored into even.txt file\n");
    printf("Odd numbers are stored into odd.txt file\n");
}

