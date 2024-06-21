#include<stdio.h>
struct studinfo
{
	int rno ;
	char name[10],sub[10];
}st,st2;
main(){
	//studinfo st; //object of structure 
	printf("enter your rollo no. : ");
	scanf("%d",&st.rno);
	printf("enter your name : ");
	scanf("%s",&st.name);
	printf("enter your subject : ");
	scanf("%s",&st.sub);
	
	printf("\nroll no: %d",st.rno);
	printf("\nname : %s",st.name);
	printf("\nsubject : %s",st.name);
	
	
	printf("\n enter second rollo no. : ");
	scanf("%d",&st2.rno);
	printf("enter second name : ");
	scanf("%s",&st2.name);
	printf("enter second subject : ");
	scanf("%s",&st2.sub);
	
	printf("\nroll no: %d",st2.rno);
	printf("\nname : %s",st2.name);
	printf("\nsubject : %s",st2.name);
	
}
