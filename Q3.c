#include <stdio.h>
int main() {
    int total, missing, duplicate;
    printf("Enter total records: ");
    scanf("%d", &total);
    printf("Enter missing records: ");
    scanf("%d", &missing);
    printf("Enter duplicate records: ");
    scanf("%d", &duplicate);

    if (total <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    float missing_per = (missing * 100.0) / total;
    float duplicate_per = (duplicate * 100.0) / total;

    printf("Missing: %.2f%%\n", missing_per);

    if (missing_per > 30)
        printf("Poor Quality Dataset\n");
    else if (duplicate_per > 20)
        printf("Dataset Requires Cleaning\n");
    else
        printf("Dataset Ready for Training\n");
    
    return 0;
}