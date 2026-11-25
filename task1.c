#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i;
int *roll;
float *marks;
float sum=0,avg;
printf("Enter total number of students: ");
scanf("%d",&n);
roll=(int*)calloc(n,sizeof(int));
marks=(float*)calloc(n,sizeof(float));
if(roll==NULL||marks==NULL)
{
printf("Memory not allocated");
return 0;
}
for(i=0;i<n;i++)
{
printf("Enter roll number of student %d: ",i+1);
scanf("%d",&roll[i]);
printf("Enter marks of student %d: ",i+1);
scanf("%f",&marks[i]);
sum=sum+marks[i];
}
avg=sum/n;
printf("\nStudent Records\n");
for(i=0;i<n;i++)
{
printf("Roll No: %d  Marks: %.2f\n",roll[i],marks[i]);
}
printf("Average Marks: %.2f\n",avg);
free(roll);
free(marks);
return 0;
}
