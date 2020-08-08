#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char> st;
        queue<char> q;
        int f=0;
        if(s.size()%2!=0) cout<<"NO"<<endl;
        else
        {
            for(int i=0;i<(s.size()/2);i++)
            {
                st.push(s[i]);
            }
            for(int i=(s.size()/2);i<s.size();i++)
            {
                q.push(s[i]);
            }
            for(int i=0;i<s.size();i++)
            {
                if(st.top()=='{'&&q.front()=='}') continue;
                if(st.top()=='['&&q.front()==']') continue;
                if(st.top()=='('&&q.front()==')') continue;
                else 
                {
                    f=1;
                    break;
                }
                q.pop();
                st.pop();
            }
        }
        if(f==1) cout<<"NO"<<endl;
        else if(f==0) cout<<"YES"<<endl;
    }
    return 0;
}
