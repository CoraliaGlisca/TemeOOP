#include <iostream>
#include <stdlib.h>

using namespace std;

//1&2&3
class Student {
public:
    int counter = 0;     //3--declare a static counter to count the instances created in this moment
	int grade; // =10
	Student() {	// constructor
		grade = 10;
		counter++;
	}
	Student(int g) {	// constructor
		grade = g;
		counter++;
	}
    ~Student() {	// destuctor
        cout << "Instance destroyed !"<<endl;;
}
};

class Student1 {
private:
	int grade;
	student1(){      //2--declares a constructor private which sets the grade value to 8
	    grade = 8;
	}
public:
    void displayGrade(){
        cout <<"The grade is= "<<grade<<endl;
    }
};



class Student2 {
public:
    int data;
    Student2* next;
    void print();
};

void Student2::print(){
     Student2 *temp;
	 while (temp != NULL){
        cout << temp -> data;
        temp = temp -> next;
     }
}


int main()
{
    Student1 studios;
    studios.displayGrade();
    Student student2(15);
    cout<<student2.counter<<'\n';

    Student2* head = NULL;
    Student2* second = NULL;
    Student2* third = NULL;

    head = (Student2*)malloc(sizeof(Student2));
    second = (Student2*)malloc(sizeof(Student2));
    third = (Student2*)malloc(sizeof(Student2));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    cout<<"\n";
}
