#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int num = 0;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '('){
            num++;
        }
        if(s[i] == ')'){
            if(num == 0) {
                answer = false;
                return 0;
            }
            else num--;
        }
    }
    
    if(num == 0) answer = true;
    else answer = false;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}