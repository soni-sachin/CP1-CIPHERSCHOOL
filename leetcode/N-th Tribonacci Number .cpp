int tribonacci(int n) {
        int first=0,second=1,third=1;
        if(n<2)
            return n;
        for(int i=3;i<=n;i++){
            int newElement=first+second+third;
            first=second;
            second=third;
            third=newElement;
        }
        return third;
    }
