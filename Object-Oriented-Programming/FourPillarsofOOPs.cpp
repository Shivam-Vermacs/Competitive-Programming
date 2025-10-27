#include <bits/stdc++.h>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{ // declaring attributes of the employee class
private:
    string Name;
    string Company;
    int Age;

public:
    // setters
    void setName(string name)
    {
        Name = name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    // getters
    string getName()
    {
        return Name;
    }
    string getCompany()
    {
        return Company;
    }
    int getAge()
    {
        return Age;
    }
    void Introduce()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
    void AskForPromotion()
    {
        if (Age > 23)
        {
            cout << Name << " Got Promoted" << endl;
        }
        else
            cout << Name << " Sorry , you cant be promoted" << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Age = age;
        Company = company;
    }
};

class Developer : Employee
{
public:
    string FavoriteProgrammingLanguage;
    Developer(string name, string company, int age, string favoriteProgrammingLanguage) : Employee(name, company, age)
    {
        FavoriteProgrammingLanguage = favoriteProgrammingLanguage;
    }
    void FixBug()
    {
        cout << getName() << " is Fixing Bugs using " << FavoriteProgrammingLanguage << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Shivam", "Pinterest", 23); // a constructor is being invoked here and that is a default constructor

    // employee1.Name = "Shivam";
    // employee1.Age = 24;
    // employee1.Company = "Pinterest";
    employee1.Introduce();

    Employee employee2 = Employee("Verma", "Amazon", 24); // a constructor is being invoked here and that is a default constructor
    // employee2.Name = "Verma";
    // employee2.Age = 25;
    // employee2.Company = "Google";
    employee2.Introduce();
    // we can avoid this repetitive code by invoking constructors

    // using setters and getters
    employee2.setAge(30);
    cout << employee2.getName() << " is " << employee2.getAge() << " Years Old" << endl;
    employee2.AskForPromotion();
    employee1.AskForPromotion();
    Developer dev = Developer("Shivam", "Pinterest", 23, "C++");
    dev.FixBug();
}