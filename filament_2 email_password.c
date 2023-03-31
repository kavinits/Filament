#include<stdio.h> 
#include<string.h> 
main() 
{ 
    char username[20]; 
    char password[12]; 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"kavitavghs@gmail.com")==0)
	{ 
        if(strcmp(password,"8008")==0)
		{ 
            printf("\nLogin Success!"); 
        }
		else
		{ 
            printf("\nwrong password"); 
        } 
        
    }
	    else
	   { 
             printf("\nUser doesn't exist"); 
       } 
 
} 
