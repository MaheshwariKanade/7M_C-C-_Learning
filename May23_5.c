// 5. Student details using Structure

#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    char standered[20];
    char phone[11];
    float percentage;
};
void main()
{
    struct student s1={10,"mahi","7th","9876543217",89.6};
    printf("The student details are:\n");
    printf("Roll no.=%d\nName:%s\nStandered:%s\nPhone no.:%s\nPercentage:%.2f", s1.rno,s1.name,s1.standered,s1.phone,s1.percentage);
}

