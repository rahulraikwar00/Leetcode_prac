class MyStack {
public:
stack<int> st;
MyStack() {

}

void push(int x) {
  st.push(x);  
}

int pop() {
    int temp=st.top();
    st.pop();
    return temp;
}

int top() {
    int t=st.top();
    return t;
}

bool empty() {
    if(st.empty())
        return true;
    return false;
}
};