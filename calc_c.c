/**Calculator in C
addition subtraction
multiplication and division
**/
#include <stdio.h>
#include <math.h>

int main(void){
	int cmd = 0;
	double val1,val2;
	int val3, val4;
	//1 = double-percision mode; 2 = integer mode
	int mode = 1;
	do{
		printf("Options:\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\n5 - exp(x)\n6 - log(x)\n7 - toggle calculator type\n8 - exit program\n");
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
				if(mode%2!=0){
					printf("Enter term: ");
					scanf("%lf",&val1);
					val2 = exp(val1);
					printf("The result of exp(%.15lf) is: %.15lf\n", val1,val2);
				}else{
					printf("Cannot calculate with integers.\n");
				}
				break;
			case 6:
				if(mode%2!=0){
					printf("Enter term: ");
					scanf("%lf",&val1);
					if(val1<0){
						printf("Cannot take the log of that number!\n");
					}else{
						val2 = log(val1);
						printf("The result of log(%.15lf) is: %.15lf\n", val1,val2);
					}
				}else{
					printf("Cannot calculate with integers.\n");	
				}
				break;
			case 7:
				mode++;
				if(mode%2 == 0){
					printf("Calculator now works with integers.\n");
				}else{
					printf("Calculator now works with doubles.\n");
				}
				
				break;
			default: 
				if(cmd>8 || cmd<0){
					printf("Invalid Option.\n");
				}
				
				break;
		}
	}while(cmd!=8);

	return 0;
}