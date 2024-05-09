#include<stdio.h>
main(){
	//Vowel or Consonant using switch case
	char a;
	printf("enter any alphabet : ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a':
		printf("%c is vowel ",a);
		break;
		
		case 'e':
		printf("%c is vowel ",a);
		break;
		
		case 'i':
		printf("%c is vowel ",a);
		break;
		
		case 'o':
		printf("%c is vowel ",a);
		break;
		
		case 'u':
		printf("%c is vowel ",a);
		break;
		
		default:
		printf("%c is constents ",a);
		break;
		
	}
}
