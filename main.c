#include <stdio.h>
#include <string.h>

#define MAX_NAME  20

struct student {
	int ID;
	char name[MAX_NAME];
	double grade;
};

int main(int argc, const char * argv[]) {
	
	struct student student1 = {1002, "¿ÃπŒº≠", 4.2};
	
	student1.ID = 1003;
	strcpy(student1.name, "πŒº≠");
	student1.grade = 4.3;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %i\n", student1.name);	
	printf("grade : %lf\n", student1.grade);
	
	return 0;
}
