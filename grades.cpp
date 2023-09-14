#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string STUDENT_NAME;
float GRADE_AVG;
bool accepted = false;
float input_holder;
float grade1;
float grade2;
float grade3;
float grade4;

void NAME_CHECK(string input)
{
 {
        if (!cin || std::isdigit(input[0]))
        {
            do
            {
             cout << "Please enter a valid name" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> input;            
            } while (!cin);

            
         
        }
    }
}

void GRADE_CHECK(float input)
{
    {

       if (!cin || input > 100 || input < 0)
       {
              cout << "Please enter a valid number" << endl;
              cin.clear();
              cin.ignore(1000, '\n');
              cin >> input;
              input_holder = input;
              GRADE_CHECK(input);
              
       }
    }
}



int main()
{
   
    cout <<"Please Enter the Students Name: " << endl;
    cin >> STUDENT_NAME;
 
        NAME_CHECK(STUDENT_NAME);
 

    cout << "Please enter grade 1: " << endl;
    cin >> grade1;
        GRADE_CHECK(grade1);
        grade1 = input_holder;
   cout << "Please enter grade 2: " << endl;
    cin >> grade2;
   
        GRADE_CHECK(grade2);
         grade2 = input_holder;
    cout << "Please enter grade 3: " << endl;
    cin >> grade3;
        GRADE_CHECK(grade3);
        grade3 = input_holder;
    cout << "Please enter grade 4: " << endl;
    cin >> grade4;
        GRADE_CHECK(grade4);
        grade4 = input_holder;
    GRADE_AVG = (grade1 + grade2 + grade3 + grade4) / 4;
      cout << "\033[1;31m==========================\033[0m\n";
    cout << "\033[1;31mStudent Name: ======> \033[0m" << STUDENT_NAME << endl;
    cout << "\033[1;31mGrade 1: =====> \033[0m" << grade1 << endl;
    cout << "\033[1;31mGrade 2: =====> \033[0m" << grade2 << endl;
    cout << "\033[1;31mGrade 3: =====> \033[0m" << grade3 << endl;
    cout << "\033[1;31mGrade 4: =====> \033[0m" << grade4 << endl;

    cout << "\033[1;31mGrade Average: =====> \033[0m" << GRADE_AVG << endl;
cout << "\033[1;31m==========================\033[0m\n";
    
    
}