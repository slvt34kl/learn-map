#include   <iostream>
#include   <stack>
using namespace std;
int main(){
    int n;
    cin >>n;
    int nums[n];
    
    while(1){
        for(int i=0;i<n;i++){
            cin >> nums[i];
            if (nums[i]==0){
                return 0;
            }
        }
        stack<int> s;
        int i;
        for(i=0;i<n;i++){
            s.push(i+1);
            while(!s.empty() && s.top()==nums[i]){
                s.pop();
                
            }
        }
        if(s.empty()){
            cout <<"YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
    
    return 0;
}