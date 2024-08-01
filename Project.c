/*
Programmer: Muhammad Rahim Majid
Description: Quiz game project
Start of main*/
#include<stdio.h>
#include <stdlib.h>


int main()
{
	//system("Color E4");
	printf("            PROGRAM QUIZ GAME\n");
    printf("  ________________________________________\n");

    printf("\n                WELCOME ");
    printf("\n                  TO ");
    printf("\n               THE GAME ");
	printf("\n  ________________________________________");
    printf("\n  ________________________________________");
  
    printf("\n  ________________________________________");
    printf("\n  ________________________________________");
	
	printf("\n\n > Enter your answer as 'A'or'B'or'C'or'D'\n");
	printf("\n\n > Press 's' or 'S' to start the game\n\n");
	
	char choice;
	
	scanf("%c",&choice);
	
	if(choice == 's' || choice == 'S' )
	{
		char c1;
		int n,n1,n2,n3,n4,n5,n6,n7,n8,n9;
		int total;
		
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'C' || c1 == 'c')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is C.23232\n");
			printf("+0 marks");
			n=0;
		}
		
		
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'C' || c1 == 'c')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n1=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is C.Switzerland\n");
			printf("+0 marks");
			n1=0;
		}
		
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'B' || c1 == 'b')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n2=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is B.Hyena\n");
			printf("+0 marks");
			n2=0;
		}
		
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'B' || c1 == 'b')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n3=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is B.Lucas Podolski\n");
			printf("+0 marks");
			n3=0;
		}
		
		printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'B' || c1 == 'b')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n4=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is B.Mt. Kanchanjungha\n");
			printf("+0 marks");
			n4=0;
		}
		
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'D' || c1 == 'd')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n4=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is D.An Army\n");
			printf("+0 marks");
			n4=0;
		}
		
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'C' || c1 == 'c')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n5=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is C.Cricket\n");
			printf("+0 marks");
			n5=0;
		}
		
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'A' || c1 == 'a')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n6=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is A.Seismology\n");
			printf("+0 marks");
			n6=0;
		}
		
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'C' || c1 == 'c')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n7=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is C.8\n");
			printf("+0 marks");
			n7=0;
		}
		
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'A' || c1 == 'a')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n8=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is A.Faraday\n");
			printf("+0 marks");
			n8=0;
		}
		
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		printf("\n\nEnter your answer: ");
		scanf("%s",&c1);
		
		if(c1 == 'B' || c1 == 'b')
		{
			printf("Correct answer!!!!!! Grapeeeeeeeee\n");
			printf("+5 marks");
			n9=5;	
		}
		else
		{
			printf("Wrong answer!!! Correct answer is B.Watt\n");
			printf("+0 marks");
			n9=0;
		}
		
		total = n+n1+n2+n3+n4+n5+n6+n7+n8+n9;
		
		printf("\nYour total marks are %d out of 50",total);
		
		if(total==0 || total==5 || total==10 )
		{
			printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME YOUR BRAIN CELLS ARE DEAD, BETTER LUCK NEXT TIME");
		}
		
		else if(total==15 || total==20 || total==25)
		{
			printf("\n\nBETTER LUCK NEXT TIME, GG");
		}
		else if(total==30 || total==35 || total==40 || total==45)
		{
			printf("\n\nGOOD EFFORT, BETTER LUCK NEXT TIME, GG");
		}
		else if(total==50)
		{
			printf("\n\nYOU ARE A GENIUS");
		}
		
	}
	else
	{
		printf("Invalid Command\nRun The Program again");
	}

	
	return 0;
	//End of main
}	