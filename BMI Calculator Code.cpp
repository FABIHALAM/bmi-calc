#include <stdio.h>
#include<stdlib.h> // for system cls(clear screen)
#include <conio.h> // For getch()

int main() {
    char op;
    do {
         system("cls");

        printf(" -------------------------------------- \n");
        printf(" |          BMI Calculator            | \n");
        printf(" -------------------------------------- \n\n");
        printf("1. Calculate BMI\n");
        printf("2. BMI Rules\n");
        printf("3. Quit\n\n");
        printf("Select option: ");
        op = getche();  // Get a single character input

        if (op == '1') {
    
             system("cls");
            double weight, height, bmi;

            // User se weight aur height lena
            printf("\n\nEnter your weight (In kilograms): ");
            scanf("%lf", &weight);

            printf("Enter your height (In Meters): ");
            scanf("%lf", &height);

            
            // BMI calculate karna
            bmi = weight / (height * height);

            // Result dikhana
            printf("\n\n------------------------------------\n");
            printf("Your Body Mass Index is %.2lf\n", bmi);
            printf("------------------------------------\n");

            // BMI ka category dikhana
            if (bmi < 18.5)
                printf("You are Underweight");
            else if (bmi >= 18.5 && bmi < 25)
                printf("You are Perfectly Healthy");
            else if (bmi >= 25)
                printf("You are Overweight");

            printf("\n------------------------------------");

            printf("\n\nPress any key to go back to Menu... ");
            getch();
        }
        else if (op == '2')
		 {
             system("cls");
            printf("Instructions");
            printf("\n---------------");
            printf("\n BMI is less than 18.5 : You are Underweight");
            printf("\n BMI is between 18.5 and 25 (inclusive) : You are Perfectly Healthy");
            printf("\n BMI is greater than or equal to 25 : You are Overweight");
            printf("\n\nPress any key to go back to menu");
            getch();
        }
        else if (op == '3') {
           return 0; // Quit the program or Terminate the program
        }

    } while (1);  // Program ko loop mein chalana, jab tak user quit nahi karta
    
    return 0;  // Successful execution ka signal
}