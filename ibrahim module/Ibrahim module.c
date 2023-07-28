#include<stdio.h>

void Day1(void);void Day2(void);void Day3(void);void Day4(void);void Day5(void);void Day6(void);void Day7(void);void Day8(void);
void Day9(void);void Day10(void);void Day11(void);void Day12(void);void Day13(void);void Day14(void);void Day15(void);void Day16(void);
void Day17(void);void Day18(void);void Day19();void Day20();void Day21();void Day22();void Day23();void Day24();void Day25(void);
void Day26(void);void Day27(void);void Day28(void);

int main(void)
{
	int i,choice,mealplan;
	char array[100];
	
	FILE * ibrahim;

	FILE * D1; FILE * D2; FILE * D3; FILE * D4; FILE * D5; FILE * D6; FILE * D7; FILE * D8; FILE * D9; FILE * D10;
	FILE * D11; FILE * D12; FILE * D13; FILE * D14; FILE * D15; FILE * D16; FILE * D17; FILE * D18; FILE * D19; FILE * D20;
	FILE * D21; FILE * D22; FILE * D23; FILE * D24; FILE * D25; FILE * D26; FILE * D27; FILE * D28;

	printf("Enter User ID: ");scanf("%d",&choice);
	printf("\n");	
	switch(choice)
	{
		case 190312:
			
			ibrahim = fopen("ibrahim.txt","r");
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
			
			break;
			
	}
			fclose(ibrahim);
			
			printf("\n\nMy BMI is in normal range, balanced diet program is recommended for me but i choose the weight gain program because i desire to build muscle and strenght\n");

			
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
						Day1();
						break;
						
					case 2:
						Day2();
						break;
						
					case 3:
						Day3();
						break;
					
					case 4:
						Day4();
						break;
						
					case 5:
						Day5();
						break;
						
					case 6:
						Day6();
						break;
						
					case 7:
						Day7();
						break;
						
					case 8:
						Day8();
						break;
						
					case 9:
						Day9();
						break;
						
					case 10:
						Day10();
						break;
						
					case 11:
						Day11();
						break;
					
					case 12:
						Day12();
						break;
						
					case 13:
						Day13();
						break;
						
					case 14:
						Day14();
						break;
						
					case 15:
						Day15();
						break;
						
					case 16:
						Day16();
						break;
						
					case 17:
						Day17();
						break;
						
					case 18:
						Day18();
						break;
						
					case 19:
						Day19();
						break;
						
					case 20:
						Day20();
						break;
						
					case 21:
						Day21();
						break;
						
					case 22:
						Day22();
						break;
						
					case 23:	
						Day23();
						break;
						
					case 24:
						Day24();
						break;
						
					case 25:
						Day25();
						break;
						
					case 26:			
						Day26();
						break;
						
					case 27:
						Day27();
						break;
						
					case 28:
						Day28();
						printf("\n\tCongratulations ! you have completed your 28 days challenge..");
						return 0;																					
				}
			}
}
void Day1(void)
{
		FILE * D1;
	char d1[200];
	D1=fopen("day1.txt","r");
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
	D2=fopen("day2.txt","r");
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
	D3=fopen("day3.txt","r");
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
	D4=fopen("day4.txt","r");
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
	D5=fopen("day5.txt","r");
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
	D6=fopen("day6.txt","r");
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
	D7=fopen("day7.txt","r");
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
	D8=fopen("day8.txt","r");
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
	D9=fopen("day9.txt","r");
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
	D10=fopen("day10.txt","r");
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
	D11=fopen("day11.txt","r");
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
	D12=fopen("day12.txt","r");
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
	D13=fopen("day13.txt","r");
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
	D14=fopen("day14.txt","r");
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
	D15=fopen("day15.txt","r");
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
	D16=fopen("day16.txt","r");
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
	D17=fopen("day17.txt","r");
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
	D18=fopen("day18.txt","r");
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
	D19=fopen("day19.txt","r");
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
	D20=fopen("day20.txt","r");
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
	D21=fopen("day21.txt","r");
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
	D22=fopen("day22.txt","r");
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
	D23=fopen("day23.txt","r");
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
	D24=fopen("day24.txt","r");
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
	D25=fopen("day25.txt","r");
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
	D26=fopen("day26.txt","r");
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
	D27=fopen("day27.txt","r");
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
	D28=fopen("day28.txt","r");
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
