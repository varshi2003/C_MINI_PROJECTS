#include <stdio.h>
#include <string.h>

int calculatePercentage();

struct Person {
    char name[100];
};

int calculatePercentage(struct Person person1, struct Person person2) {
    int sum = 0;
    int len1 = strlen(person1.name);
    int len2 = strlen(person2.name);
    int len = (len1 < len2) ? len1 : len2;

    for (int i = 0; i < len; i++) {
        printf("%d\t%d\n",person1.name[i],person2.name[i]);
        sum += person1.name[i] * person2.name[i];
    }

    return sum % 100;
}

int main() {
    struct Person person1;
    struct Person person2;
    printf("Enter name of person 1: ");
    scanf("%s", person1.name);
    printf("Enter name of person 2: ");
    scanf("%s", person2.name);

    int friendPercentage = calculatePercentage(person1, person2);
    printf("Friendship Percentage: %d\%%\n", friendPercentage);
    return 0;
}
