/*> Percentage >= 90%: Grade A
-> Percentage >= 80%: Grade B
-> Percentage >= 70%: Grade C
-> Percentage >= 60%: Grade D
-> Percentage >= 40%: Grade E
-> Percentage < 40%: Grade F

Enter marks for Physics: 85
Enter marks for Chemistry: 78
Enter marks for Biology: 92
Enter marks for Mathematics: 88
Enter marks for Computer Science: 95
Total Marks = 438.00/500
Percentage = 87.60%
Grade = B
*/
#include<stdio.h>
int main(){
int p,ch,b,m,c,sum;
float per;
printf("Enter marks for Physics");
scanf("%d",&p);
printf("Enter marks for Chemistry");
scanf("%d",&ch);
printf("Enter marks for  biology");
scanf("%d",&b);
printf("Enter marks for  mathematics");
scanf("%d",&m);
printf("Enter marks for computer science");
scanf("%d",&c);
  sum = p+ch+b+m+c;
  per = sum/5;
  printf("Tottal no optain %d/500\n",sum);
  printf("Persent is %f\n ",per);
  if(per>=90)puts(" grade A");
  else if(per>=80)puts(" Grade B");
  else if(per>=70)puts("Grade c");
  else if(per>=60)puts("Grade D");
  else if(per>=60)puts(" Grade E");
  else puts("Grade F");
  return 0;
}