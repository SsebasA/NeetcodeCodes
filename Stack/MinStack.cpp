#include <iostream>
#include <vector>

using namespace std;

class MinStack{
    private:
        int* _data;
        int _capacity;
        int _top;
    
    public:
        MinStack(){
            _capacity = _capacity;
            _data = new int[_capacity];
            _top = 0;
        }

        void push(int val){
            if(_top == _capacity){
                throw std::overflow_error("stack overflow");
            }
            _data[_top] = val;
            ++_top;
        } 

        void pop(){
            if(_top == 0){
                throw std::underflow_error("underflow");
            }
            --_top;
            cout <<  _data[_top];
        }

        int top(){
            return _data[_top];

        }

        int getMin(){
            int minVal = _data[0];
            for(int i = 1; i < _top; i++){
                if(_data[i] < minVal){
                    minVal = _data[i];
                }
            }
            return minVal;
        }

};

int main(){
    MinStack minStack;
    minStack.push(1);
    minStack.push(2);
    minStack.push(0);
    minStack.getMin();
    minStack.pop();
    minStack.top();
    minStack.getMin();
}