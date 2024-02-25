#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<double> numList;

int intro() {
    cout<<"+-----------------------------------------------+"<<endl;
    cout<<"|       Computer Science and Engineering        |"<<endl;
    cout<<"|      CSCE 1040 - Computer Programming II      |"<<endl;
    cout<<"| Roman Pittana rrp0130 romanpittana@my.unt.edu |"<<endl;
    cout<<"+-----------------------------------------------+"<<endl;
    return 0;
}

int menu() {
    cout<<"----------------- M E N U -----------------"<<endl;
    cout<<"| 1. Display list of numbers              |"<<endl;
    cout<<"| 2. Add number to list of numbers        |"<<endl;
    cout<<"| 3. Remove number from list of numbers   |"<<endl;
    cout<<"| 4. Compute average of list of numbers   |"<<endl;
    cout<<"| 5. Compute minimum of list of numbers   |"<<endl;
    cout<<"| 6. Compute maximum of list of numbers   |"<<endl;
    cout<<"| 7. Exit program                         |"<<endl;
    cout<<"-------------------------------------------"<<endl;

    return 0;
}

int main() {
    intro();
    int input;
    while(input != 7) {
        menu();
        cin >> input;
        if(cin.fail() || input < 1 || input > 7) { // incorrect input
            cout<<"Please use and input from 1 through 7"<<endl;
            cin.clear();
            cin.ignore();
        }
        switch(input) {
            case 1:  {//option 1:  Display list of nums
                for(int i = 0; i < numList.size(); i ++) {
                    cout<<numList.at(i)<<" ";
                }
                cout<<endl;
                break;
            }
            case 2: {//option 2: Add num to the list
                cout<< "Number to add: " << endl;
                double temp;
                cin>>temp;
                numList.push_back(temp);
                cout<<temp<<" added to list of numbers."<<endl;
                break;
            }
            case 3: {// option 3: Remove num from list
                if(numList.size() == 0) {
                    cout<< "Empty List. Unable to remove number from list" << endl;
                    break;
                }
                cout<<"Number to remove from the list: "<< endl;
                double temp;
                cin>>temp;
                for(int i = 0; i < numList.size(); i ++){
                    if(numList.at(i) == temp) {
                        numList.erase(numList.begin() + i);
                        cout<<temp<<" removed from the list."<<endl;
                        goto end_of_case;
                    }
                }
                cout<<numList.at(numList.size()-1)<< " removed from the list."<<endl;
                numList.pop_back();
                end_of_case: break;
            }
            case 4: {// option 4: compute average
                double sum;
                if(numList.size() == 0) {
                    cout<< "Empty List. Unable to calculate average" << endl;
                    break;
                }
                for(int i = 0; i < numList.size(); i ++) {
                    sum = sum + numList.at(i);
                }
                cout<<"The average of " << numList.size() << " numbers is: " << sum/numList.size()<<endl;
                break;
            }
            case 5: {// option 5: compute the minimum
                if(numList.size() == 0) {
                    cout<< "Empty List. Unable to compute minimum" << endl;
                    break;
                }
                double min = numList.at(0);
                for(int i = 0; i < numList.size(); i ++) {
                    if(min > numList.at(i)) {
                        min = numList.at(i);
                    }
                }
                cout<<"The minimum of " << numList.size() << " numbers is: " << min<<endl;
                break;
            }
            case 6: {//option 6: compute the maximum
                if(numList.size() == 0) {
                    cout<< "Empty List. Unable to compute maximum" << endl;
                    break;
                }
                double max = numList.at(0);
                for(int i = 0; i < numList.size(); i ++) {
                    if(max < numList.at(i)) {
                        max = numList.at(i);
                    }
                }
                cout<<"The max of " << numList.size() << " numbers is: " << max<<endl;
                break;
            }
        }

        cin.clear();
        cin.ignore();    
    }
    cout<<"Exiting program..."<<endl;
    return 0;
}