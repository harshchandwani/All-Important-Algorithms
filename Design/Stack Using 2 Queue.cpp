
void QueueStack :: push(int x){
        q1.push(x);
        int n=q1.size();
        for(int i=0;i<n-1;i++){
            int y = q1.front();
            q1.pop();
            q1.push(y);
        }
}
int QueueStack :: pop(){
        if(q1.empty())
            return -1;
        int x = q1.front();
        q1.pop();
        return x;
}
