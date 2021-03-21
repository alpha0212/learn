#include <stdio.h>
int main () {
    char name;
    int age;
    char blood;

    printf("enter your name.:");
    scanf("%s", &name);
    printf("enter your age.:");
    scanf("%d", &age);
    printf("enter your blood.:");
    scanf("%c", &blood);
    printf("이름은%s나이는%d혈액형은%c입니다.",name,age,blood);
    
    return 0;
}
