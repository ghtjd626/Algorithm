#include <iostream>
#include <queue>

using namespace std;

int main () {
    int n, k;
    queue<int> Q;
    vector<int> result;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        Q.push(i+1);
    }

    while(Q.size() != 0){
        for (int i = 1; i <= k; i++) {
            if(i != k) {
                int temp = Q.front();
                Q.pop();
                Q.push(temp);
            } else{
                int temp = Q.front();
                Q.pop();
                result.push_back(temp);
            }
        }
    }

    cout << "<";
    for(int i = 0; i < result.size(); i++) {
      cout << result[i];
      if(i != result.size() - 1) {
        cout << ", ";
      }  
    }
    cout << ">";

}