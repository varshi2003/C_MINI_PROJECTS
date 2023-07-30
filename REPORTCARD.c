#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct Marks
{
	int English;
	int Discrete_Maths;
	int Computational_Physics;
	int C_Programming;
	int Maths_for_Computing;
};

struct students
{
	int  Rollnumber;
	char name[200];
	char Course[200];
	int Semester;
	struct Marks Mark;
}S1[100];
int count =6;
void student_data();
void get_StudentMarksdetails();
void print_Marksheetdetails();

int main()
{
	int choice;
	int step;
	student_data();
	do
	{
	system("CLS");	
	printf ("\n                                        Students Score Card Managment System                                  ");
	printf ("\n--------------------------------------------------------------------------------------------------------------");
	printf ("\n                                   1. Add Students Details                                                    ");
	printf ("\n                                   2. Print Mark Sheet                                                        ");
	printf ("\n                                   3. Exit                                                                    ");
	printf ("\n--------------------------------------------------------------------------------------------------------------");
	printf ("\n                        Enter the Choice   ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1: 
		      
		      get_StudentMarksdetails();
		      break;
		
		case 2:
			   print_Marksheetdetails();
			    break;
			
			case 3:
				exit(0);
				break;
	};

printf ("\n (Do you want to Continue 0 - N0 & 1 - Yes) - ");
scanf("%d",&step);
}
while(step==1);

	
	
}

void student_data()
{
	
	  S1[0].Rollnumber=111;
	 strcpy(S1[0].name ,"Damon Salvatore");
	 strcpy(S1[0].Course , "B.Tech");
	 S1[0].Semester = 1;
	 S1[0].Mark.English = 80;
	 S1[0].Mark.Maths_for_Computing=67;
	 S1[0].Mark.C_Programming=77;
	 S1[0].Mark.Computational_Physics =43;
	 S1[0].Mark.Discrete_Maths=99;
	 S1[1].Rollnumber=222;
	 strcpy(S1[1].name ,"Elena Gilbert");
	 strcpy(S1[1].Course , "B.Tech");
	 S1[1].Semester = 1;
	 S1[1].Mark.English = 63;
	 S1[1].Mark.Maths_for_Computing=70;
	 S1[1].Mark.C_Programming=88;
	 S1[1].Mark.Computational_Physics =42;
	 S1[1].Mark.Discrete_Maths=90;
	 S1[2].Rollnumber=333;
	 strcpy(S1[2].name ,"Klaus Michaelson");
	 strcpy(S1[2].Course , "B.Tech");
	 S1[2].Semester = 1;
	 S1[2].Mark.English = 50;
	 S1[2].Mark.Maths_for_Computing=97;
	 S1[2].Mark.C_Programming=42;
	 S1[2].Mark.Computational_Physics =68;
	 S1[2].Mark.Discrete_Maths=93;
	 S1[3].Rollnumber=444;
	 strcpy(S1[3].name ,"Katherine Petrova");
	 strcpy(S1[3].Course , "B.Tech");
	 S1[3].Semester = 1;
	 S1[3].Mark.English = 72;
	 S1[3].Mark.Maths_for_Computing=84;
	 S1[3].Mark.C_Programming=77;
	 S1[3].Mark.Computational_Physics =83;
	 S1[3].Mark.Discrete_Maths=67;
	  S1[4].Rollnumber=555;
	 strcpy(S1[4].name ,"Stefan Salvatore");
	 strcpy(S1[4].Course , "B.Tech");
	 S1[4].Semester = 1;
	 S1[4].Mark.English = 79;
	 S1[4].Mark.Maths_for_Computing=67;
	 S1[4].Mark.C_Programming=89;
	 S1[4].Mark.Computational_Physics =67;
	 S1[4].Mark.Discrete_Maths=40;
	  S1[5].Rollnumber=666;
	 strcpy(S1[5].name ,"Bonnie Bennett");
	 strcpy(S1[5].Course , "B.Tech");
	 S1[5].Semester = 1;
	 S1[5].Mark.English = 71;
	 S1[5].Mark.Maths_for_Computing=30;
	 S1[5].Mark.C_Programming=88;
	 S1[5].Mark.Computational_Physics =65;
	 S1[5].Mark.Discrete_Maths=54;
	  S1[6].Rollnumber=777;
	 strcpy(S1[6].name ,"Caroline Forbes");
	 strcpy(S1[6].Course , "B.Tech");
	 S1[6].Semester = 1;
	 S1[6].Mark.English = 90;
	 S1[6].Mark.Maths_for_Computing=42;
	 S1[6].Mark.C_Programming=28;
	 S1[6].Mark.Computational_Physics =60;
	 S1[6].Mark.Discrete_Maths=90;
	 
	  
	
}

