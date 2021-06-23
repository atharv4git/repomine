#include <iostream>

using namespace std;

string getDayofWeek(int dayNum){
    string dayName;

    switch (dayNum)
    {
    case 0: dayName="sunday";                    break;   
    case 1: dayName="monday";                    break;    
    case 2: dayName="tuesday";                   break;
    case 3: dayName="wednesday";                 break;
    case 4: dayName="thursday";                  break;  
    case 5: dayName="friday";                    break;  
    case 6: dayName="saturday";                  break;    
    default: dayName="Invalid Day Number";       break;
    }
    return dayName;
}

int main(){

    cout << getDayofWeek(0) << endl;

    return 0;
}