#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<string, greater<string>> set;
    int n;

    cin >> n;

    while(n--){
        string name;
        string action;

        cin >> name >> action;
        if(action == "enter"){
            set.insert({
                name
            });
        } else {
        set.erase({
            name
        });
        }
    }

    for(auto i = set.begin(); i != set.end(); i++ ){
        cout << *i << '\n';
    }



}
