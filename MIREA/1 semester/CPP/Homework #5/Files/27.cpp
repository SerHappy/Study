#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// create file file.txt with this text:
// 3435456 Jove Georgiana Gawel	MATH 5 PROG 2 IT 4 ENGLISH 3 PHYS 4
// 4564564 Alicia Finnagan Tiede	MATH 5 PROG 2 IT 4 ENGLISH 3 PHYS 4
// 9809080 Micah Yseut Paola	MATH 5 PROG 2 IT 4 ENGLISH 3 PHYS 4
// 3123123 Ioannicius Fryderyk Andronicus	MATH 5 PROG 2 IT 4 ENGLISH 3 PHYS 4
// 5657677 Ahristel Khristofor Aslan	MATH 5 PROG 2 IT 4 ENGLISH 3 PHYS 4
// 9809080 Micah Yseut Paola	MATH 5 PROG 2 IT 4 ENGLISH 3 PHYS 4

struct Student
{
    int number;
    string last_name;
    string name;
    string patronymic;
    string sub1;
    int mark1;
    string sub2;
    int mark2;
    string sub3;
    int mark3;
    string sub4;
    int mark4;
    string sub5;
    int mark5;
};

istream &operator>>(istream &is, Student &s)
{
    return is >> s.number >> s.last_name >> s.name >> s.patronymic >>
           s.sub1 >> s.mark1 >>
           s.sub2 >> s.mark2 >>
           s.sub3 >> s.mark3 >>
           s.sub4 >> s.mark4 >>
           s.sub5 >> s.mark5;
}

int main()
{
    ifstream file("D:\\file.txt");
    vector<Student> students;
    Student s;
    while (file >> s)
    {
        students.push_back(s);
    }
    file.close();
    sort(students.begin(),
         students.end(),
         [](const Student &s1, const Student &s2)
         {
             return s1.last_name < s2.last_name;
         });

    int numLines = 0;
    ifstream in("D:\\file.txt");
    std::string unused;
    while (std::getline(in, unused))
        ++numLines;
    in.close();

    ofstream fl("D:\\file.txt");
    for (int i = 0; i < numLines; ++i)
    {
        fl << students[i].number << " " << students[i].last_name << " " << students[i].name << " " << students[i].patronymic << "\t"
           << students[i].sub1 << " " << students[i].mark1 << " "
           << students[i].sub2 << " " << students[i].mark2 << " "
           << students[i].sub3 << " " << students[i].mark3 << " "
           << students[i].sub4 << " " << students[i].mark4 << " "
           << students[i].sub5 << " " << students[i].mark5;
        if (i != numLines - 1)
        {
            fl << "\n";
        }
    }
}