#include <stdio.h>
#include <conio.h>
struct employee
{
	char name[56]="dia";
	int empid=45;
	float salary=123.67;
    }ab;
    
	int main() {
	
		printf("\nemployee details are");
		printf("\nname:%s",ab.name);
		printf("\nid:%d",ab.empid);
		printf("\nsalary:%f\n",ab.salary);
		return 0;
	
	}

