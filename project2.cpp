#include <iostream>
#include <string>
using namespace std;

int main()
{
    // If you mix cin >> and getline(), there is a problem. The fix is cin.ignore() after every cin >>.
    string name, city;
    int age;
    double cgpa;
    cout<<"Enter your name:";
    getline(cin, name);   //reads the ENTIRE line including spaces — "Rahul Singh" stays complete
    cout<<"Enter your city:";
    getline(cin, city);
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your CGPA:";
    cin>>cgpa;
    cout<<"---- Student Profile ----"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"City : "<<city<<endl;
    cout<<"CGPA : "<<cgpa<<endl;

    return 0;
}