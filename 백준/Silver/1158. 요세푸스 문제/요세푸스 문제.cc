#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k;
    int result[5001];
    int resultIdx = 0;

    queue<int> q;
    
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++ ){
        q.push(i);
    }
    
    while(!q.empty()){
        
        for(int i = 0; i < k - 1; i++){
            int temp = q.front();
            q.push(temp);
            q.pop();
        }
        result[resultIdx++] = q.front();
        q.pop();
    }
    cout << '<';
    for(int i = 0;  i< n; i++) {
        cout << result[i];
        if(i != n-1) cout << ',' << ' ';
    }
    cout << '>';
}
