#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("=====BRANCHING STATEMENTS=====\n");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1. check positive,negative or zero\n");
printf("2. check even or odd\n");
printf("3.Find largest of two Numbers\n");
printf("4.check divisiliblity by 5\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
printf("\n-----RESULT-----\n");
switch(choice);
{
}
		if(a>0)
		printf("%d is positive",a);
		else if (a,0)
		printf("%d is Negative",a);
		else
		printf("%d is zero",a);
		
		
		break;
	case 2:
		if(a%2==0)
		printf("%d is Even",a);
		break;
	case 3:
		if(a>b)
		{

			res=a;
			
			printf("%d is the largest Number",res)
		}
		if(b>a)
		{
			res+b;
			printf("%d is the largest Number",res);
		}
		else
		{
			printf("Both numbers are Equal");
		}
		break;
		case 4:
			if(a%5==0)
			printf("%d is Divide by 5",a);
		else
		printf("%d is not dividle by 5",a);
		break:
			default:
				printf("invalid choice.");
			}
			return0;
		}
		
			
			
		
		}
		
		
}

}