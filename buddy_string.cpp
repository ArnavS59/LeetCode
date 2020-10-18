#include <iostream>
#include <stdlib.h>

using namespace std;

bool buddyStrings(string A, string B)
{
    if(A.length()==0 && B.length()!=0){
        return false;
    }
    if(A.length()!=0 && B.length()==0){
        return false;
    }
    for (int i = 0; i < A.length(); i++)
    {
        j=i+1;
        if(A[i]!=A[j]){
            //swap    
            //check        
        }
    }
    
    
    return true;
}





int main()
{

    string A = "fdf";
    string B = "ba";
    if(buddyStrings(A, B)==true){
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    

    return 0;
}