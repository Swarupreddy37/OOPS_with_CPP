#include <bits/stdc++.h>
using namespace std;

class HumanBeing {
private:
	string name;
	int age;
public:
	HumanBeing(string word, int val) {
		name = word;
		age = val;
	}
	friend void display(HumanBeing Swarup); //declaring friend function.
	friend class Student;  //declaring friend class (here Student class can aceess variables of HumanBeing class but reverse is not possible.)
};

void display(HumanBeing Swarup) {
	cout << Swarup.name << " " << Swarup.age << endl;
}

class Student {
private:
	int marks;
public:
	Student(int m = 8.54){
		marks = m;
	}
	void Display(HumanBeing Swarup) {
		cout << Swarup.name << " " << Swarup.age << " " << marks;
	}
};

int main() {
	// your code goes here
	HumanBeing Swarup("Swarup", 19);
	display(Swarup); // calling friend function.
	Student s;
	s.Display(Swarup); //calling friend class.
	return 0;
}

