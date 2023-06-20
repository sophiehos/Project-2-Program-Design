//Sophia Hostetler
//U27264415
//This program translates a letter in a phone number to the corresponding digit


#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int len=0;

//prompt user to input number

	printf("Input: ");
	ch=getchar();

//prints output line
	
	printf("Output: ");

//while loop that stops at new line character

	while(ch != '\n')	

//switch statement printing the number coordinating to the correct letter and moving along until reaches end

	switch(ch)
	{
		case 'A':
			printf("2");
			len++;
	                ch=getchar();
			break;
		 case 'B':
                        printf("2");
			len++;
                	ch=getchar();
			break;
		 case 'C':
                        printf("2");
		 	len++;
                	ch=getchar();
			break;
		 case 'D':
                        printf("3");
		 	len++;
                	ch=getchar();
			break;
		case 'E':
                        printf("3");
			len++;
                	ch=getchar();
			break;
		case 'F':
                        printf("3");
		 	len++;
                	ch=getchar();
			break;
		case 'G':
                        printf("4");
		 	len++;
                	ch=getchar();
			break;
		  case 'H':
                        printf("4");
		 	len++;
                	ch=getchar();
			break;
		  case 'I':
                        printf("4");
		 	len++;
                	ch=getchar();
			break;
		  case 'J':
                        printf("5");
		 	len++;
                	ch=getchar();
			break;
		case 'K':
                        printf("5");
		 	len++;
                	ch=getchar();
			break;
		case 'L':
                        printf("5");
		 	len++;
                	ch=getchar();
			break;
		case 'M':
                        printf("6");
		 	len++;
                	ch=getchar();
			break;
		case 'N':
                        printf("6");
		 	len++;
                	ch=getchar();
			break;
		case 'O':
                        printf("6");
		 	len++;
                	ch=getchar();
			break;
		case 'P':
                        printf("7");
		 	len++;
                	ch=getchar();
			break;
		case 'Q':
                        printf("7");
		 	len++;
                	ch=getchar();
			break;
		case 'R':
                        printf("7");
		 	len++;
                	ch=getchar();
			break;
		case 'S':
                        printf("7");
		 	len++;
                	ch=getchar();
			break;
		case 'T':
                        printf("8");
		 	len++;
                	ch=getchar();
			break;
		case 'U':
                        printf("8");
		 	len++;
                	ch=getchar();
			break;
		case 'V':
                        printf("8");
		 	len++;
                	ch=getchar();
			break;
		case 'W':
                        printf("9");
		 	len++;
                	ch=getchar();
			break;
		case 'X':
                        printf("9");
		 	len++;
                	ch=getchar();
			break;
		case 'Y':
                        printf("9");
		 	len++;
                	ch=getchar();
			break;
		case 'Z':
                        printf("9");
		 	len++;
                	ch=getchar();
			break;

//default statement if a number is listed instead of a letter

		default:
			printf("%c",ch);
			len++;
                	ch=getchar();
			break;
		}

return 0;
}
