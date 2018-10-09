/**Calculator in C
addition subtraction
multiplication and division
**/
#include <stdio.h>

int main(void){
	int cmd = 0;
	double val1,val2;
	int val3, val4;
	//1 = double-percision mode; 2 = integer mode
	int mode = 1;
	do{
		printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - toggle calculator type\n6 - exit program\n");
		printf("Please enter your option: ");
		scanf("%d", &cmd);
		switch(cmd){
			case 1:
				if(mode%2!=0){					
					printf("Enter first term: ");
					scanf("%lf",&val1);
					printf("Enter second term: ");
					scanf("%lf",&val2);
					double sum = val1 + val2;
					printf("The sum is: %.15lf\n", sum);
				}else{
					int val3, val4;
					printf("Enter first term: ");
					scanf("%d",&val3);
					printf("Enter second term: ");
					scanf("%d",&val4);
					printf("The sum is: %d\n",val3+val4);
				}
				break;
			case 2:
				if(mode%2!=0){
					printf("Enter first term: ");
					scanf("%lf",&val1);
					printf("Enter second term: ");
					scanf("%lf",&val2);
					double dif = (double)val1 - (double)val2;
					printf("The difference is: %.15lf\n", dif);
				}else{
					printf("Enter first term: ");
					scanf("%d",&val3);
					printf("Enter second term: ");
					scanf("%d",&val4);
					printf("The difference is: %d\n",val3-val4);
				}
				break;
			case 3:
				if(mode%2!=0){
					printf("Enter first term: ");
					scanf("%lf",&val1);
					printf("Enter second term: ");
					scanf("%lf",&val2);
					double product = (double)val1 * (double)val2;
					printf("The product is: %.15lf\n", product);
				}else{
					printf("Enter first term: ");
					scanf("%d",&val3);
					printf("Enter second term: ");
					scanf("%d",&val4);
					printf("The product is: %d\n",val3*val4);
				}
				break;
			case 4:
				if(mode%2!=0){
					printf("Enter first term: ");
					scanf("%lf",&val1);
					printf("Enter second term: ");
					scanf("%lf",&val2);
					if(val2==0){
						printf("Cannot divide by zero!\n");
					}else{
						double quotient = (double)val1 / (double)val2;
						printf("The quotient is: %.15lf\n", quotient);
					}
				}else{
					printf("Enter first term: ");
					scanf("%d",&val3);
					printf("Enter second term: ");
					scanf("%d",&val4);
					if(val4==0){
						printf("Cannot divide by zero!\n");
					}else{
						printf("The quotient is: %d\n",val3/val4);
					}
				}
				break;
			case 5:
				mode++;
				if(mode%2 == 0){
					printf("Calculator now works with integers.\n");
				}else{
					printf("Calculator now works with doubles.\n");
				}
				
				break;
			default: 
				if(cmd>6 || cmd<0){
					printf("Invalid Option.\n");
				}
				
				break;
		}
	}while(cmd!=6);

	return 0;
}