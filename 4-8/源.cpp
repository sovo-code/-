#include<iostream>
#include<string>
using namespace std;
class ExamInof {
public:
	ExamInof(string name, char grade)
		:name(name), mode(GRADE), grade(grade){}
	ExamInof(string name, bool pass)
		:name(name), mode(PASS), pass(pass){}
	ExamInof(string name, int percent)
		:name(name), mode(PERCENTAGE), percent(percent){}
	void show();

private:
	string name;
	enum {
		GRADE,
		PASS,
		PERCENTAGE,
	}mode;
	union {
		char grade;
		bool pass;
		int percent;
	};
};
void ExamInof::show() {
	cout << name << ": ";
	switch (mode) {
	case GRADE:cout << grade;
		break;
	case PASS:cout << (pass ? "PASS" : "FALL");
		break;
	case PERCENTAGE:
		cout << percent;
		break;
	}
	cout << endl;
}
int main() {
	ExamInof course1("English", 'B');
	ExamInof course2("Calculus", true);
	ExamInof course3("C++PRogramming", 85);
	course1.show();
	course2.show();
	course3.show();
	return 0;

}