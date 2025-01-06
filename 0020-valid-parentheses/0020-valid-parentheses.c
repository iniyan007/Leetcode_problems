bool isValid(char* s) {
    char st[1000000];
    int top = -1;
    for(int i = 0;i<strlen(s);i++){
        char c = s[i];
        if(c == '(' || c == '{' || c == '['){
            st[++top] = c;
        }
        else if(top!= -1){
            if(c == ')' && st[top] == '('|| c == '}' && st[top] == '{'|| c == ']' && st[top] == '[')
            top-=1;
            else return false;
        }
        else{return false;}
    }
    if (top == -1)return true;
    return false;
}