
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int N;
    deque<int> deque;
    
    cin >> N;
    
    while(N--) {
        string cmd;
        
        cin >> cmd;
        
        if(cmd == "push_front"){
            int X;
            cin >> X;
            deque.push_front(X);
        }
        if(cmd =="push_back"){
            int X;
            cin >>X;
            deque.push_back(X);
        }
        if(cmd =="pop_front"){
            if(deque.empty()) cout << "-1" << '\n';
            else {
                cout << deque.front() << '\n';
                deque.pop_front();
            }
        }
        if(cmd =="pop_back"){
            if(deque.empty()) cout << "-1" << '\n';
            else {
                cout << deque.back() << '\n';
                deque.pop_back();
            }
        }
        if(cmd =="size"){
            cout << deque.size() << '\n';
        }
        if(cmd =="empty") {
            if(deque.empty()) cout << "1" <<'\n';
            else cout << "0" << '\n';
        }
        if(cmd =="front"){
            if(deque.empty()) cout << "-1" << '\n';
            else cout << deque.front() << '\n';
        }
        if(cmd =="back"){
            if(deque.empty()) cout << "-1" << '\n';
            else cout << deque.back() << '\n';
        }
    }
}
