#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char info;
	FILE *fptr;
	fptr=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//userinfo.txt","r");
	if(fptr==NULL){
		printf("Error!");
		exit(1);
	}
info=fgetc(fptr);
while(info!=EOF){
	printf("%c",info);
	info=fgetc(fptr);
}
	fclose(fptr);
	return 0;
}


