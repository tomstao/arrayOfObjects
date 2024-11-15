#include <iostream>

class Student
{
public:
    std::string name;
    int Age;
    char Gender;
    float ProgrammingGrades;
    Student()
    {
        name = "Unknown";
    }
    Student(std::string name, int Age, char Gender, float ProgrammingGrades)
    {
        this->name = name;
        this->Age = Age;
        this->Gender = Gender;
        this->ProgrammingGrades = ProgrammingGrades;

    }
};
int main()
{   /*
    - What are arrays of objects?
    -How are they different from arrays of primitive data types?
    -Why and when should you use arrays of objects?
    -How do you access individual elements in an array of objects?
    -How do you access and modify object properties in the array?
    -How to use loops to perform operations on arrays of objects?
    -Most common errors that an occur when working with arrays of objects
    -Task for you at the end
    */

    int luckyNumbers[5] = {1, 3, 5, 13, 21};
    // This is array of integers.
    // Student s1;
    // s1.name = "John";
    // s1.Age = 21;
    // s1.Gender = 'M';
    // s1.ProgrammingGrades = 9.5;
    //
    // Student studnets[3];
    // // This is array of objects, specify the type of Student.
    // studnets[0] = s1;


    Student students[3] = {
        {"Saldina", 21, 'F', 9.5},
        {"John", 43, 'M', 8.5},
        {"Doe", 51, 'M', 7.35}
    };
    // This is array of objects, specify the type of Student. Directly initialize the array of objects.

    Student students2[3];
    for(int i = 0; i < 3; i++)
    {
        Student s;
        // Instantiate the object of Student.
        std::cout << "Enter "<< i + 1 << " name: ";
        std::cin >> s.name;
        std::cout << "Enter Age: ";
        std::cin >> s.Age;
        std::cout << "Enter Gender: ";
        std::cin >> s.Gender;
        std::cout << "Enter Programming Grades: ";
        std::cin >> s.ProgrammingGrades;

        students[i] = s;
        // Then store the object in the array of objects.
    }
    // Use for loop to get the input from the user.
    for(int j = 0; j < 3; j++)
    {
        std::cout << "Student " << j + 1 << " Name: " << students[j].name << std::endl;
        std::cout << "Student " << j + 1 << " Age: " << students[j].Age << std::endl;
        std::cout << "Student " << j + 1 << " Gender: " << students[j].Gender << std::endl;
        std::cout << "Student " << j + 1 << " Programming Grades: " << students[j].ProgrammingGrades << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
