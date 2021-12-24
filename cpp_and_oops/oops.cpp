#include<iostream>

#include<climits>

using namespace std;

class person {
  private:
  string name;
  string phone_number;

  public:
    //default constructor
    person() {
      cout << "please enter the name:";
      cin >> name;
      cout <<endl <<"enter phone number:";
      cin >> phone_number;
    }

  //parametarised constructor
  person(string n, string p) {
    name = n;
    phone_number = p;
  }
  //copy constructor
  
  
  person(const person & p) {
    name = p.name;
    phone_number = p.phone_number;
  }
  string getname() {
    return name;
  }

  string getphone_number() {
    return phone_number;
  }
};

class employee:public person
{
	private:
	int employee_id;
	float experience;
	float salary;
	
	public:
		employee()
		{
			cout<<endl<<"enter employee id:";
			cin>>employee_id;
			cout<<endl<<"enter experience:";
			cin>>experience;
			cout<<endl<<"enter salary:";
			cin>>salary;
		}
		
};

int main() {

  person p2("rammi", "9884512499");
  employee e1;
}
