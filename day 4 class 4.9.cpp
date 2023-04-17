

# include < stdio.h >
# include < conio.h >
struct  MyUnion
{
int num1 ;
float num2 ;
} ;

int  main( )
{
union MyUnion UN ;
printf("\n Size of union : %ld", sizeof(UN) ) ;
UN.num1 = 10 ;
printf("\n Num1: %d, Num2: %f", UN.num1, UN.num2 ) ;
UN.num2 = 10.34F ;
printf("\n Num1: %d, Num2: %f", UN.num1, UN.num2 ) ;
return 0 ;
}

