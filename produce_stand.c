//Sophia Hostetler
//U27264415
//This program will allow the user to select an item, input the weight or number of items, and calculate the amount due and the change due


#include<stdio.h>

int main(void)
{
	int selection;
	int num_items;
	double weight;
	double amount;
	double total=0;
	int cash;
	double change;
	
	printf("Please select from the following list:\n 1.Lemons-$0.21 each,\n 2.Lettuce-$2.39 each,\n 3.Potatoes-$0.79/lb,\n 4.Beans-$0.99/lb,\n 5.Avocado-$1.50 each,\n 6.Tomatoes-$1.99/lb");

//prompting user to enter selection

	printf("\nEnter selection: ");
		scanf("%d", &selection);

//while loop terminating the loop when 0 is entered

	while(selection!=0)
{

//switch statement to find selection

	switch(selection)
	{
		
		case 1:
			printf("Enter number of items: ");
				scanf("%d", &num_items);

//math done to add lemons

			amount=0.21*num_items;

//prompting user to add new selection

			 printf("Enter selection: ");
		                scanf("%d", &selection);

//math done to add up selections
		
			total+=amount;
			break;
		case 2:
			printf("Enter number of items: ");
				scanf("%d", &num_items);
		
//math done to add up lettuce
	
			amount=2.39*num_items;
		
//prompting user to add new selection

			printf("Enter selection: ");
                		scanf("%d", &selection);
		
//math done to add up selections

			total+=amount;
			break;
	
		case 3:
			printf("Enter weight (lb): ");
				scanf("%lf", &weight);
			
//math done to add up potatoes

			amount=0.79*weight;
			
//prompting user to add new selection

			printf("Enter selection: ");
                		scanf("%d", &selection);

//math done to add up selections
		
			total+=amount;
			break;

	        case 4:
			printf("Enter weight (lb): ");
				scanf("%lf", &weight);
			
//math done to add up beans

			amount=0.99*weight;
	 
//prompting user to add new selection

			printf("Enter selection: ");
                		scanf("%d", &selection);
		
//math done to add up selections

			total+=amount;	
			break;
		case 5:
			printf("Enter number of items: ");
				scanf("%d", &num_items);

//math done to add up avocadoes
			
			amount=1.50*num_items;
	 
//prompting user to add new selection

			printf("Enter selection: ");
                		scanf("%d", &selection);	
		
//math done to add up selections

			total+=amount;
			break;
		case 6:
			printf("Enter weight (lb): ");
				scanf("%lf", &weight);
			
//math done to add up tomatoes

			amount=1.99*weight;
	 
//prompting user to add new selection

			printf("\nEnter selection: ");
                		scanf("%d", &selection);

//math done to add up selections
		
			total+=amount;	
			break;
		default:
		
//print statement if selection entered is not a valid selection
	
			printf("Invalid selection, select from 1 to 6, enter 0 to stop selection");
		
//prompting user to enter a new selection

			printf("\nEnter selection: ");
                		scanf("%d", &selection);

			break;
	}
}

	printf("Amount due ($): %.2lf",total);
	printf("\nEnter cash recieved($): ");
		scanf("%d",&cash);

//math done to find the change due

	change=cash-total;
	printf("Your change is $%.2lf", change);

return 0;
}
