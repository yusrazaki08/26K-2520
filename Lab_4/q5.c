#include <stdio.h>
int main() {
    int Role;
    int Status;
    int SecurityLevel;

    printf("Enter Role(1 = Admin, 2 = Researcher , 3 = Student): ");
    scanf("%d", &Role);

    printf("Enter Account Status(1 = Active, 0 = Inactive): ");
    scanf("%d", &Status);

    printf("Enter Security Level: ");
    scanf("%d", &SecurityLevel);

    if (Status == 0)
    {
        printf("Access is Denied");

    }else if (Role == 1 && SecurityLevel >= 3)
    {
        printf("Admin Level Accessed");

    }else if (Role == 2 && SecurityLevel >= 2)
    {
        printf("Researcher Level Accessed");

    }else if (Role == 3 && SecurityLevel >= 1)
    {
        printf("Student Level Accessed");

    }else{
        printf("Access Denied");
    }

return 0;
}