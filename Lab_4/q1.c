#include <stdio.h>
int main() {
	int Num1;
	int Num2;
	int Num3;

	printf("Enter Num1: ");
	scanf("%d", &Num1);
	
    printf("Enter Num2: ");
	scanf("%d", &Num2);
	
    printf("Enter Num3: ");
	scanf("%d", &Num3);

    if (Num1 > Num2 && Num1 > Num3){
        printf("Num1 is greatest");

    }else if (Num2 > Num1 && Num2 > Num3){
        printf("Num2 is greatest");
    
    }else if (Num3 > Num1 && Num3 > Num2){
        printf("Num3 is greatest");
    
    }else if (Num1 > Num3 && Num1 == Num2){
        printf("Num1 and Num2 are equal and greater than Num3");

    }else if (Num1 > Num2 && Num1 == Num3){
        printf("Num1 and Num3 are equal and greater than Num2");
    
    }else if (Num2 > Num1 && Num2 == Num3){
        printf("Num2 and Num3 are equal and greater than Num1");
    }else{
        printf("All numbers are equal");
    }
return 0;
}