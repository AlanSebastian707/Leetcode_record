bool isSubsequence(char* s, char* t) {
    int i=0,j=0;
    while(t[j]!='\0'){
        if(s[i]==t[j]){
            i++;
        }
        j++;
        if(i==strlen(s))break;
    }
    if(i==strlen(s))return true;
    else return false;
}