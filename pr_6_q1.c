/*
Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome.
*/

#include<stdio.h>

void main(){
	int i,length=0,sum=1;
	char name[50];
	
	printf("Enter your name:");
	gets(name);
	
	          
	for(i=0; name[i]!='\0'; i++){
		length++;
	}
	for(i=0; i<length/2; i++){
		if(name[i] != name[length-1-i]){
			sum=0;
		}
	}
	(sum==1)?printf("given name is palindome..")
			:printf("given name is note palindome..");
}





