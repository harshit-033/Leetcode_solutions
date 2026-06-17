#define size_stac 10001

char stack[size_stac];
int top = -1;
char reverse(char rev){
    if (rev==')')return '(';
    if (rev=='}')return '{';
    if (rev==']')return '[';
    return '#';

}
void push(char value) {
    top++;
    stack[top] = value;
}

char pop() {

    char x=stack[top];
    top--;
    return x;
}

bool isValid(char* s) {
    int len=strlen(s);
    int count=0;
    char c;
    for (int i=0;i<len;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            push(s[i]);
            count +=1;
            continue;
        }
        if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(i==0){
                return false;
            }
            if(top==-1){
                return false;
            }
            c=pop();
            if(c!=reverse(s[i])){
                return false;
            }
            count -=1;
        }

    }
    if (count==0){
        return true;
    }
    else{
        return false;
    }


}