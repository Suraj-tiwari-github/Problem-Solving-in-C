/*
    *C++ program to check for balanced parenthesis in an expression using stack. Given an expression as string comprising of opening and closing characters of parenthesis-() , curly braces-{} and square beackets-[], we need to chech whether symbols are balanced or not.
*/

#include<stack>
#include<iostream>
#include<string>
using namespace std;
//Function to check whether two characters are opening and closing of same type.
bool ArePair(char opening, char closing) {
    // if opening and closing match then we return true otherwise false.
    if (opening=='(' && closing ==')')
        return true;
    else if (opening=='[' && closing==']')
        return true;
    else if (opening=='{' && closing=='}')
        return true;
    return false;
}

bool AreParenthesisBalanced(string exp) {
    //creating a stack STL(standard template library)
    stack <char> s;
    for (int i=0; i<exp.length(); i++) {
        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='[')// anythings opens push it in the stack.
            s.push(exp[i]);
        else if (exp[i]==')' || exp[i]=='}' || exp[i]==']') {
            if (s.empty() ||!ArePair(s.top(), exp[i]))
                return false; // !arePair changes from true->flase & false->true. 
            else //* if all pairs are true !(not) changes to false and if becames flase and else get executes.
            {
                s.pop();
            }
        }
    }
    return s.empty()?true: false; // s.empty return true that means parenthesis is balanced.
}

int main() {
    /*code to test the function AreParenthesesBalanced */
    string expression;
    cout<<"Enter an expresssion:"; // input an expression from the user
    cin>>expression;
    if (AreParenthesisBalanced(expression))
        cout<<"Balanced\n";
    else
    {
        cout<<"Not balanced\n";
    }

}