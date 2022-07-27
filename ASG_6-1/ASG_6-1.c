#include<stdio.h>
typedef struct {
    char name[30];
    int  age;
    int  degree;
    int  section;
}student;

void print(student *students){

    for(int i=0;i<5;i++){
        printf("\nStudent %d :\n\n\tName    : %s\n\tAge     : %d\n\tDegree  : %d\n\tSection : %d\n\n==============================\n",i+1,(students+i)->name,(students+i)->age,(students+i)->degree,(students+i)->section);
    }

}

int main()
{
    student students []={
    {
        "Ahmed",15,88,1
    },
    {
        "Abdo",14,92,2
    },
    {
        "Ali",15,78,5
    },
    {
        "Mohamed",16,98,3
    },
    {
        "Mostafa",17,100,4
    }
    };
    int size=sizeof(students)/sizeof(students[0]);

    print(students);
}

