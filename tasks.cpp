#include <bits/stdc++.h>
using namespace std;
void displayPattern(int n){
    int k=n;
    for(int i=n; i!=0; --i){
        for(int j=0; j<k; ++j){
            cout << '*';
        }
        k--;
        cout << "\n";
    }
}
int GetType(int num){
    cout << "Please enter integer\n";
    string s = to_string(num);
    return s.size();
}
int countDigitOccurences(int num){
    string s = to_string(num);
    for(int i=0; i<=9; ++i){
        cout << "The frequency of " << i << " = " << count(s.begin(),s.end(),char(48+i)) << "\n";
    }
    return 0;
}
string Transform(char digit){
    switch(digit){
       case '1': return "one "; break;
       case '2': return "two "; break;
       case '3': return "three "; break;
       case '4': return "four "; break;
       case '5': return "five "; break;
       case '6': return "six "; break;
       case '7': return "seven "; break;
       case '8': return "eight "; break;
       case '9': return "nine "; break;
       case '0': return "zero "; break;
    }
    return "supp";
}

void solveQuadraticEquation(double a, double b, double c, double & discriminant, double & r1, double& r2){
    if(r1==r2) cout << "One root\n";
    else cout << "Two roots\n";
    
}
void solveEquation(double a, double b, double c, double d, double e, double f, double &x , double &y, bool& isSolvable){
    
}
int main() {
    // task 1
    //displayPattern(4);
    
    /* task 2
    int n;
    cin >> n;
    if(GetType(n)%2==1){
        cout << "Odd\n";
    }
    else{
        cout << "Even;
    } */
    
    /* task 4
    cout << "Please enter number\n";\
    int n;
    cin >> n;
    int ss = countDigitOccurences(n); */
    
    /* task 5
    int n;
    cin >> n;
    string s=to_string(n);
    for(int i=0; i<s.size(); ++i){
        cout << Transform(s[i]);
    }
    */
    
    /* task 6
    double a,b,c;
    cin >> a >> b >> c;
    if(b*b-4*a*c>=0){
        double discriminant = b*b-4*a*c;
        double r1 = ((-1*b)+sqrt(discriminant) ) / (2*a);
        double r2 = ((-1*b)-sqrt(discriminant) ) / (2*a);
        solveQuadraticEquation(a,b,c,discriminant,r1,r2);
    }
    else{
        "The equation has no roots\n";
    } */
    
    
    /* task 7
    double a,b,c,d,e,f;
    cin >> a >> b >>c >> d >> e >> f;
    bool isSolvable = true;
    if(a*d-b*c != 0){
        double x = (e*d-b*f) / (a*d-b*c);
        double y = (a*f-e*c)/ (a*d- b*c);
        solveEquation( a,  b,  c,  d,  e,  f, x , y,  isSolvable)
    }
    else{
        cout << "Equation has no solution\n";
        isSolvable = false;
    }
    */
    
    return 0;
}
