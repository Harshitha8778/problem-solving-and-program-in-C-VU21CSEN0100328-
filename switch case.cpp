// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int month,year;
 printf("enter year: ");
 scanf("%d",&year);
 printf("enter a month number: ");
 scanf("%d",&month);
 switch(month)
 {
 case 1:
  printf("jan-31 days");
  break;
 case 2:
 
 if (year%4==0)
  {
      printf("feb-29 days");
  }
  else
  {
      printf("feb-28 days");
  }    
      break;
 case 3:
  printf("march-31 days");
  break;
  case 4:
  printf("april-30 days");
  break;
   case 5:
  printf("may-31 days");
  break;
   case 6:
  printf("june-30 days");
  break;
   case 7:
  printf("july-31 days");
  break;
   case 8:
  printf("august-31 days");
  break;
   case 9:
  printf("september-30 days");
  break;
   case 10:
  printf("october-31 days");
  break;
   case 11:
  printf("november-30 days");
  break;
   case 12:
  printf("december-31 days");
  break;
  default:
  printf("enter a number between 1 and 12 0nly");
}  
    return 0;
}
