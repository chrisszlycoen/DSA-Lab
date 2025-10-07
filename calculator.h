namespace calculator{
    int addition(int a, int b){
        return a + b;
    }
    int multiplication(int a, int b){
        return a*b;
    }
    int power(int base, int expo){
        int result=1;
        for(int i = 0; i < expo; i++){
            result *=base;
        }
        return result;
    }
}