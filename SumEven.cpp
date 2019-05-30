#include <iostream> 
#include <algorithm>
#include <cstdlib>


using namespace std;

int main(){
    
    int val1, val2, a, b;
    cout<<"Insert the first number: ";
    cin>>val1;
    cout<<"Insert the second number: ";
    cin>>val2;
    
    if(val1>val2){
        
        a = val2;
        b = val1;
        
    }
    else{
        
        a = val1;
        b = val2;
    }
    
    int len = (b-a)+1;
    int arr[len], i=0, j=0,sum =0;
    
    for(i=a;i<=b;i++){ // Start a for cycle ranging from a to b (both inclusive)
        arr[j] = 0 ;  // initialise the jth component of the array arr to zero
        
        if(i%2 == 0){  //If the modulo of the ith number and 2 gives 0 as remainder of the division then
            
            arr[j] = i ; // store the value corresponding to i into the jth component of arr.
        }
        
        sum+=arr[j]; //sum every component of arr
        
        j = j+1;
    }
    cout<<"The sum of all the even numbers between "<<a<<" and "<<b<<"is:"<<sum<<endl; 
}
