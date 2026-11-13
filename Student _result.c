#include<stdio.h>
int main(){
char name[50];
int totalMarks,english,science,urdu,islamiat,maths;
float percentage;
float gpa;
char grade;

//using for loop to show result of  100 students. 
for(int i=1; i<=100; i++){
 printf("\n===== Student %d =====\n", i);
printf("Enter student name : ");
scanf("%s", name);

//marks  in each subject 
printf("Enter english marks: ");
scanf("%d", &english);
printf("Enter urdu marks: ");
scanf("%d", &urdu);
printf("Enter maths marks: ");
scanf("%d", &maths);
printf("Enter islamiat  marks ");
scanf("%d", &islamiat);
printf("Enter science marks: ");
scanf("%d", &science);
if(english<0 || maths <0 || science<0 || urdu<0 ||islamiat<0 ){
    printf("invalid\n");
    continue;
}

if(english>100 || maths >100 || science>100 || urdu>100 || islamiat>100){
    printf("invalid\n");
    continue;
}
totalMarks=english+urdu+maths+islamiat+science;
if (totalMarks>500){
    printf("invalid\n");
    continue;
}
percentage=totalMarks*100.0/500;

//GRADE 
if(percentage>=90){
    grade='A';
    gpa=4.0;

}
else if(percentage>=80){
    grade='B';
    gpa=3.0;
}
else if(percentage>=70){
    grade='C';
    gpa=2.0;

}else if(percentage>=60){
    grade='D';
    gpa=1.0;

}else{
    grade='F';
    gpa=0.0;
}

// show RESULT 
printf("---RESULT of %s ---\n", name);
printf("total of %d /500\n",totalMarks );
printf("percentage of %.2f%%\n", percentage);
printf("GRADE : %c\n", grade);
printf("GPA %.1f\n",gpa);
}
    return 0;
}