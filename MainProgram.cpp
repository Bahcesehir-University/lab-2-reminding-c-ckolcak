#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
---------------------------------------
PART 1 — Variables and Arithmetic
---------------------------------------
*/

int addNumbers(int a, int b)
{
    int sum = a+b;
    return sum;
}



/*
---------------------------------------
PART 2 — Loops
---------------------------------------
*/

int sumUpToN(int n)
{
    int sum =0;
    for(int i=0;i <= n; i++){
    sum += i;
        
    }
    return sum;
    
}



/*
---------------------------------------
PART 3 — Vectors
---------------------------------------
*/

int findMaximum(vector<int> numbers)
{
    int max = numbers[0];
    for(int i = 0;i<numbers.size();i++){
        if(numbers[i + 1] >numbers[i]){
            max = numbers[i + 1];
        }
    }
    return max;
}



/*
---------------------------------------
PART 4 — Strings
---------------------------------------
*/

string reverseString(string text)
{
    string reversed = "";
    for(int i = text.length() - 1; i >= 0;i--){
        reversed += text[i];
    }
    return reversed;
}





/*
---------------------------------------
PART 5 — Simple Class
---------------------------------------
*/

class Student
{
private:   //members can access only in this class
    string name;
    int grade;

public:   // everyone can access them

    // TODO
    // Create a constructor that  constructer ismi class la aynı olan fonksiyona denir
    // name and grade
     Student(string n , int g){
         name = n;
         grade = g;
     }

    // TODO
    // Create a function printInfo()
    // that prints:
    // Name: <name>
    // Grade: <grade>
    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};



/*
---------------------------------------
MAIN FUNCTION
---------------------------------------
*/

int main()
{
    cout << "C++ Review Lab\n";

    /*
    PART 1 TEST
    */

    cout << "Sum of 4 + 5 = "
         << addNumbers(4,5)
         << endl;

    /*
    PART 2 TEST
    */

    cout << "Sum up to 10 = "
         << sumUpToN(10)
         << endl;


    /*
    PART 3 TEST
    */

    vector<int> numbers = {3,7,2,9,5};

    cout << "Maximum value = "
         << findMaximum(numbers)
         << endl;


    /*
    PART 4 TEST
    */

    cout << "Reverse of hello = "
         << reverseString("hello")
         << endl;


    /*
    PART 5 TEST
    */

    Student s("Alice", 90);

    s.printInfo();


    return 0;
}
