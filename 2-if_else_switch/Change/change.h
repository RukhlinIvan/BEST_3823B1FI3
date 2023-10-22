long long change(int a, int b, int c, int d){
    long long f;
    f = 100 * ((long long)(c-a)) + d - b; 
    if(f < 0){
        f = -1;
        }
    return f;
}