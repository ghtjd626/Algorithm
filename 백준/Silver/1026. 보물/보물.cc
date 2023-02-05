#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b){ 
  return a > b; 
}

int main()
{
    int a[51], b[51];
    int result = 0;
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
         cin >> b[i];
    }
    
    sort(a, a+n);
    sort(b, b+n, desc);
    
    for(int i = 0; i < n; i++){
        result += a[i] * b[i];
    }
    
    cout << result;
    
}
