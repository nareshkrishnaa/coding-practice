#include<iostream>
using namespace std;
class student{
    private:
    int  rollnumber;
    string name;
    string city;
    int subject1,subject2,subject3;
    
    public:
    student(int r,string n,string c,int s1,int s2, int s3)
    {
        rollnumber=r;
        name=n;
        city=c;
        subject1=s1;
        subject2=s2;
        subject3=s3;
    }
    
     void printdetails()
    {
        cout<<"the name is:"<<name<<endl;
        cout<<"city is:"<<city<<endl;
        cout<<"marks scored in subject1 is:"<<subject1<<endl;
        cout<<"marks scored in subject2 is:"<<subject2<<endl;
        cout<<"marks scored in subject3 is:"<<subject3<<endl;
    }
    
    char grade()
    {
        int average=(subject1+subject2+subject3)/3;
        if(average>90)
        return 'A';
        else if(average>80)
        return 'B';
        else if(average>70)
        return 'C';
        else if(average>60)
        return 'D';
        else if(average>50)
        return 'E';
        else
        return 'F';
        
        
    }
    
};

int main()
{
    student john(001,"john","new york",90,90,90);
    john.printdetails();
    cout<<"The grade is:"<<john.grade();
}