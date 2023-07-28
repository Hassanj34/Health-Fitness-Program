#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void gain(void);
void lose(void);
void balanced(void);
void lday1 (void);
void lday2 (void);
void lday3 (void);
void lday4 (void);
void lday5 (void);
void lday6 (void);
void lday7 (void);
struct info
	{
	int age; float weight,height; char name[30],dob[20],id[10],gender;
	}infop;
int mealplan=1;	
void main()
{	
	int select=1;
	float BMI;
	
	FILE * fpointer;
	if((fpointer=fopen("D:/Studies/Programing Fundamentals/Project/user//new user.txt","w"))==NULL)
		{
			printf("ERORR! writting file.");
		}
	printf("Enter ID: ");fflush(stdin);
	gets(infop.id);
	printf("Enter name: ");fflush(stdin);
	gets(infop.name);
	printf("Enter date of birth: ");fflush(stdin);
	gets(infop.dob);
	printf("Enter gender: ");
	scanf("%c",&infop.gender);
	printf("Enter age: ");
	scanf("%d",&infop.age);
	printf("Enter weight(kgs): ");
	scanf("%f",&infop.weight);
	printf("Enter height(ms): ");
	scanf("%f",&infop.height);	
		
		BMI=infop.weight/(infop.height*infop.height);
		printf("\nYour BMI(body mass index) is: %.2f",BMI);
		
	fprintf(fpointer,"ID: %s\n",infop.id);
	fprintf(fpointer,"Name: %s\n",infop.name);
	fprintf(fpointer,"Date of birth: %s\n",infop.dob);
	fprintf(fpointer,"Gender: %c\n",infop.gender);
	fprintf(fpointer,"Age: %d\n",infop.age);
	fprintf(fpointer,"Weight: %.2\n",infop.weight);
	fprintf(fpointer,"Height: %.2f\n",infop.height);
	fprintf(fpointer,"Your BMI(body mass index) is: %.2f", BMI);
	fclose(fpointer);
	if(BMI<18.5)
		{
			printf("\nYou are in the underwieght range.. Recommended program for you is to gain weight\n");
			printf("\nEnter 1(Recommended Program)\t Enter 2(Lose wieght)\t Enter 3(Balanced diet)\n");
			printf("******************************************************************************");
			printf("\t\t\tSelect your desired program: ");scanf("%d",&select);
			
				switch(select)
				{
					case 1: 
							printf("Welcome to your weight gain program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							//gain();
							break;
					case 2:
							printf("Welcome to your weight lose program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							lose();
							break;
					case 3:
							printf("Welcome to your balanced diet program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							//balanced();
							break;
				}
		}
	else if(BMI>18.5 && BMI<24.5){
		printf("You are in healthy weight range.. Recomended program for you is balanced diet\n");
		printf("\nEnter 1(Recommended program)\t Enter 2(Lose wieght)\t Enter 3(Gain weight)\n");
		printf("******************************************************************************");
			printf("\t\t\tSelect your desired program: ");scanf("%d",&select);
			switch(select)
				{
					case 1: 
							printf("Welcome to your balanced diet program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							//balanced();
							break;
					case 2:
							printf("Welcome to your weight lose program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							lose();
							break;
					case 3:
							printf("Welcome to your gain weight program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							//gain();
							break;
				}
	}
	else{
		printf("You are in the overweight range.. Recomended program for you is to lose weight\n");
		printf("\nEnter 1(Recommneded program)\t Enter 2(Gain Weight)\t Enter 3(Balanced diet)\n");
		printf("******************************************************************************");
			printf("\t\t\tSelect your desired program: ");scanf("%d",&select);
			switch(select)
				{
					case 1: 
							printf("Welcome to your weight lose program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							lose();
							break;
					case 2:
							printf("Welcome to your weight gain program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							//gain();
							break;
					case 3:
							printf("Welcome to your balanced diet program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							//balanced();
							break;
				}
	}
}
void lose (void){
	while(mealplan!=0){
			printf("Enter 1 for meal plan for day 1\nEnter 2 for meal plan for day 2\nEnter 3 for meal plan for day 3\nEnter 4 for meal plan for day 4\nEnter 5 for meal plan for day 5\nEnter 6 for meal plan for day 6\nEnter 7 for meal plan for day 7\nEnter 0 to exit\n\n");
			scanf("%d",&mealplan);
			switch(mealplan){
				case 1:
					lday1();
					break;
				case 2:
					lday2();
					break;
				case 3:
					lday3();
					break;
				case 4:
					lday4();
					break;
				case 5:
					lday5();
					break;
				case 6:
					lday6();
					break;
				case 7:
					lday7();
					break;
			}	
	}
}
void lday1 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 1.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void lday2 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 2.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void lday3 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 3.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void lday4 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 4.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void lday5 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 5.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void lday6 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 6.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void lday7 (void){
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/user//day 7.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
