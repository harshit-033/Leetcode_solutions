class Solution {
public:
    int solve(int a, int b, char c){
        switch (c){
            case '+':
                return a+b;
                break;
            case '/':
                return b/a;
                break;
            case '*':
                return a*b;
                break;
            case '-':
                return b-a;
                break;

            default:
                return 0;
        }
    }

    int evalRPN(vector<string>& tokens) {

        stack<int> s;

        int len=tokens.size();
        for(int i=0;i<=len-1;i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                int sum=solve(a,b,tokens[i][0]);
                s.push(sum);

            }
            else{
                int num=stoi(tokens[i]);
                s.push(num);
            }
        }
        return s.top();

    }
};