#include <stdio.h>

struct student {
    char name[50];
    int id;
    int semester;
};

int main() {

    struct student s1;

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter id:");
    scanf("%d", &s1.id);
    printf("Enter semedster: ");
    scanf("%d", &s1.semester);

   printf("Name : %s // ID : %d // Semester : %d", s1.name, s1.id, s1.semester);

    return 0;
}