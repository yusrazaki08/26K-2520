#include <stdio.h>
int main() {
    int Obstacle;
    int Person;
    float Battery;

    printf("Enter Obstacle (1 : detected, 0: not detected) ");
    scanf("%d", &Obstacle);

    printf("Enter (1 : person detected, 0 : not detected) ");
    scanf("%d", &Person);

    printf("Enter Battery Percentage: ");
    scanf("%f", &Battery);

    if (Obstacle == 1)
    {
        if (Person == 1)
        {
            printf("Emergency Stop");
        }else{
            printf("Change Direction");
        }  
    }
    if (Obstacle == 0)
    {
        if (Battery < 20)
        {
            printf("Return to Charging Station");
        }else{
            printf("Continue Moving");
        } 
    } 
return 0;
}