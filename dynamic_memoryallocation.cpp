#include<bits/stdc++.h>
using namespace std;
class My_class{
    string x;
    public:
    My_class(const string &a): x(a){}
    bool isPalindrome() const{
        int n=x.size();
        int l=0, r=n-1;
        while(l<r){
            if(x[l]!=x[r]) return false;
            l++;
            r--;
        }
        return true;

    }
    ~ My_class(){
        cout<<"Destructor called for "<<x<<endl;
    }
};
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;

 void *ptr=operator new(sizeof(My_class)); // Allocate memory for My_class
  My_class *obj= new(ptr)My_class(s);
    if(obj->isPalindrome()){
        cout<<"String is palindrome"<<endl;}
    else{
        cout<<"String is not palindrome"<<endl;
    }
    obj->~My_class(); // Explicitly call destructor
    operator delete(obj);


}