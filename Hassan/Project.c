#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include <time.h>
#include<setjmp.h>
jmp_buf buf;
jmp_buf puf; 
void day1(void);void day2(void);void day3(void);void day4(void);void day5(void);void day6(void);void day7(void);
void work1(void);void work2(void);void work3(void);void work4(void);void work5(void);void work6(void);void work7(void);
void daY1(void);void daY2(void);void daY3(void);void daY4(void);void daY5(void);void daY6(void);void daY7(void);
void Day1(void);void Day2(void);void Day3(void);void Day4(void);void Day5(void);void Day6(void);void Day7(void);void Day8(void);
void Day9(void);void Day10(void);void Day11(void);void Day12(void);void Day13(void);void Day14(void);void Day15(void);void Day16(void);
void Day17(void);void Day18(void);void Day19(void);void Day20(void);void Day21(void);void Day22(void);void Day23(void);void Day24(void);void Day25(void);
void Day26(void);void Day27(void);void Day28(void);
void gain(void);void lose(void);void balanced(void);void lday1 (void);
void lday2 (void);void lday3 (void);void lday4 (void);void lday5 (void);void lday6 (void);void lday7 (void);
int hour=0,minute=0,second=0,flag=0,choose,option=0,mealplan=1,workout=1,yn;
char welcome;
struct info
	{
	int age; float weight,height; char name[30],dob[20],id[10],gender;
	}infop;
