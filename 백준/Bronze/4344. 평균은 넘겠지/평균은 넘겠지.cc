
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c;
    
    cin >> c;
    
    while(c--){
        int num;
        int stdNum[1001];
        int avg = 0;
        double high = 0;
        
        cin >> num;
        
        for(int i = 0; i < num; i++){
            cin >> stdNum[i];
            avg += stdNum[i];
        }
        
        avg /= num;
        
        for(int i = 0; i < num; i++){
            if(avg < stdNum[i]) high++;
        }
        
        printf("%.3f", high / double(num) * 100);
        cout << "%\n";
        // cout << high / double(num) * 100 << "%" << "\n";
    }
}