void get_StudentMarksdetails()
{   count = count +1;
   
    
	printf ("\n                                  Enter the Student Details                                 ");
	printf ("\n---------------------------------------------------------------------------------------------");
	printf ("\n Enter Roll number :");
	scanf ("%d",&S1[count].Rollnumber);
	printf ("\n Enter Name of the Student :");
	scanf ("%s",S1[count].name);
	printf ("\n Enter Course Name :");
	scanf ("%s",S1[count].Course);
	printf ("\n Enter Semester Number :");
    scanf ("%d",&S1[count].Semester);
	printf ("\n                                   Enter the Marks                                        ");
	printf ("\n----------------------------------------------------------------------------------------------");
	do
	{
		printf ("\n Enter English Marks :");
	   scanf ("%d", &S1[count].Mark.English);
	} while (S1[count].Mark.English <= 0);
	
	do
	{
		printf ("\n Enter Discrete Mathematics Marks :");
	scanf ("%d", &S1[count].Mark.Discrete_Maths);
	} while (S1[count].Mark.Discrete_Maths<=0);
	do
	{
		printf ("\n Enter Computational_Physics Marks :");
	scanf ("%d", &S1[count].Mark.Computational_Physics);
	}while (S1[count].Mark.Computational_Physics<=0);
	do
	{
		printf ("\n Enter Problem Solving in C Program Marks :");
	scanf ("%d", &S1[count].Mark.C_Programming);
	}while(S1[count].Mark.C_Programming<=0);
    do
    {
    	printf ("\n Enter Maths for Computing Marks :");
	   scanf ("%d", &S1[count].Mark.Maths_for_Computing);

	} while(S1[count].Mark.Maths_for_Computing<=0);
	
	
}
void print_Marksheetdetails()
{
   
   int Rollnumber;
   int flag=0;
   char Result[10]
   ;
   printf ("Enter student's roll number   :");
   scanf ("%d",&Rollnumber);
   for(int i=0;i<=count;i++)
   {
   	
   	  if(S1[i].Rollnumber == Rollnumber)
   	  {
   	  	
	        flag=1;
	        system("CLS");
	         printf("\n***********************************************************************************************************************");
	         printf ("\n\n");
	         printf ("\n                                            BANNARI AMMAN INSTITUTE OF TECHNOLOGY                                   ")	;
		   printf ("\n                                                 SATHYAMANGALAM,ERODE                                       ");
		   printf ("\n\n")	;
		   printf ("\n Student Roll Number :%d                                              Name of the Student : %s",S1[i].Rollnumber,S1[i].name);
		   printf ("\n Course Name         :%s                                              Semester : %d",S1[i].Course,S1[i].Semester);
		   printf ("\n\n");  
		   printf("\n***********************************************************************************************************************");
		   printf("\n  S.No                                    Subject                                   Mark                     Result");
		   printf("\n***********************************************************************************************************************");
		   if (S1[i].Mark.English > 45)
		       strcpy(Result,"Pass");
		    else
		       strcpy(Result,"Fail");
		       
		    printf ("\n   1                                   English                                        %d                       %s",S1[i].Mark.English,Result) ;  
		    if (S1[i].Mark.C_Programming> 45)
		       strcpy(Result,"Pass");
		    else
		       strcpy(Result,"Fail");
		       
		    printf ("\n   2                                   C Programming                                  %d                       %s",S1[i].Mark.C_Programming,Result) ; 
		    if (S1[i].Mark.Discrete_Maths> 45)
		       strcpy(Result,"Pass");
		    else
		       strcpy(Result,"Fail");
		       
		    printf ("\n   3                                   Discrete Mathematics                           %d                       %s",S1[i].Mark.Discrete_Maths,Result) ;    
		    if (S1[i].Mark.Computational_Physics> 45)
		       strcpy(Result,"Pass");
		    else
		       strcpy(Result,"Fail");
		       
		    printf ("\n   4                                   Computational Physics                          %d                       %s",S1[i].Mark.Computational_Physics,Result) ; 
		   if (S1[i].Mark.Maths_for_Computing> 45)
		       strcpy(Result,"Pass");
		    else
		       strcpy(Result,"Fail");
		       
		    printf ("\n   5                                   Mathematics for Computing                      %d                       %s",S1[i].Mark.Maths_for_Computing,Result) ; 
		   
		    printf("\n***********************************************************************************************************************");
		    int total = S1[i].Mark.Computational_Physics + S1[i].Mark.C_Programming+S1[i].Mark.Discrete_Maths+S1[i].Mark.English+S1[i].Mark.Maths_for_Computing;
		    printf("\n                                                                                Total %d",total);
		    printf("\n***********************************************************************************************************************");
		    printf("\n       Authorized Signature ");
		    printf("\n\n      BANNARI AMMAN INSTITUTE OF TECHNOLOGY");
		    
		    
		    
		    
		   
		   break;
	} 
        else
{
	flag=0;
}
}

if (flag == 0)
{
	printf ("\n\n            This student roll number does not exist.......... Try again..");
}

}
