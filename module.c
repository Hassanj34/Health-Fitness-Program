#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void day1(void); void day2(void); void day3(void); void day4(void); void day5(void); void day6(void); void day7(void);

int main(void){
	int i, mealplan=1, choice;
	char array[100];
	
	FILE *fptr;

	
	printf("USER ID'S: Hamza(0189), Ibrahim(0312), Hassan(1292) \n");
	printf("ENTER USER ID: ");
	scanf("%d",&choice);
	
	switch(choice){
	
	case 190189: 
	fptr=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//userinfo.txt","r");
	if(fptr==NULL){
		printf("Error!");
		return 0;
	}
    while(!feof(fptr)){
	fgets(array,100,fptr);
	puts(array);
    }
fclose(fptr);
for(i=1;mealplan!=0;i++){
	printf("\n");
	printf("\t\t\t***Press 0 to exit.");
	printf("\t\t\tSelect meal plan day: ");
	scanf("%d",&mealplan);

    if(mealplan>7){
    	printf("Error.");
	}
	switch(mealplan){
		case 1:
			day1();
			break;
			
		case 2:
			day2();
			break;
			
		case 3:
			day3();
			break;
			
		case 4:
			day4();
			break;
			
		case 5:
			day5();
			break;
			
		case 6:
			day6();
			break;
			
		case 7:
			day7();
			break;
	}
}
}
}
	void day1(void){
		FILE *day1;
		day1=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day1.txt","r");
		
		char dayone[500];
		while(!feof(day1))
		{
			fgets(dayone,500,day1);
			puts(dayone);
			
		}
		fclose(day1);
	}
		void day2(void){
		FILE *day2;
		day2=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day2.txt","r");
		
		char daytwo[500];
		while(!feof(day2))
		{
			fgets(daytwo,500,day2);
			puts(daytwo);
			
		}
		fclose(day2);
	}
		void day3(void){
		FILE *day3;
		day3=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day3.txt","r");
		
		char daythree[500];
		while(!feof(day3))
		{
			fgets(daythree,500,day3);
			puts(daythree);
			
		}
		fclose(day3);
	}
		void day4(void){
		FILE *day4;
		day4=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day4.txt","r");		
		char dayfour[500];
		while(!feof(day4))
		{
			fgets(dayfour,500,day4);
			puts(dayfour);
			
		}
		fclose(day4);
	}
		void day5(void){
		FILE *day5;
		day5=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day5.txt","r");
		
		char dayfive[500];
		while(!feof(day5))
		{
			fgets(dayfive,500,day5);
			puts(dayfive);
			
		}
		fclose(day5);
	}
		void day6(void){
		FILE *day6;
		day6=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day6.txt","r");
		
		char daysix[500];
		while(!feof(day6))
		{
			fgets(daysix,500,day6);
			puts(daysix);
			
		}
		fclose(day6);
	}
		void day7(void){
		FILE *day7;
		day7=fopen("C:/Users/hamza adeel/Desktop/First Semester ft. FAST/Programming Fundamentals/Project//day7.txt","r");
		
		char dayseven[500];
		while(!feof(day7))
		{
			fgets(dayseven,500,day7);
			puts(dayseven);
			
		}
		fclose(day7);
	}
