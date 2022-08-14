#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void print()
    {
    }
};

int main()
{
    /*  student a;
    a.name = 'urvi';
    a.age = 20;
    a.gender =1;*/

    student arr[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Name = ";
        cin >> arr[i].name;
        cout << "Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 2; i++)
    {
        arr[i].print();
    }

    return 0;
}