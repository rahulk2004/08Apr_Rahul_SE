#include <stdio.h>
#include <string.h>
//WAP to show difference between Structure and Union.
struct studentdata {
    int no;
    char name[15];
    int age;
    char subject[10];
}stdinfo;

main(){
	//in structure all values are can be used .
    stdinfo.no=11;
    strcpy(stdinfo.name,"Rahul");
    stdinfo.age=20;
    strcpy(stdinfo.subject,"bca");
    
    printf("%d\n",stdinfo.no);
    printf("%s\n",stdinfo.name);
    printf("%d\n",stdinfo.age);
    printf("%s\n",stdinfo.subject);
}

