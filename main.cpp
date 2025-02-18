//  main.cpp
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    map <int, string>  tel;

    while (N--) {
        string command;
        cin >> command;
        
        if (command == "add") {
            int numb;
            string name;
            cin >> numb >> name;
            tel[numb] = name;
        }
        else if (command == "find") {
            int numb;
            cin >> numb;
            const auto found = tel.find(numb);
            if(found==tel.cend())
                cout <<"not found\n";
            else
               cout << tel[numb] << endl;
        }
        else if (command == "del") {
            int numb;
            cin >> numb;
            tel.erase(numb);
        }
    }

    return 0;
}
