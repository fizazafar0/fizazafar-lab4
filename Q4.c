#include <stdio.h>
int main() {
    float accuracy;
    int latency, approval;
    printf("Enter accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter latency (ms): ");
    scanf("%d", &latency);
    printf("Enter approval status (1=Approved, 0=Not Approved): ");
    scanf("%d", &approval);

    int canDeploy = 1;

    if (accuracy < 90) {
        printf("Accuracy too low\n");
        canDeploy = 0;
    }
    if (latency > 100) {
        printf("Latency too high\n");
        canDeploy = 0;
    }
    if (approval != 1) {
        printf("Model not approved\n");
        canDeploy = 0;
    }

    if (canDeploy)
        printf("Model can be Deployed\n");
    else
        printf("Model cannot be Deployed\n");

    return 0;
}