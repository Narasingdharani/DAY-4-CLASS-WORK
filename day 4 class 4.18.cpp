\* C program to read and print an employee's detail using structure *\

# include < stdio.h >
# include < conio.h >
struct  employee
{
char name[50] ;
int empId ;
int age ;
float salary ;
} ;

int  main( )
{
struct employee emp 

printf("\n Enter employee details !\n") ;
printf("\n Name : ") ;
gets(emp.name ) ;
printf("\n ID : ") ;
scanf("%d",&emp.empId ) ;
printf("\n Age : ") ;
scanf("%d",&emp.age ) ;
printf("\n Salary : ") ;
scanf("%f",&emp.salary ) ;


printf("\n Entered employee detail are !" ) ;
printf("\n Name: %s" ,emp.name ) ;
printf("\n Id: %d" ,emp.empId ) ;
printf("\n Id: %d" ,emp.age ) ;
printf("\n Salary: %f\n",emp.salary ) ;
return 0 ;
}

