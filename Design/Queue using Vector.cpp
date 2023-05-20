#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    vector<int>v;
    int first = 0;
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        if(first == v.size()){
            return;
        }
        first++;
    }
    int front(){
        if(first == v.size()){
            return -1;
        } 
        // first++;
        return v[first];
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    
    return 0;
}
