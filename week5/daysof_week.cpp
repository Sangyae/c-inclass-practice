#include<iostream>
using namespace std;    

int main() {
    enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
    Day today = MONDAY;
        if (today == MONDAY || today == TUESDAY || today == WEDNESDAY || today == THURSDAY || today == FRIDAY) {
            cout << "Time to work!" << endl;
        }
        else if (today == SATURDAY) {
                cout << "Enjoy the weekend!" << endl;
            }
        else if (today == SUNDAY) {
                cout << "Relax, it's Sunday!" << endl;
            }
    return 0;
}

// int main() {
//     enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
//     Day today = MONDAY;
//         switch (today) {
//             case MONDAY:
//             case TUESDAY:
//             case WEDNESDAY:
//             case THURSDAY:
//             case FRIDAY:
//                 cout << "Time to work!" << endl;
//                 break;
//             case SATURDAY:
//                 cout << "Enjoy the weekend!" << endl;
//                 break;
//             case SUNDAY:
//                 cout << "Relax, it's Sunday!" << endl;
//                 break;
//         }
//     return 0;
// }