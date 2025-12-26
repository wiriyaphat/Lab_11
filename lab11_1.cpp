#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int i = 0;
    int LuckyMan;
    string space;
    cout << "Press Enter 3 times to reveal your future.\n";
    while(i < 3){
        getline(cin,space);
        i++;
    }
    string grade;
    LuckyMan = rand()%9;
    if (LuckyMan == 0){grade = 'A';}
    else if (LuckyMan == 1){grade = "B+";}
    else if (LuckyMan == 2){grade = 'B';}
    else if (LuckyMan == 3){grade = "C+";}
    else if (LuckyMan == 4){grade = 'C';}
    else if (LuckyMan == 5){grade = "D+";}
    else if (LuckyMan == 6){grade = 'D';}
    else if (LuckyMan == 7){grade = 'F';}
    else if (LuckyMan == 8){grade = 'W';}    
    cout << "You will get " << grade << " in this 261102.";    
    return 0;
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
