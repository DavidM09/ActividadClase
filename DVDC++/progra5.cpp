#include <iostream>

using namespace std;

int main (){

    char grade;
    int nota;

    cout <<"insert your grade" << endl;
    cin >> nota;

    if (nota >= 90){
    cout <<"your grade is A"<< endl;
    grade = 'A';
    }
    else if (nota < 90  && nota >= 85){
    cout <<"your grade is B" << endl;
    grade = 'B';
    }
    else if (nota < 85  && nota >= 80){
    cout <<"your grade is C" << endl;
    grade = 'C';
    }
    else if (nota < 80  && nota >= 70){
    cout <<"your grade is D" << endl;
    grade = 'D';
    }
    else if (nota < 70  && nota >= 69){
    cout <<"your grade is E" << endl;
    grade = 'E';
    }
    else if (nota < 69){
    cout <<"your grade is F" << endl;
    grade = 'F';
    }
    else{
    }

    switch (grade){
        case 'A' :
        cout <<"Excelent grade, congratulations" << endl;
        break;
        case 'B' :
        cout <<"Well Done, congrats" << endl;
        break;
        case 'C' :
        cout <<"Good Job" << endl;
        break;
        case 'D' :
        cout <<"You can do better" << endl;
        break;
        case 'E' :
        cout <<"You need to improve" << endl;
        break;
        case 'F' :
        cout <<"You need to study more" << endl;
        break;
    
    }
    return 0;
}
