char* largestEven(char* s) {
  int  i=strlen(s)-1;
    while(i>=0){
    if((s[i]-'0')%2==0)
    {
        s[i+1]='\0';
        return s;
    }
    i--;
  }
  s[0]='\0';
  return s;
}