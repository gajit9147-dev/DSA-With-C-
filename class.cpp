//Post fix Evaluation
//stoi string to integer
#include <bits/stdc++.h>
using namespace std;
string PostfixEvaluation(string &s){
    stack<int> st;
    stringstream ss(s);
    string token;

    while(ss >> token){
        if(token == "+" || token == "-" || token == "*" || token == "/"){
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if(token == "+") st.push(a+b);
            else if(token == "-") st.push(a-b);
            else if(token == "*") st.push(a*b);
            else if(token == "/") st.push(a/b);
        }
        else{
            st.push(stoi(token));
        }
    }
    if (st.size() != 1) {
        return "Not a valid postfix expression";
    }
    return to_string(st.top());    
}


int main(){
    string s = "5 3 2 4 * +";
    string ans = PostfixEvaluation(s);
    if (ans == "Not a valid postfix expression") {
        cout << ans << endl;
    } else {    
        cout << ans << endl;
    }

    return 0;
}

// liberary stringsream

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string str = "c++,java,python";
//     stringstream ss(str);
//     string token;
//     while(ss >> token){
//         cout<<token<<endl;
//     }
//     return 0;
// }