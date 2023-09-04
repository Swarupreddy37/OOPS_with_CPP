#include<bits/stdc++.h>
using namespace std;

void Takeinput() {
	#ifndef SWARUP
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}
class Person{
public:
	int age;
	string name;
	Person(string word, int val) {
		age = val;
		name = word;
	}
};

class Student : public Person{
public:
	int id;
	string college;
	Student(string myname, int val, int myid, string col) : Person(myname, val){
		id = myid;
		college = col;
	}
	void display() {
		cout << name << " " << age << " " << id << " " << college << endl;
	}
};

int main() {
	Takeinput();
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Student swarup("SWARUP", 19, 536, "AEC");
    swarup.display();
}
