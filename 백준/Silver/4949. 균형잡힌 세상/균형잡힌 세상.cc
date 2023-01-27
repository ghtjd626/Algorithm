
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    while(1){
        string text;
        stack<char> stack;

        getline(cin, text);
        if(text == ".") break;
        else{
            for(int i = 0; i < text.length() - 1 ; i++ ){
                if(text[i] == '(' || text[i] == '[') stack.push(text[i]);
                if (text[i] == ')'){
    				if (!stack.empty() && stack.top() == '(') stack.pop();
    				else { 
    				    cout << "no" << '\n';
    				    break;
    				}
    			}
                if (text[i] == ']'){
    				if (!stack.empty() && stack.top() == '[') stack.pop();
    				else { 
    				    cout << "no" << '\n';
    				    break;
    				}
    			}
    			
    			if (stack.empty() && i == text.length() - 2) cout << "yes" << '\n';
			    else if (!stack.empty() && i == text.length() - 2) cout << "no" << '\n';
            }
        }
    }
}