struct caloriecounter
{
	char name[30];
	float protiens;
	float carbohydrates;
	float fats;
	float calories;
}cc;	
int main(void)
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t***************************************\n\t\t\t\t\t\t\t\t\t\t       | WELCOME TO HEALTH AND FITNESS PROGRAM |\n\t\t\t\t\t\t\t\t\t\t\t***************************************\n\t\t\t\t\t\t\t\t\t\t\t\t     Designed by:\n\n\t\t\t\t\t\t\t\t\t\t\t\t     Hassan Jamil\n\t\t\t\t\t\t\t\t\t\t\t\t     Hamza Adeel\n\t\t\t\t\t\t\t\t\t\t\t\t     Ibrahim Khan\n\n\n\t\t\t\t\t\t\t\t\t\t\t    Press any key to continue....");
	scanf("%c",&welcome); system("cls");
	int users,user,i;char array[100];int select,SELECT,choice,meal=1,work=1,mealp=1,workt=1,me=1,wt=1;
	FILE * dairy;FILE * fruits;FILE * juice;FILE * cereal;FILE * meat;FILE * ff;FILE * sweet;FILE * veg;
	FILE *jamil;FILE *fptr;FILE * ibrahim;
	menu:setjmp(puf);
		system("cls");
	printf("\t\t\t\t\t\t\t\t\t1. New User\t\t 2. Pre-stored Users\t\t3. Exit Program\t\t");scanf("%d",&users);system("cls");
	if(users==2){
	printf("\t\t\t\t\t\t\t\t\tUser ID's: Hassan: 1292, Ibrahim: 190312, Hamza: 190189\n\n\t\t\t\t\t\t\t\t\t\t\tEnter user ID: ");scanf("%d",&user);
	system("cls");
	switch(user)
	{
		case 1292:
			
			jamil = fopen("D:/Studies/Programing Fundamentals/Project/hassan//basic info.txt","r");
			char hassan[500];
	
				while(!feof(jamil))
				{		
					fgets(hassan,500,jamil);
					puts(hassan);
				}					
			fclose(jamil);
			jump:
			printf("\n\t\t\t\t\t\t\t\t\t1. Meal Plans\t\t\t2. Workout Plans\t\t\t3.Calorie Counter\t\t\t4. Go to main menu\n");
			scanf("%d",&option);
				switch(option)
				{
					case 1:
						while(meal!=0)
						{
						puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
						printf("\t\t\t\t\t\t\t\t\t\t    Select meal plan day: ");scanf("%d",&meal);
						choose=meal;
						switch(meal)
						{
							case 1:
							system("cls");
							day1();
							break;
							case 2:
							system("cls");
							day2();
							break;
							case 3:
							system("cls");
							day3();
							break;
							case 4:
							system("cls");
							day4();
							break;
							case 5:
							system("cls");
							day3();	
							case 6:
							system("cls");
							day6();
							break;
							case 7:
							system("cls");
							day7();
							break;
							case 0:
							goto jump;	
						}
					}
					break;
					case 2:
						while(work!=0)
						{
						setjmp(buf);
						puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
						printf("\t\t\t\t\t\t\t\t\t\t    Select workout plan day: ");scanf("%d",&work);choose=work;system("cls");
						switch(work)
						{			
							case 1:
							work1();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1)
							{
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 2:
							work2();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 3:
							work3();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 4:
							work4();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 5:
							work5();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 6:
							work6();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 7:
							work7();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter(); 
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 0:
							goto jump;
			    		}
			   			}
			   		break;
					case 3:
					label_m:
	system("cls");
	printf("\t\t\t       CALORIES MODULE\n\n");
	printf("\t1. Food Calorie chart\t\t\t2.Calorie counter\n\t\t\t\t(3. Back) ");scanf("%d",&select);
	if(select==1)
	{
		label_o:
		system("cls");
		printf("\t\t\t       CALORIES MODULE\n\n");
		printf("\n\n\t\t\t     SELECT AN OPTION\n\n");
		printf("\n\n1. Milk & Dairy products\t2. Fruits\t\t3. Fruit (juices)\n4. Cereal products\t\t5. Vegetables\t\t6. Meat products\n7. Fast Food\t\t\t8. Candy & Sweets\t\t");
		scanf("%d",&SELECT);
		system("cls");
		{	
			if(SELECT==1)
			{
				char cal[200];
				dairy = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//milk and dairy.txt","r");
				if(dairy==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(dairy))
				{
					fgets(cal,200,dairy);
					puts(cal);
				}
				fclose(dairy);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					}
	}
			else if(SELECT==2)
			{
				char cal[200];
				fruits = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruits.txt","r");
				if(fruits==NULL)
				{
					printf("ERROR ! Reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(fruits))
				{
					fgets(cal,200,fruits);
					puts(cal);
				}
				fclose(fruits);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					}
			}
			else if(SELECT==3)
			{
				char cal[200];
				juice = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruit (juices).txt","r");
				if(juice==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(juice))
				{
					fgets(cal,200,juice);
					puts(cal);
				}
				fclose(juice);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;			
					}
			}
			else if(SELECT==4)
			{
				char cal[200];
				cereal = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//cereal.txt","r");
				if(cereal==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(cereal))
				{
					fgets(cal,200,cereal);
					puts(cal);
				}
				fclose(cereal);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					}
			}
			else if(SELECT==5)
			{
				char cal[200];
				veg = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//vegetables.txt","r");
				if(veg==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(veg))
				{
					fgets(cal,200,veg);
					puts(cal);
				}
				fclose(veg);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
					
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					}			
			}
			else if(SELECT==6)
			{
				char cal[200];
				meat = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//meat.txt","r");
				if(meat==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(meat))
				{
					fgets(cal,200,meat);
					puts(cal);
				}
				fclose(meat);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					}
			}
			else if(SELECT==7)
			{
				char cal[200];
				ff = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fast food.txt","r");
				if(ff==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(ff))
				{
					fgets(cal,200,ff);
					puts(cal);
				}
				fclose(ff);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					
					}
			}
			else if(SELECT==8)
			{
				char cal[200];
				sweet = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//sweets.txt","r");
				if(sweet==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(sweet))
				{
					fgets(cal,200,sweet);
					puts(cal);
				}
				fclose(sweet);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_o;
					}
					else
					{
						goto label_m;
					}	
			}
			else if(SELECT>8)
			{
				
				printf("ERROR ! wrong input..\n\n");
				goto label_o;
			}
		}
	}
	else if(select==2)
	{
		label_c:
		system("cls");
		printf("\n\n\t\t****************|CALORIE COUNTER|*****************");	
		printf("\n\n");
		printf("Enter the food product name: ");fflush(stdin);gets(cc.name);
		printf("Amount of Fat (grams): ");scanf("%f",&cc.fats);
		printf("Amount of Protien (grams): ");scanf("%f",&cc.protiens);
		printf("Amount of Carbohydrates (grams): ");scanf("%f",&cc.carbohydrates);
	
			cc.calories = (cc.fats*9) + (cc.protiens*4) + (cc.carbohydrates*4);
		printf("\nTotal calories in %s are %.1f...",cc.name,cc.calories);
		int choice;
		printf("\n\nDo you want to make another calculation ? \nPress 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
			if(choice==1)
			{
				goto label_c;
			}
			else
			{
				goto label_m;
			}
	}
	else if(select==0||select>3)
	{
		printf("ERROR ! wrong input");
		goto label_m;
	}
	else if (select==3){
		goto fly;
	}
	break;    
					case 4:
					goto menu;     	
			   	}
	    case 190189: 
			fptr=fopen("D:/Studies/Programing Fundamentals/Project/Project//userinfo.txt","r");
			if(fptr==NULL){
				printf("Error!");
				return 0;
			}
    		while(!feof(fptr)){
				fgets(array,100,fptr);
				puts(array);
    		}
			fclose(fptr);
			jmp:
			printf("\n\t\t\t\t\t\t\t\t\t1. Meal Plans\t\t\t2. Workout Plans\t\t\t3. Calorie counter\t\t\t4. Go to main menu\n");
			scanf("%d",&option);
			switch(option){
					case 1:
						while(mealp!=0)
						{
						puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
						printf("\t\t\t\t\t\t\t\t\t\t    Select meal plan day: ");scanf("%d",&mealp);
						choose=mealp;
						switch(mealp)
						{
							case 1:
							system("cls");
							daY1();
							break;
							case 2:
							system("cls");
							daY2();
							break;
							case 3:
							system("cls");
							daY3();
							break;
							case 4:
							system("cls");
							daY4();
							break;
							case 5:
							system("cls");
							daY3();	
							case 6:
							system("cls");
							daY6();
							break;
							case 7:
							system("cls");
							daY7();
							break;
							case 0:
							goto jmp;	
						}
					}
					break;
					case 2:
						while(workt!=0)
						{
						setjmp(buf);
						puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
						printf("\t\t\t\t\t\t\t\t\t\t    Select workout plan day: ");scanf("%d",&workt);system("cls");
						choose=workt;
						switch(workt)
						{			
							case 1:
							work1();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1)
							{
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 2:
							work2();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 3:
							work3();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 4:
							work4();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 5:
							work5();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 6:
							work6();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 7:
							work7();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter(); 
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 0:
							goto jmp;
			    		}
			   			}
			   		break;
					case 3:
					label_men:
	system("cls");
	printf("\t\t\t       CALORIES MODULE\n\n");
	printf("\t1. Food Calorie chart\t\t\t2.Calorie counter\n\t\t\t\t(3. Back) ");scanf("%d",&select);
	if(select==1)
	{
		label_opt:
		system("cls");
		printf("\t\t\t       CALORIES MODULE\n\n");
		printf("\n\n\t\t\t     SELECT AN OPTION\n\n");
		printf("\n\n1. Milk & Dairy products\t2. Fruits\t\t3. Fruit (juices)\n4. Cereal products\t\t5. Vegetables\t\t6. Meat products\n7. Fast Food\t\t\t8. Candy & Sweets\t\t");
		scanf("%d",&SELECT);
		system("cls");
		{	
			if(SELECT==1)
			{
				char cal[200];
				dairy = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//milk and dairy.txt","r");
				if(dairy==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(dairy))
				{
					fgets(cal,200,dairy);
					puts(cal);
				}
				fclose(dairy);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					}
	}
			else if(SELECT==2)
			{
				char cal[200];
				fruits = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruits.txt","r");
				if(fruits==NULL)
				{
					printf("ERROR ! Reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(fruits))
				{
					fgets(cal,200,fruits);
					puts(cal);
				}
				fclose(fruits);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					}
			}
			else if(SELECT==3)
			{
				char cal[200];
				juice = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruit (juices).txt","r");
				if(juice==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(juice))
				{
					fgets(cal,200,juice);
					puts(cal);
				}
				fclose(juice);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;			
					}
			}
			else if(SELECT==4)
			{
				char cal[200];
				cereal = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//cereal.txt","r");
				if(cereal==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(cereal))
				{
					fgets(cal,200,cereal);
					puts(cal);
				}
				fclose(cereal);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					}
			}
			else if(SELECT==5)
			{
				char cal[200];
				veg = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//vegetables.txt","r");
				if(veg==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(veg))
				{
					fgets(cal,200,veg);
					puts(cal);
				}
				fclose(veg);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
					
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					}			
			}
			else if(SELECT==6)
			{
				char cal[200];
				meat = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//meat.txt","r");
				if(meat==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(meat))
				{
					fgets(cal,200,meat);
					puts(cal);
				}
				fclose(meat);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					}
			}
			else if(SELECT==7)
			{
				char cal[200];
				ff = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fast food.txt","r");
				if(ff==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(ff))
				{
					fgets(cal,200,ff);
					puts(cal);
				}
				fclose(ff);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					
					}
			}
			else if(SELECT==8)
			{
				char cal[200];
				sweet = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//sweets.txt","r");
				if(sweet==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(sweet))
				{
					fgets(cal,200,sweet);
					puts(cal);
				}
				fclose(sweet);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_opt;
					}
					else
					{
						goto label_men;
					}	
			}
			else if(SELECT>8)
			{
				
				printf("ERROR ! wrong input..\n\n");
				goto label_opt;
			}
		}
	}
	else if(select==2)
	{
		label_cal:
		system("cls");
		printf("\n\n\t\t****************|CALORIE COUNTER|*****************");	
		printf("\n\n");
		printf("Enter the food product name: ");fflush(stdin);gets(cc.name);
		printf("Amount of Fat (grams): ");scanf("%f",&cc.fats);
		printf("Amount of Protien (grams): ");scanf("%f",&cc.protiens);
		printf("Amount of Carbohydrates (grams): ");scanf("%f",&cc.carbohydrates);
	
			cc.calories = (cc.fats*9) + (cc.protiens*4) + (cc.carbohydrates*4);
		printf("\nTotal calories in %s are %.1f...",cc.name,cc.calories);
		int choice;
		printf("\n\nDo you want to make another calculation ? \nPress 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
			if(choice==1)
			{
				goto label_cal;
			}
			else
			{
				goto label_men;
			}
	}
	else if(select==0||select>3)
	{
		printf("ERROR ! wrong input");
		goto label_menu;
	}
	else if (select==3){
		goto fly;
	}
	break;    
					case 4:
					goto menu;     	
			   	}
		case 190312:
			ibrahim = fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//ibrahim.txt","r");
			if (ibrahim==NULL)
			{
				printf("file not found");
				return 0;
			}	
			while(!feof(ibrahim))
			{
				fgets(array,100,ibrahim);
				puts(array);
			}
			fclose(ibrahim);
			printf("\n\nMy BMI is in normal range, balanced diet program is recommended for me but i choose the weight gain program because i desire to build muscle and strenght\n");
			fly:
			printf("\n\t\t\t\t\t\t\t\t\t1. Meal Plans\t\t\t2. Workout Plans\t\t\t3.Calorie Counter\t\t\t4. Go to main menu\n");
			scanf("%d",&option);
			switch(option){
				case 1:
				for(i=1; me!=0 ; i++)
				{
					printf("\n");
					puts("\t\t\t***Enter 0 to exit***");
					printf("\t\t\tSelect meal plan day: ");scanf("%d",&me);
					if(me > 28)
					{
						printf("Error");
					}
					switch(me)
					{
						case 1:
						system("cls");	
						Day1();
						break;
						case 2:
						system("cls");	
						Day2();
						break;
						case 3:
						system("cls");	
						Day3();
						break;
						case 4:
						system("cls");	
						Day4();
						break;
						case 5:
						system("cls");	
						Day5();
						break;
						case 6:
						system("cls");	
						Day6();
						break;
						case 7:
						system("cls");	
						Day7();
						break;
						case 8:
						system("cls");	
						Day8();
						break;
						case 9:
						system("cls");	
						Day9();
						break;
						case 10:
						system("cls");	
						Day10();
						break;
						case 11:
						system("cls");	
						Day11();
						break;
						case 12:
						system("cls");	
						Day12();
						break;
						case 13:
						system("cls");	
						Day13();
						break;
						case 14:
						system("cls");	
						Day14();
						break;
						case 15:
						system("cls");	
						Day15();
						break;
						case 16:
						system("cls");	
						Day16();
						break;
						case 17:
						system("cls");
						Day17();
						break;
						case 18:
						system("cls");	
						Day18();
						break;
						case 19:
						system("cls");	
						Day19();
						break;
						case 20:
						system("cls");	
						Day20();
						break;
						case 21:
						system("cls");	
						Day21();
						break;
						case 22:
						system("cls");	
						Day22();
						break;
						case 23:
						system("cls");	
						Day23();
						break;
						case 24:
						system("cls");	
						Day24();
						break;
						case 25:
						system("cls");	
						Day25();
						break;
						case 26:
						system("cls");		
						Day26();
						break;
						case 27:
						system("cls");	
						Day27();
						break;
						case 28:
						system("cls");	
						Day28();
						printf("\n\tCongratulations ! you have completed your 28 days challenge..");
						case 0:
						goto fly;																					
					}
				}
				break;
				case 2:
						while(wt!=0)
						{
						setjmp(buf);
						puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
						printf("\t\t\t\t\t\t\t\t\t\t    Select workout plan day: ");scanf("%d",&wt);system("cls");
						choose=wt;
						switch(wt)
						{			
							case 1:
							work1();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1)
							{
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 2:
							work2();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 3:
							work3();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 4:
							work4();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 5:
							work5();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 6:
							work6();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter();
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 7:
							work7();
							printf("Do you wanna start work out?(1.Yes/2.No))\n");
							scanf("%d",&yn);
							if(yn==1){
							while(1){
							counter(); 
                    		}
							}
							else if(yn==2){
							break;
							}
							break;
							case 0:
							goto fly;
			    		}
			   			}
			   		break;
					case 3:
					    label_menu:
	system("cls");
	printf("\t\t\t       CALORIES MODULE\n\n");
	printf("\t1. Food Calorie chart\t\t\t2.Calorie counter\n\t\t\t\t(3. Back) ");scanf("%d",&select);
	if(select==1)
	{
		label_option:
		system("cls");
		printf("\t\t\t       CALORIES MODULE\n\n");
		printf("\n\n\t\t\t     SELECT AN OPTION\n\n");
		printf("\n\n1. Milk & Dairy products\t2. Fruits\t\t3. Fruit (juices)\n4. Cereal products\t\t5. Vegetables\t\t6. Meat products\n7. Fast Food\t\t\t8. Candy & Sweets\t\t");
		scanf("%d",&SELECT);
		system("cls");
		{	
			if(SELECT==1)
			{
				char cal[200];
				dairy = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//milk and dairy.txt","r");
				if(dairy==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(dairy))
				{
					fgets(cal,200,dairy);
					puts(cal);
				}
				fclose(dairy);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
	}
			else if(SELECT==2)
			{
				char cal[200];
				fruits = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruits.txt","r");
				if(fruits==NULL)
				{
					printf("ERROR ! Reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(fruits))
				{
					fgets(cal,200,fruits);
					puts(cal);
				}
				fclose(fruits);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==3)
			{
				char cal[200];
				juice = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruit (juices).txt","r");
				if(juice==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(juice))
				{
					fgets(cal,200,juice);
					puts(cal);
				}
				fclose(juice);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;			
					}
			}
			else if(SELECT==4)
			{
				char cal[200];
				cereal = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//cereal.txt","r");
				if(cereal==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(cereal))
				{
					fgets(cal,200,cereal);
					puts(cal);
				}
				fclose(cereal);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==5)
			{
				char cal[200];
				veg = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//vegetables.txt","r");
				if(veg==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(veg))
				{
					fgets(cal,200,veg);
					puts(cal);
				}
				fclose(veg);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
					
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}			
			}
			else if(SELECT==6)
			{
				char cal[200];
				meat = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//meat.txt","r");
				if(meat==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(meat))
				{
					fgets(cal,200,meat);
					puts(cal);
				}
				fclose(meat);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==7)
			{
				char cal[200];
				ff = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fast food.txt","r");
				if(ff==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(ff))
				{
					fgets(cal,200,ff);
					puts(cal);
				}
				fclose(ff);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					
					}
			}
			else if(SELECT==8)
			{
				char cal[200];
				sweet = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//sweets.txt","r");
				if(sweet==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(sweet))
				{
					fgets(cal,200,sweet);
					puts(cal);
				}
				fclose(sweet);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}	
			}
			else if(SELECT>8)
			{
				
				printf("ERROR ! wrong input..\n\n");
				goto label_option;
			}
		}
	}
	else if(select==2)
	{
		label_calorie:
		system("cls");
		printf("\n\n\t\t****************|CALORIE COUNTER|*****************");	
		printf("\n\n");
		printf("Enter the food product name: ");fflush(stdin);gets(cc.name);
		printf("Amount of Fat (grams): ");scanf("%f",&cc.fats);
		printf("Amount of Protien (grams): ");scanf("%f",&cc.protiens);
		printf("Amount of Carbohydrates (grams): ");scanf("%f",&cc.carbohydrates);
	
			cc.calories = (cc.fats*9) + (cc.protiens*4) + (cc.carbohydrates*4);
		printf("\nTotal calories in %s are %.1f...",cc.name,cc.calories);
		int choice;
		printf("\n\nDo you want to make another calculation ? \nPress 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
			if(choice==1)
			{
				goto label_calorie;
			}
			else
			{
				goto label_menu;
			}
	}
	else if(select==0||select>3)
	{
		printf("ERROR ! wrong input");
		goto label_menu;
	}
	else if (select==3){
		goto fly;
	}
	break;
					case 4:
					goto menu;
			}
	}
}
	else if (users==1){
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
			printf("\t\t\tSelect your desired program: ");scanf("%d",&select);system("cls");
			
				switch(select)
				{
					case 1: 
							printf("Welcome to your weight gain program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							gain();
							break;
					case 2:
							printf("Welcome to your weight lose program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							lose();
							break;
					case 3:
							printf("Welcome to your balanced diet program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							balanced();
							break;
				}
		}
	else if(BMI>18.5 && BMI<24.5){
		printf("You are in healthy weight range.. Recomended program for you is balanced diet\n");
		printf("\nEnter 1(Recommended program)\t Enter 2(Lose wieght)\t Enter 3(Gain weight)\n");
		printf("******************************************************************************");
			printf("\t\t\tSelect your desired program: ");scanf("%d",&select);system("cls");
			switch(select)
				{
					case 1: 
							printf("Welcome to your balanced diet program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							balanced();
							break;
					case 2:
							printf("Welcome to your weight lose program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							lose();
							break;
					case 3:
							printf("Welcome to your gain weight program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							gain();
							break;
				}
	}
	else{
		printf("You are in the overweight range.. Recomended program for you is to lose weight\n");
		printf("\nEnter 1(Recommneded program)\t Enter 2(Gain Weight)\t Enter 3(Balanced diet)\n");
		printf("******************************************************************************");
			printf("\t\t\tSelect your desired program: ");scanf("%d",&select);system("cls");
			switch(select)
				{
					case 1: 
							printf("Welcome to your weight lose program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							lose();
							break;
					case 2:
							printf("Welcome to your weight gain program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							gain();
							break;
					case 3:
							printf("Welcome to your balanced diet program ! \nIf you sincerly follow this program you will see progress..Good Luck\n");
							balanced();
							break;
				}
	}
	}
}
void day1(void)
{
	FILE *day1;
	day1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//day 1.txt","r");
			char dayone[500];
	
				while(!feof(day1))
				{		
					fgets(dayone,500,day1);
					puts(dayone);
				}					
			fclose(day1);
}
void day2(void)
{
	FILE *day2;
	day2 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//day 2.txt","r");
			char daytwo[500];
	
				while(!feof(day2))
				{		
					fgets(daytwo,500,day2);
					puts(daytwo);
				}					
			fclose(day2);
}
void day3(void)
{
	FILE *day3;
	day3 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//day 3.txt","r");
			char daythree[500];
	
				while(!feof(day3))
				{		
					fgets(daythree,500,day3);
					puts(daythree);
				}					
			fclose(day3);
}
void day4(void)
{
	FILE *day4;
	day4 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//day 4.txt","r");
			char dayfour[500];
	
				while(!feof(day4))
				{		
					fgets(dayfour,500,day4);
					puts(dayfour);
				}					
			fclose(day4);
}
void day6(void)
{
	FILE *day6;
	day6 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//day 6.txt","r");
			char daysix[500];
	
				while(!feof(day6))
				{		
					fgets(daysix,500,day6);
					puts(daysix);
				}					
			fclose(day6);
}
void day7(void)
{
	FILE *day7;
	day7 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//day 7.txt","r");
			char dayseven[500];
	
				while(!feof(day7))
				{		
					fgets(dayseven,500,day7);
					puts(dayseven);
				}					
			fclose(day7);
}
void work1(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 1.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void work2(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 2.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void work3(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 3.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void work4(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 4.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void work5(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 5.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void work6(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 6.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void work7(void){
	FILE *work1;
	work1 = fopen("D:/Studies/Programing Fundamentals/Project/hassan//work 7.txt","r");
			char workone[500];
	
				while(!feof(work1))
				{		
					fgets(workone,500,work1);
					puts(workone);
				}					
			fclose(work1);
}
void daY1(void){
	FILE *day1;
	day1=fopen("D:/Studies/Programing Fundamentals/Project/Project//day1.txt","r");	
	char dayone[500];
	while(!feof(day1))
		{
			fgets(dayone,500,day1);
			puts(dayone);	
		}
	fclose(day1);
}
void daY2(void){
	FILE *day2;
	day2=fopen("D:/Studies/Programing Fundamentals/Project/Project//day2.txt","r");
	char daytwo[500];
	while(!feof(day2))
		{
			fgets(daytwo,500,day2);
			puts(daytwo);
			
		}
	fclose(day2);
}
void daY3(void){
	FILE *day3;
	day3=fopen("D:/Studies/Programing Fundamentals/Project/Project//day3.txt","r");
	char daythree[500];
	while(!feof(day3))
		{
			fgets(daythree,500,day3);
			puts(daythree);	
		}
	fclose(day3);
}
void daY4(void){
	FILE *day4;
	day4=fopen("D:/Studies/Programing Fundamentals/Project/Project//day4.txt","r");		
	char dayfour[500];
	while(!feof(day4))
		{
			fgets(dayfour,500,day4);
			puts(dayfour);	
		}
	fclose(day4);
}
void daY5(void){
	FILE *day5;
	day5=fopen("D:/Studies/Programing Fundamentals/Project/Project//day5.txt","r");		
	char dayfive[500];
	while(!feof(day5))
		{
			fgets(dayfive,500,day5);
			puts(dayfive);	
		}
	fclose(day5);
}
void daY6(void){
	FILE *day6;
	day6=fopen("D:/Studies/Programing Fundamentals/Project/Project//day6.txt","r");	
	char daysix[500];
	while(!feof(day6))
		{
			fgets(daysix,500,day6);
			puts(daysix);		
		}
	fclose(day6);
}
void daY7(void){
	FILE *day7;
	day7=fopen("D:/Studies/Programing Fundamentals/Project/Project//day7.txt","r");	
	char dayseven[500];
	while(!feof(day7))
		{
			fgets(dayseven,500,day7);
			puts(dayseven);	
		}
	fclose(day7);
}
void Day1(void)
{
		FILE * D1;
	char d1[200];
	D1=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day1.txt","r");
	if(D1==NULL)
	{
		printf("ERROR! reading file day1.txt");
	}
		
	while(!feof(D1))
			{
				fgets(d1,200,D1);
				puts(d1);
			}
	fclose(D1);		
}
void Day2(void)
{
		FILE * D2;
	char d2[200];
	D2=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day2.txt","r");
	if(D2==NULL)
	{
		printf("ERROR! reading file day2.txt");
	}
		
	while(!feof(D2))
			{
				fgets(d2,200,D2);
				puts(d2);
			}
	fclose(D2);		
}
void Day3(void)
{
		FILE * D3;
	char d3[200];
	D3=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day3.txt","r");
	if(D3==NULL)
	{
		printf("ERROR! reading file day3.txt");
	}
		
	while(!feof(D3))
			{
				fgets(d3,200,D3);
				puts(d3);
			}
	fclose(D3);	
}
void Day4(void)
{
		FILE * D4;
	char d4[200];
	D4=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day4.txt","r");
	if(D4==NULL)
	{
		printf("ERROR! reading file day4.txt");
	}
		
	while(!feof(D4))
			{
				fgets(d4,200,D4);
				puts(d4);
			}
	fclose(D4);		
}
void Day5(void)
{
		FILE * D5;
	char d5[200];
	D5=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day5.txt","r");
	if(D5==NULL)
	{
		printf("ERROR! reading file day5.txt");
	}
		
	while(!feof(D5))
			{
				fgets(d5,200,D5);
				puts(d5);
			}
	fclose(D5);	
}
void Day6(void)
{
		FILE * D6;
	char d6[200];
	D6=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day6.txt","r");
	if(D6==NULL)
	{
		printf("ERROR! reading file day6.txt");
	}
		
	while(!feof(D6))
			{
				fgets(d6,200,D6);
				puts(d6);
			}
	fclose(D6);	
}
void Day7(void)
{
		FILE * D7;
	char d7[200];
	D7=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day7.txt","r");
	if(D7==NULL)
	{
		printf("ERROR! reading file day7.txt");
	}
		
	while(!feof(D7))
			{
				fgets(d7,200,D7);
				puts(d7);
			}
	fclose(D7);	
}
void Day8(void)
{
		FILE * D8;
	char d8[200];
	D8=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day8.txt","r");
	if(D8==NULL)
	{
		printf("ERROR! reading file day8.txt");
	}
		
	while(!feof(D8))
			{
				fgets(d8,200,D8);
				puts(d8);
			}
	fclose(D8);	
}
void Day9(void)
{
		FILE * D9;
	char d9[200];
	D9=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day9.txt","r");
	if(D9==NULL)
	{
		printf("ERROR! reading file day9.txt");
	}
		
	while(!feof(D9))
			{
				fgets(d9,200,D9);
				puts(d9);
			}
	fclose(D9);	
}
void Day10(void)
{
		FILE * D10;
	char d10[200];
	D10=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day10.txt","r");
	if(D10==NULL)
	{
		printf("ERROR! reading file day10.txt");
	}
		
	while(!feof(D10))
			{
				fgets(d10,200,D10);
				puts(d10);
			}
	fclose(D10);	
}
void Day11(void)
{
		FILE * D11;
	char d11[200];
	D11=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day11.txt","r");
	if(D11==NULL)
	{
		printf("ERROR! reading file day11.txt");
	}
		
	while(!feof(D11))
			{
				fgets(d11,200,D11);
				puts(d11);
			}
	fclose(D11);	
}
void Day12(void)
{
		FILE * D12;
	char d12[200];
	D12=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day12.txt","r");
	if(D12==NULL)
	{
		printf("ERROR! reading file day12.txt");
	}
		
	while(!feof(D12))
			{
				fgets(d12,200,D12);
				puts(d12);
			}
	fclose(D12);	
}
void Day13(void)
{
		FILE * D13;
	char d13[200];
	D13=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day13.txt","r");
	if(D13==NULL)
	{
		printf("ERROR! reading file day13.txt");
	}
		
	while(!feof(D13))
			{
				fgets(d13,200,D13);
				puts(d13);
			}
	fclose(D13);	
}
void Day14(void)
{
		FILE * D14;
	char d14[200];
	D14=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day14.txt","r");
	if(D14==NULL)
	{
		printf("ERROR! reading file day14.txt");
	}
		
	while(!feof(D14))
			{
				fgets(d14,200,D14);
				puts(d14);
			}
	fclose(D14);	
}
void Day15(void)
{
	FILE * D15;
	char d15[200];
	D15=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day15.txt","r");
	if(D15==NULL)
	{
		printf("ERROR! reading file day15.txt");
	}
		
	while(!feof(D15))
			{
				fgets(d15,200,D15);
				puts(d15);
			}
	fclose(D15);
}
void Day16(void)
{
	FILE * D16;
	char d16[200];
	D16=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day16.txt","r");
	if(D16==NULL)
	{
		printf("ERROR! reading file day16.txt");
	}
		
	while(!feof(D16))
			{
				fgets(d16,200,D16);
				puts(d16);
			}
	fclose(D16);
}
void Day17(void)
{
	FILE * D17;
	char d17[200];
	D17=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day17.txt","r");
	if(D17==NULL)
	{
		printf("ERROR! reading file day17.txt");
	}
		
	while(!feof(D17))
			{
				fgets(d17,200,D17);
				puts(d17);
			}
	fclose(D17);
}
void Day18(void)
{
	FILE * D18;
	char d18[200];
	D18=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day18.txt","r");
	if(D18==NULL)
	{
		printf("ERROR! reading file day18.txt");
	}
		
	while(!feof(D18))
			{
				fgets(d18,200,D18);
				puts(d18);
			}
	fclose(D18);
}
void Day19(void)
{
	FILE * D19;
	char d19[200];
	D19=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day19.txt","r");
	if(D19==NULL)
	{
		printf("ERROR! reading file day19.txt");
	}
		
	while(!feof(D19))
			{
				fgets(d19,200,D19);
				puts(d19);
			}
	fclose(D19);
}
void Day20(void)
{
	FILE * D20;
	char d20[200];
	D20=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day20.txt","r");
	if(D20==NULL)
	{
		printf("ERROR! reading file day20.txt");
	}
		
	while(!feof(D20))
			{
				fgets(d20,200,D20);
				puts(d20);
			}
	fclose(D20);
}
void Day21(void)
{
	FILE * D21;
	char d21[200];
	D21=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day21.txt","r");
	if(D21==NULL)
	{
		printf("ERROR! reading file day21.txt");
	}
		
	while(!feof(D21))
			{
				fgets(d21,200,D21);
				puts(d21);
			}
	fclose(D21);
}
void Day22(void)
{
	FILE * D22;
	char d22[200];
	D22=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day22.txt","r");
	if(D22==NULL)
	{
		printf("ERROR! reading file day22.txt");
	}
		
	while(!feof(D22))
			{
				fgets(d22,200,D22);
				puts(d22);
			}
	fclose(D22);
}
void Day23(void)
{
	FILE * D23;
	char d23[200];
	D23=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day23.txt","r");
	if(D23==NULL)
	{
		printf("ERROR! reading file day23.txt");
	}
		
	while(!feof(D23))
			{
				fgets(d23,200,D23);
				puts(d23);
			}
	fclose(D23);
}
void Day24(void)
{
	FILE * D24;
	char d24[200];
	D24=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day24.txt","r");
	if(D24==NULL)
	{
		printf("ERROR! reading file day24.txt");
	}
		
	while(!feof(D24))
			{
				fgets(d24,200,D24);
				puts(d24);
			}
	fclose(D24);
}
void Day25(void)
{
	FILE * D25;
	char d25[200];
	D25=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day25.txt","r");
	if(D25==NULL)
	{
		printf("ERROR! reading file day25.txt");
	}
		
	while(!feof(D25))
			{
				fgets(d25,200,D25);
				puts(d25);
			}
	fclose(D25);
}
void Day26(void)
{
	FILE * D26;
	char d26[200];
	D26=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day26.txt","r");
	if(D26==NULL)
	{
		printf("ERROR! reading file day26.txt");
	}
		
	while(!feof(D26))
			{
				fgets(d26,200,D26);
				puts(d26);
			}
	fclose(D26);
}
void Day27(void)
{
	FILE * D27;
	char d27[200];
	D27=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day27.txt","r");
	if(D27==NULL)
	{
		printf("ERROR! reading file day27.txt");
	}
		
	while(!feof(D27))
			{
				fgets(d27,200,D27);
				puts(d27);
			}
	fclose(D27);
}
void Day28(void)
{
	FILE * D28;
	char d28[200];
	D28=fopen("D:/Studies/Programing Fundamentals/Project/Project/ibrahim module//day28.txt","r");
	if(D28==NULL)
	{
		printf("ERROR! reading file day28.txt");
	}
		
	while(!feof(D28))
			{
				fgets(d28,200,D28);
				puts(d28);
			}
	fclose(D28);
}
void lose (void){
	int i,select,SELECT,choice;
	FILE * dairy;FILE * fruits;FILE * juice;FILE * cereal;FILE * meat;FILE * ff;FILE * sweet;FILE * veg;
	jmp:
	printf("\n\t\t\t\t\t\t\t\t\t1. Meal Plans\t\t\t2. Workout Plans\t\t\t3. Calorie Counter\t\t\t4. Go to main menu\n");
	scanf("%d",&option);
	switch(option){
		case 1:
		while(mealplan!=0)
		{
		puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
		printf("\t\t\t\t\t\t\t\t\t\t    Select meal plan day: ");scanf("%d",&mealplan);
		choose=mealplan;
		switch(mealplan)
			{
			case 1:
			system("cls");
			lday1();
			break;
			case 2:
			system("cls");
			lday2();
			break;
			case 3:
			system("cls");
			lday3();
			break;
			case 4:
			system("cls");
			lday4();
			break;
			case 5:
			system("cls");
			lday5();	
			case 6:
			system("cls");
			lday6();
			break;
			case 7:
			system("cls");
			lday7();
			break;
			case 0:
			goto jmp;	
			}
		}
		break;
		case 2:
			while(workout!=0)
				{
				setjmp(buf);
				puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
				printf("\t\t\t\t\t\t\t\t\t\t    Select workout plan day: ");scanf("%d",&workout);
				choose=workout;
				switch(workout)
				{			
				case 1:
				work1();
				printf("Do you wanna start work out?(1.Yes/2.No))\n");
				scanf("%d",&yn);
				if(yn==1)
					{
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 2:
					work2();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 3:
					work3();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 4:
					work4();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 5:
					work5();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 6:
					work6();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 7:
					work7();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter(); 
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 0:
					goto jmp;
			    }
			   	}
			break;
		case 3:
	label_menu:
	system("cls");
	printf("\t\t\t       CALORIES MODULE\n\n");
	printf("\t1. Food Calorie chart\t\t\t2.Calorie counter\n\t\t\t\t(3. Back) ");scanf("%d",&select);
	if(select==1)
	{
		label_option:
		system("cls");
		printf("\t\t\t       CALORIES MODULE\n\n");
		printf("\n\n\t\t\t     SELECT AN OPTION\n\n");
		printf("\n\n1. Milk & Dairy products\t2. Fruits\t\t3. Fruit (juices)\n4. Cereal products\t\t5. Vegetables\t\t6. Meat products\n7. Fast Food\t\t\t8. Candy & Sweets\t\t");
		scanf("%d",&SELECT);
		system("cls");
		{	
			if(SELECT==1)
			{
				char cal[200];
				dairy = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//milk and dairy.txt","r");
				if(dairy==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(dairy))
				{
					fgets(cal,200,dairy);
					puts(cal);
				}
				fclose(dairy);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
	}
			else if(SELECT==2)
			{
				char cal[200];
				fruits = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruits.txt","r");
				if(fruits==NULL)
				{
					printf("ERROR ! Reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(fruits))
				{
					fgets(cal,200,fruits);
					puts(cal);
				}
				fclose(fruits);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==3)
			{
				char cal[200];
				juice = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruit (juices).txt","r");
				if(juice==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(juice))
				{
					fgets(cal,200,juice);
					puts(cal);
				}
				fclose(juice);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;			
					}
			}
			else if(SELECT==4)
			{
				char cal[200];
				cereal = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//cereal.txt","r");
				if(cereal==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(cereal))
				{
					fgets(cal,200,cereal);
					puts(cal);
				}
				fclose(cereal);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==5)
			{
				char cal[200];
				veg = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//vegetables.txt","r");
				if(veg==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(veg))
				{
					fgets(cal,200,veg);
					puts(cal);
				}
				fclose(veg);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
					
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}			
			}
			else if(SELECT==6)
			{
				char cal[200];
				meat = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//meat.txt","r");
				if(meat==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(meat))
				{
					fgets(cal,200,meat);
					puts(cal);
				}
				fclose(meat);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==7)
			{
				char cal[200];
				ff = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fast food.txt","r");
				if(ff==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(ff))
				{
					fgets(cal,200,ff);
					puts(cal);
				}
				fclose(ff);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					
					}
			}
			else if(SELECT==8)
			{
				char cal[200];
				sweet = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//sweets.txt","r");
				if(sweet==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(sweet))
				{
					fgets(cal,200,sweet);
					puts(cal);
				}
				fclose(sweet);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}	
			}
			else if(SELECT>8)
			{
				
				printf("ERROR ! wrong input..\n\n");
				goto label_option;
			}
		}
	}
	else if(select==2)
	{
		label_calorie:
		system("cls");
		printf("\n\n\t\t****************|CALORIE COUNTER|*****************");	
		printf("\n\n");
		printf("Enter the food product name: ");fflush(stdin);gets(cc.name);
		printf("Amount of Fat (grams): ");scanf("%f",&cc.fats);
		printf("Amount of Protien (grams): ");scanf("%f",&cc.protiens);
		printf("Amount of Carbohydrates (grams): ");scanf("%f",&cc.carbohydrates);
	
			cc.calories = (cc.fats*9) + (cc.protiens*4) + (cc.carbohydrates*4);
		printf("\nTotal calories in %s are %.1f...",cc.name,cc.calories);
		int choice;
		printf("\n\nDo you want to make another calculation ? \nPress 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
			if(choice==1)
			{
				goto label_calorie;
			}
			else
			{
				goto label_menu;
			}
	}
	else if(select==0||select>3)
	{
		printf("ERROR ! wrong input");
		goto label_menu;
	}
	else if (select==3){
		goto jmp;
	}	
		case 4:
		longjmp(puf, 1);
		break;	
		}
}
void balanced (void){
	int i,select,SELECT,choice;
	FILE * dairy;FILE * fruits;FILE * juice;FILE * cereal;FILE * meat;FILE * ff;FILE * sweet;FILE * veg;
	jmp:
	printf("\n\t\t\t\t\t\t\t\t\t1. Meal Plans\t\t\t2. Workout Plans\t\t\t3. Calorie Counter\t\t\t4. Go to main menu\n");
	scanf("%d",&option);
	switch(option){
		case 1:
		while(mealplan!=0)
		{
		puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
		printf("\t\t\t\t\t\t\t\t\t\t    Select meal plan day: ");scanf("%d",&mealplan);
		choose=mealplan;
		switch(mealplan)
			{
			case 1:
			system("cls");
			daY1();
			break;
			case 2:
			system("cls");
			daY2();
			break;
			case 3:
			system("cls");
			daY3();
			break;
			case 4:
			system("cls");
			daY4();
			break;
			case 5:
			system("cls");
			daY5();	
			case 6:
			system("cls");
			daY6();
			break;
			case 7:
			system("cls");
			daY7();
			break;
			case 0:
			goto jmp;	
			}
		}
		break;
		case 2:
			while(workout!=0)
				{
				setjmp(buf);
				puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
				printf("\t\t\t\t\t\t\t\t\t\t    Select workout plan day: ");scanf("%d",&workout);system("cls");
				choose=workout;
				switch(workout)
				{			
				case 1:
				work1();
				printf("Do you wanna start work out?(1.Yes/2.No))\n");
				scanf("%d",&yn);
				if(yn==1)
					{
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 2:
					work2();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 3:
					work3();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 4:
					work4();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 5:
					work5();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 6:
					work6();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 7:
					work7();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter(); 
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 0:
					goto jmp;
			    }
			   	}
			break;
		case 3:
				label_menu:
	system("cls");
	printf("\t\t\t       CALORIES MODULE\n\n");
	printf("\t1. Food Calorie chart\t\t\t2.Calorie counter\n\t\t\t\t(3. Back) ");scanf("%d",&select);
	if(select==1)
	{
		label_option:
		system("cls");
		printf("\t\t\t       CALORIES MODULE\n\n");
		printf("\n\n\t\t\t     SELECT AN OPTION\n\n");
		printf("\n\n1. Milk & Dairy products\t2. Fruits\t\t3. Fruit (juices)\n4. Cereal products\t\t5. Vegetables\t\t6. Meat products\n7. Fast Food\t\t\t8. Candy & Sweets\t\t");
		scanf("%d",&SELECT);
		system("cls");
		{	
			if(SELECT==1)
			{
				char cal[200];
				dairy = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//milk and dairy.txt","r");
				if(dairy==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(dairy))
				{
					fgets(cal,200,dairy);
					puts(cal);
				}
				fclose(dairy);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
	}
			else if(SELECT==2)
			{
				char cal[200];
				fruits = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruits.txt","r");
				if(fruits==NULL)
				{
					printf("ERROR ! Reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(fruits))
				{
					fgets(cal,200,fruits);
					puts(cal);
				}
				fclose(fruits);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==3)
			{
				char cal[200];
				juice = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruit (juices).txt","r");
				if(juice==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(juice))
				{
					fgets(cal,200,juice);
					puts(cal);
				}
				fclose(juice);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;			
					}
			}
			else if(SELECT==4)
			{
				char cal[200];
				cereal = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//cereal.txt","r");
				if(cereal==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(cereal))
				{
					fgets(cal,200,cereal);
					puts(cal);
				}
				fclose(cereal);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==5)
			{
				char cal[200];
				veg = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//vegetables.txt","r");
				if(veg==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(veg))
				{
					fgets(cal,200,veg);
					puts(cal);
				}
				fclose(veg);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
					
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}			
			}
			else if(SELECT==6)
			{
				char cal[200];
				meat = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//meat.txt","r");
				if(meat==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(meat))
				{
					fgets(cal,200,meat);
					puts(cal);
				}
				fclose(meat);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==7)
			{
				char cal[200];
				ff = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fast food.txt","r");
				if(ff==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(ff))
				{
					fgets(cal,200,ff);
					puts(cal);
				}
				fclose(ff);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					
					}
			}
			else if(SELECT==8)
			{
				char cal[200];
				sweet = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//sweets.txt","r");
				if(sweet==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(sweet))
				{
					fgets(cal,200,sweet);
					puts(cal);
				}
				fclose(sweet);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}	
			}
			else if(SELECT>8)
			{
				
				printf("ERROR ! wrong input..\n\n");
				goto label_option;
			}
		}
	}
	else if(select==2)
	{
		label_calorie:
		system("cls");
		printf("\n\n\t\t****************|CALORIE COUNTER|*****************");	
		printf("\n\n");
		printf("Enter the food product name: ");fflush(stdin);gets(cc.name);
		printf("Amount of Fat (grams): ");scanf("%f",&cc.fats);
		printf("Amount of Protien (grams): ");scanf("%f",&cc.protiens);
		printf("Amount of Carbohydrates (grams): ");scanf("%f",&cc.carbohydrates);
	
			cc.calories = (cc.fats*9) + (cc.protiens*4) + (cc.carbohydrates*4);
		printf("\nTotal calories in %s are %.1f...",cc.name,cc.calories);
		int choice;
		printf("\n\nDo you want to make another calculation ? \nPress 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
			if(choice==1)
			{
				goto label_calorie;
			}
			else
			{
				goto label_menu;
			}
	}
	else if(select==0||select>3)
	{
		printf("ERROR ! wrong input");
		goto label_menu;
	}
	else if (select==3){
		goto jmp;
	}
		case 4:
		longjmp(puf, 1);
		break;	
		}
}
void gain (void){
	int i;
	int select,SELECT,choice;
	FILE * dairy;FILE * fruits;FILE * juice;FILE * cereal;FILE * meat;FILE * ff;FILE * sweet;FILE * veg;
	jmp:
	printf("\n\t\t\t\t\t\t\t\t\t1. Meal Plans\t\t\t2. Workout Plans\t\t\t3. Calorie Counter\t\t\t4. Go to main menu\n");
	scanf("%d",&option);
	switch(option){
		case 1:
		for(i=1; mealplan!=0 ; i++)
				{
					printf("\n");
					puts("\t\t\t***Enter 0 to exit***");
					printf("\t\t\tSelect meal plan day: ");scanf("%d",&mealplan);
					if(mealplan > 28)
					{
						printf("Error");
					}
					switch(mealplan)
					{
						case 1:
						system("cls");	
						Day1();
						break;
						case 2:
						system("cls");	
						Day2();
						break;
						case 3:
						system("cls");	
						Day3();
						break;
						case 4:
						system("cls");	
						Day4();
						break;
						case 5:
						system("cls");	
						Day5();
						break;
						case 6:
						system("cls");	
						Day6();
						break;
						case 7:
						system("cls");	
						Day7();
						break;
						case 8:
						system("cls");	
						Day8();
						break;
						case 9:
						system("cls");	
						Day9();
						break;
						case 10:
						system("cls");	
						Day10();
						break;
						case 11:
						system("cls");	
						Day11();
						break;
						case 12:
						system("cls");	
						Day12();
						break;
						case 13:
						system("cls");	
						Day13();
						break;
						case 14:
						system("cls");	
						Day14();
						break;
						case 15:
						system("cls");	
						Day15();
						break;
						case 16:
						system("cls");	
						Day16();
						break;
						case 17:
						system("cls");
						Day17();
						break;
						case 18:
						system("cls");	
						Day18();
						break;
						case 19:
						system("cls");	
						Day19();
						break;
						case 20:
						system("cls");	
						Day20();
						break;
						case 21:
						system("cls");	
						Day21();
						break;
						case 22:
						system("cls");	
						Day22();
						break;
						case 23:
						system("cls");	
						Day23();
						break;
						case 24:
						system("cls");	
						Day24();
						break;
						case 25:
						system("cls");	
						Day25();
						break;
						case 26:
						system("cls");		
						Day26();
						break;
						case 27:
						system("cls");	
						Day27();
						break;
						case 28:
						system("cls");	
						Day28();
						printf("\n\tCongratulations ! you have completed your 28 days challenge..");
						case 0:
						goto jmp;																					
					}
				}
		break;
		case 2:
			while(workout!=0)
				{
				setjmp(buf);
				puts("\t\t\t\t\t\t\t\t\t\t    ***Enter 0 to exit***");
				printf("\t\t\t\t\t\t\t\t\t\t    Select workout plan day: ");scanf("%d",&workout);system("cls");
				choose=workout;
				switch(workout)
				{			
				case 1:
				work1();
				printf("Do you wanna start work out?(1.Yes/2.No))\n");
				scanf("%d",&yn);
				if(yn==1)
					{
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 2:
					work2();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 3:
					work3();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 4:
					work4();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 5:
					work5();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 6:
					work6();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter();
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 7:
					work7();
					printf("Do you wanna start work out?(1.Yes/2.No))\n");
					scanf("%d",&yn);
					if(yn==1){
					while(1){
					counter(); 
                    }
					}
					else if(yn==2){
					break;
					}
					break;
					case 0:
					goto jmp;
			    }
			   	}
			break;
		case 3:
				label_menu:
	system("cls");
	printf("\t\t\t       CALORIES MODULE\n\n");
	printf("\t1. Food Calorie chart\t\t\t2.Calorie counter\n\t\t\t\t(3. Back) ");scanf("%d",&select);
	if(select==1)
	{
		label_option:
		system("cls");
		printf("\t\t\t       CALORIES MODULE\n\n");
		printf("\n\n\t\t\t     SELECT AN OPTION\n\n");
		printf("\n\n1. Milk & Dairy products\t2. Fruits\t\t3. Fruit (juices)\n4. Cereal products\t\t5. Vegetables\t\t6. Meat products\n7. Fast Food\t\t\t8. Candy & Sweets\t\t");
		scanf("%d",&SELECT);
		system("cls");
		{	
			if(SELECT==1)
			{
				char cal[200];
				dairy = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//milk and dairy.txt","r");
				if(dairy==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(dairy))
				{
					fgets(cal,200,dairy);
					puts(cal);
				}
				fclose(dairy);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
	}
			else if(SELECT==2)
			{
				char cal[200];
				fruits = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruits.txt","r");
				if(fruits==NULL)
				{
					printf("ERROR ! Reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(fruits))
				{
					fgets(cal,200,fruits);
					puts(cal);
				}
				fclose(fruits);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==3)
			{
				char cal[200];
				juice = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fruit (juices).txt","r");
				if(juice==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(juice))
				{
					fgets(cal,200,juice);
					puts(cal);
				}
				fclose(juice);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;			
					}
			}
			else if(SELECT==4)
			{
				char cal[200];
				cereal = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//cereal.txt","r");
				if(cereal==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(cereal))
				{
					fgets(cal,200,cereal);
					puts(cal);
				}
				fclose(cereal);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==5)
			{
				char cal[200];
				veg = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//vegetables.txt","r");
				if(veg==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(veg))
				{
					fgets(cal,200,veg);
					puts(cal);
				}
				fclose(veg);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
					
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}			
			}
			else if(SELECT==6)
			{
				char cal[200];
				meat = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//meat.txt","r");
				if(meat==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(meat))
				{
					fgets(cal,200,meat);
					puts(cal);
				}
				fclose(meat);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}
			}
			else if(SELECT==7)
			{
				char cal[200];
				ff = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//fast food.txt","r");
				if(ff==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(ff))
				{
					fgets(cal,200,ff);
					puts(cal);
				}
				fclose(ff);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					
					}
			}
			else if(SELECT==8)
			{
				char cal[200];
				sweet = fopen("D:/Studies/Programing Fundamentals/Project/Project/calorie module//sweets.txt","r");
				if(sweet==NULL)
				{
					printf("ERROR ! reading file..");
				}
				puts("\n");
				puts("*******************************|CALOIRE CHART|**********************************\n");
				while(!feof(sweet))
				{
					fgets(cal,200,sweet);
					puts(cal);
				}
				fclose(sweet);
				printf("Press 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
		
					if(choice==1)
					{
						goto label_option;
					}
					else
					{
						goto label_menu;
					}	
			}
			else if(SELECT>8)
			{
				
				printf("ERROR ! wrong input..\n\n");
				goto label_option;
			}
		}
	}
	else if(select==2)
	{
		label_calorie:
		system("cls");
		printf("\n\n\t\t****************|CALORIE COUNTER|*****************");	
		printf("\n\n");
		printf("Enter the food product name: ");fflush(stdin);gets(cc.name);
		printf("Amount of Fat (grams): ");scanf("%f",&cc.fats);
		printf("Amount of Protien (grams): ");scanf("%f",&cc.protiens);
		printf("Amount of Carbohydrates (grams): ");scanf("%f",&cc.carbohydrates);
	
			cc.calories = (cc.fats*9) + (cc.protiens*4) + (cc.carbohydrates*4);
		printf("\nTotal calories in %s are %.1f...",cc.name,cc.calories);
		int choice;
		printf("\n\nDo you want to make another calculation ? \nPress 1 to continue\tPress 2 to exit\n");scanf("%d",&choice);
			if(choice==1)
			{
				goto label_calorie;
			}
			else
			{
				goto label_menu;
			}
	}
	else if(select==0||select>3)
	{
		printf("ERROR ! wrong input");
		goto label_menu;
	}
	else if (select==3){
		goto jmp;
	}
		case 4:
		longjmp(puf, 1);
		break;	
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
void delay(ms)  //delay function
{
    clock_t timeDelay = ms + clock();    //Step up the difference from clock delay
    while (timeDelay > clock());         //stop when the clock is higher than time delay
}
int counter(){
    while(!kbhit() && flag ==0)
		{							     //keep looping while the user didn't hit any key and flag is 0
            if(minute > 59){            //after minute is greater than 59, reset minute and increase 1 hour
                minute = 0;++hour;
            }
                if(second > 59)
				{         //after second is greater than 59, reset second and increase 1 minute
                    second = 0;
					++minute;
                }
                     printData();
					 if(choose==8){
					 work1();}
					 else if (choose==9){
					 work2();}
					 else if (choose==10){
					 work3();}
					 else if (choose==11){
					 work4();}
					 else if(choose==12){
					 work5();}
					 else if(choose==13){
					 work6();}
					 else if(choose==14){
					 work7();}           //print out the new data, delay for 1000 millisecond and increase 1 second.
                    delay(1000);second += 1;
        }
        selection();    //after the user hit the keyboard, call the menu selection
}

int printData(){   //print data to screen
system("cls");      //clear the screen
printf("1.Start  2.Stop  3.Reset  4. End\n");       //menu for user
printf("***********************************\n");
printf("            %d:%d:%d\n",hour,minute,second);      //output the data
printf("***********************************\n");
if(choose==1){
			work1();}
		else if (choose==2){
			work2();}
		else if (choose==3){
		    work3();}
		else if (choose==4){
			work4();}
		else if(choose==5){
			work5();}
		else if(choose==6){
			work6();}
		else if(choose==7){
			work7();}
}

int selection(){      // menu selection
    switch(getch()){    //collect input from user
    case 49: flag =0; break;        //press 1 set flag to 0 means start
    case 50: flag =1; break;        //press 2 set flag to 1 means stop
    case 51:
        hour = minute = second = 0;flag = 1; //press 3 reset everything, set flag to 1 means stop
        printData();             //print the new data after reset
        break;
    case 52: 
			longjmp(buf, 1); 
			break;  
			
			    //press 4, exit the program
    }
}
