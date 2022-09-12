#include <bits/stdc++.h>
 
using namespace std;

int get_two_count(int num){
 
    int count = 0;
 
    while(num%2 == 0 && num>0){
 
        num = num/2;
        count++;
    }
    return count;
 
}
 
int get_steps(int num){
 
    int min_steps = 14;
   
 
    for(int i = num; i<=(num+14); ++i)
    {
        int two_count = get_two_count(i);
        int steps = 14-two_count + (i-num);
        if(steps<min_steps) min_steps = steps;
 
    }
    return min_steps;
}
        
int main(){
 
    
        int n;
        cin>>n;
        vector<int> a(n);
 
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        for(int i = 0; i<n; ++i)
        {
            if(a[i] == 0) {
                cout<<0<<'\n';
            }
            else
            {
            int get_step = get_steps(a[i]);
            cout<<get_step<<'\n';
            }
            
        }
        cout<<'\n';
 
 
    
 
}
