int guess(int num);
 

int guessNumber(int n){
    int low=1,high=n,res;
     
    while(high>=low)
    {
       int mid=low+(high-low)/2;
       res=guess(mid);
    if(res==0)
    return mid;
    else if(res==1)
    low=mid+1;
    else 
    high=mid-1;
    }
    return -1;	
}

