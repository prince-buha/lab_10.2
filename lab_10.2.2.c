#include<stdio.h>

int string(char text){
	return text;
	
}
void main(){
	char alpha[100];
	printf("Enter any String: ");
	gets(alpha);
	printf("The Length of String is %d",strlen(alpha));
}
