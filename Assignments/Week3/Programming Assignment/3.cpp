//Cheated

#include <iostream>
#include <vector>
#include<string.h>
using namespace std;
class Stack {
   	public: vector<char> data_; // write appropriate Access specifier.
    int top_;
    public:
    int empty() { return (top_==-1); }
    void push(char x) { data_[++top_]=x;}
    void pop() { --top_; }
    char top() {return data_[top_]; }
};

int main() {
    Stack s;
    char str[20];
    cin >> str;

    s.data_.resize(100);
    s.top_ = -1;
    for(int i = 0; i < strlen(str) - 1; ++i)
        s.push(str[i]);
        while (!s.empty()) {
            cout << s.top(); s.pop();
        }
    return 0;
}
