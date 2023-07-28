#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
	int i,select,SELECT,choice;
	
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
				FILE * dairy;
				char cal[200];
				dairy = fopen("milk and dairy.txt","r");
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
				FILE * fruits;
				char cal[200];
				fruits = fopen("fruits.txt","r");
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
				FILE * juice;
				char cal[200];
				juice = fopen("fruit (juices).txt","r");
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
				FILE * cereal;
				char cal[200];
				cereal = fopen("cereal.txt","r");
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
				FILE * veg;
				char cal[200];
				veg = fopen("vegetables.txt","r");
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
				FILE * meat;
				char cal[200];
				meat = fopen("meat.txt","r");
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
				FILE * ff;
				char cal[200];
				ff = fopen("fast food.txt","r");
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
				FILE * sweet;
				char cal[200];
				sweet = fopen("sweets.txt","r");
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
}
