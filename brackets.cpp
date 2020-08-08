#include <bits/stdc++.h> 
using namespace std; 

bool areParanthesisBalanced(string str) 
{ 
    stack<char> s; 
    char x; 
    for (int i = 0; i < str.size(); i++) { 
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') { 
            s.push(str[i]); 
            continue; 
        } 
        if (s.empty()) 
            return false; 
  
        switch (str[i]) { 
        case ')': 
  
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
        case '}': 
  
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
  
        case ']': 
  
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
    return (s.empty()); 
} 
  
 
int main() 
{ 
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
    if (areParanthesisBalanced(str)) 
        cout <<"YES"<<endl; 
    else
        cout <<"NO"<<endl; 
    }
    return 0; 
} 
