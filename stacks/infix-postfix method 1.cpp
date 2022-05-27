int isoperand(char x){
    if (x=='+' || x=='-' || x== '*' || x=='/')
    {
        /* code */
        return 0 ;
    }else{
        return 1 ;
    }

    
}
int preference_order(char x){
    if(x=='+' ||x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 2 ;
    }
    return 0 ;
}



char *convert(char *infix){
    struct stack st ;//assuming already initialized
    char *postfix = new char[strlen(infix)+1];
    int i=0,j=0;
    while(infix[i]!='\0'){
        if (isoperand(infix[i]))
        {
            /* code */
            postfix[j++]=infix[i++] ;
        }else{
            if(preference_order(infix[i])>preference_order(stackTop(st))){
                push(&st,infix[i++]) ;
            }else{
                postfix[j++]=pop(&st) ;
             }
        }
        
    }

}

while(!isEmpty(st)){
    postfix[j++]=pop(&st) ;
}
postfix[j]='\0' ;
return postfix ;