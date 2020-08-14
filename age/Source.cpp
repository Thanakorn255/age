#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;
	printf("How old are you : ");
	scanf("%d", &age);
	printf("age = %d\n", age);
	if (age >= 60) {
		printf("Elder");
	}
	else if (age >= 35 && age < 60) {
		printf("Adult");
	}
	else if (age >= 18 && age < 35) {
		printf("Adolescence");
	}
	else if (age >= 6 && age < 18) {
		printf("Children");
	}
	else {
		printf("infant");
	}	
	return 0;
}