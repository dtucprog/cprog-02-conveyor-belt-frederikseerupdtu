#include <stdio.h>

int main ()
{
    int MOTOR_CAPACITY = 12; // Every motor is able to carry 12kg of package weight
    int motorCount;          
    int totalPackageWeight;  


    do {
    printf("How many motors are carrying the packages? Enter here: \n");
    scanf("%d", &motorCount);
        if (motorCount < 1)
        {
            printf("There must be 1 or more motors!\n\n");
        }
    }
    while (motorCount < 1);

    do {
    printf("How many kg of packages do we expect? Enter here: \n");
    scanf("%d",&totalPackageWeight);
    if (totalPackageWeight < 1)
        {
            printf("The package must weigh 1 kg or more! \n\n");
        }
    }
    while (totalPackageWeight < 1);

    int TOTAL_MOTOR_CAPACITY = 12 * motorCount; // How much the entire conveyer can carry in kgs

    if (totalPackageWeight <= TOTAL_MOTOR_CAPACITY) 
        {
            printf("Yes! The conveyor belt can carry the packages.\n");
        }
    else 
        {
            printf("No. The conveyor belt cannot carry the packages.\n");
        }
}
