#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin >> n;
    string name;
    string num;
    
    
    map<string, string> phoneList; // read name, number and phoneList
    for(int i = 0; i < n; i++){
        cin >> name;
        cin >> num;
        phoneList[name] = num;
    }
    
    // Declearing map
    map<string,string> j;
    auto it=j.begin(); // initailize of iterator
    string q;
    while( cin >> q ){
        it = phoneList.find(q);
        
        if ( it != phoneList.end() ){   // key is found in phoneList    
            cout << it->first << "=" << it->second <<endl;
        }
        else{ 
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}

