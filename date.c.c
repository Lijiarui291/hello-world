#include<stdio.h>
int main()
{
	int day, month, year;
  
  printf("Enter date (���� / �·� / ��): ");
  scanf("%d/%d/%d", &day, &month, &year);
  if((month > 12 )|| (month <= 0)) {
		printf("Error");
		return 0;
  }
  switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	if((day > 31) || (day <= 0))//ע��if��������û������
		  {printf("Error");
	      return 0;
	      }
    break;
    case 2:
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
    	if((day > 29) || (day <= 0))
		    {printf("Error");
		    return 0;
			}
		}	
	else if((day > 28) || (day <= 0))
		     {printf("Error");
		     return 0;
			 }
    break;
    case 4: case 6: case 9: case 11:
	if((day > 30) || (day <= 0))
		  {printf("Error");
	      return 0;
	      }
    break;	
  }
  printf("Dated this day of %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 23:
      printf("rd"); break;
    default: printf("th"); break;
  }
  printf(" of ");
  switch (month) {
    case 1:  printf("January");
    break;
    case 2:  printf("February");  
	break;
    case 3:  printf("March");     
	break;
    case 4:  printf("April");     
	break;
    case 5:  printf("May");       
	break;
    case 6:  printf("June");      
	break;
    case 7:  printf("July");      
	break;
    case 8:  printf("August");    
	break;
    case 9:  printf("September"); 
	break;
    case 10: printf("October");   
	break;
    case 11: printf("November");  
	break;
    case 12: printf("December");  
	break;
  }
   printf(", %.4d.\n", year);
   if((month == 1) || (month == 2))//�����һ�»���½��л��� 
   {
    month += 12;
    year--;
   }
    int w = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7; 
    switch(w){
  	case 0:  printf("����һ");
    break;
    case 1:  printf("���ڶ�");  
	break;
    case 2:  printf("������");     
	break;
    case 3:  printf("������");     
	break;
    case 4:  printf("������");       
	break;
    case 5:  printf("������");      
	break;
    case 6:  printf("������");      
	break;
  }
  return 0 ;
}
