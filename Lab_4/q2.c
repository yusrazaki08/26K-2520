#include <stdio.h>
int main() {
    int Score;

    printf("Enter your confidence score: ");
    scanf("%d", &Score);

    if (Score < 0 || Score > 100)
    {
        printf("Invalid Score!");
    }else if (Score >= 0 && Score <= 49)
    {
        printf("Low Confidence!");
    }else if (Score >= 50 && Score <= 79)
    {
        printf("Moderate Confidence!");
    }else
    {
        printf("High Confidence!");
    }
return 0;
}