#include <stdio.h>
int main() {
    int role, status, level;
    printf("Enter role (1=Admin, 2=Researcher, 3=Student): ");
    scanf("%d", &role);
    printf("Enter account status (1=Active, 0=Inactive): ");
    scanf("%d", &status);
    printf("Enter security level: ");
    scanf("%d", &level);

    if (status == 0) {
        printf("Access Denied - Inactive Account\n");
        return 0;
    }

    if (role == 1 && level >= 3)
        printf("Access Granted - Admin Level Access\n");
    else if (role == 2 && level >= 2)
        printf("Access Granted - Researcher Level Access\n");
    else if (role == 3 && level >= 1)
        printf("Access Granted - Student Level Access\n");
    else
        printf("Access Denied\n");

    return 0;
}