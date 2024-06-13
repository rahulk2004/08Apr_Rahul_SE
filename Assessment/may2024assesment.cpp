#include <stdio.h>
#include <string.h>

// Functions
void reverse(char str[]){
	//reverse a string
    printf("\nReverse: %s\n",strrev(str));
}

void concat(char str1[],char str2[]){
	//Concatenation
    printf("\nConcatenated: %s\n",strcat(str1,str2));
}

void palindrome(char str[]){
	//Palindrome
    int l=strlen(str);
    
    for(int i=0;i<l;i++){
    	
        if(str[i]!=str[l-i-1]){
        	
            printf("\nNot a palindrome\n");
            return;
        }
    }
    printf("\nPalindrome\n");
}

void copy(char dest[],char src[]){
	//Copy a string
    strcpy(dest, src);
}

int length(char str[]){
	//Length of the string
    return strlen(str);
}

void charFrequency(char str[]){
	//Frequency of character in s string
    int count;
    
    for (char c='a';c<='z';c++){
    	
        count=0;
        
        for(int i=0;str[i]!='\0';i++){
        	
            if (c==str[i])
                count++;
        }
        if(count>0)
            printf("%c found %d times\n",c,count);
    }
}

void countVowelsConsonants(char str[]){
	//Find number of vowels and consonants
    int vowels=0,consonants=0;
    
    for (int i=0;str[i]!='\0';i++){
    	
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowels++;
            
        } else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            consonants++;
        }
    }

    printf("Number of vowels: %d\n",vowels);
    printf("Number of consonants: %d\n",consonants);
}

void countSpacesDigits(char str[]){
	//Find number of blank spaces and digits
    int digits=0,spaces=0;
    
    for (int i=0;str[i]!='\0';i++){
    	
        if(str[i]>='0'&&str[i]<='9'){
        	
            digits++;
            
        } else if(str[i]==' '){
        	
            spaces++;
        }
    }

    printf("\nDigits: %d\n",digits);
    printf("\nSpaces: %d\n",spaces);
}


main(){
    int choice,repeat = 1;
    char str1[100];
    char str2[100];
    
    
	while(repeat){
		
    printf("Main Menu:\n");
    printf("1.Reverse string\n");
    printf("2.Concatenation\n");
    printf("3.Palindrome\n");
    printf("4.Copy string\n");
    printf("5.Length of the string\n");
    printf("6.Frequency of character in a string\n");
    printf("7.Find number of vowels and consonants\n");
    printf("8.Find number of blank spaces and digits\n");
    
    printf("Enter string: ");
    gets(str1);

    printf("Enter choice according to menu: ");
    scanf("%d", &choice);


    switch(choice){
    	
        case 1:
        	
            reverse(str1);
            break;
            
        case 2:
        	
            printf("Enter second string: ");
            gets(str2);
            concat(str1, str2);
            break;
            
        case 3:
        	
            palindrome(str1);
            break;
            
        case 4:
        	
            copy(str2, str1);
            printf("Your entered string: %s\n", str1);
            printf("Copy of string: %s\n", str2);
            break;
            
        case 5:
        	
            printf("Length: %d\n", length(str1));
            break;
            
        case 6:
            charFrequency(str1);
            break;
            
        case 7:
        	
            countVowelsConsonants(str1);
            break;
            
        case 8:
        	
            countSpacesDigits(str1);
            break;
            
        default:
        	
            printf("Invalid choice\n");
            break;
            
    }
     printf("\nDo you want to perform another operation? (1 for yes, 0 for no): ");
    scanf("%d",&repeat);
    
}

}



