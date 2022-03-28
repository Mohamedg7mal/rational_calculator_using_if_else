/* FCI - programming 1 - 2022 - Assignment 2
// Program Name : Rational Number Calculator 
// Program Description : this program calculate the rational number only ....if you want to calculate rational number enter numbers in form a b c d 
// Last Modification : 21/3/2003
// Author and Id and Group : Mohamed Gamal 20211080 Group A
// Teaching Assistant : Dr. Mohamed El Ramly
 





# include<iostream>
# include<cmath>
using namespace std;
int main()
{
    char op;
    int a , b , c , d , e , f , x , y;
    cout<<"please choose whether you need to enter 3 numbers or 4: ";
    cin>>x;
    cout << "Enter the operator( + , - , * , / ) : ";
    cin >> op;
    if (x==4)
    {   
        cout << "Enter a , b , c , d  but notice that   (num1---> a , num2 ---> b , num3 ---> c , num4 ---> d ).....and the general form is a/b op c/d  : ";
        cin >> a  >>  b >> c >> d;
        switch ( op )
    {
        case '+':
            e = (a * d) + (c * b);                             //common den.
            f = b * d ;
            if (e<0 && f>0 ||  e>0 && f<0)
            {
                cout << a << "/" << b << "+" << c << "/" << d << "=" << "-" << abs(e)<< "/" << abs(f);
            }
            else if (e<0 && f<0)
            {
                cout << a << "/" << b << "+" << c << "/" << d << "=" << abs(e)<< "/" << abs(f);
            }
            else if (f==0 )
            {
                cout<<"error";
            }
            else if (e==0 && f>0 || e==0 && f<0)
            {
                cout<<"zero";
            }
            else
            {
            cout << a << "/" << b << "+" << c << "/" << d << "=" << e<< "/" << f;
            }
            
            break ;
        case '-' :
            e = (a * d) - (c * b);
            f = b * d ;
            if (e<0 && f>0 ||  e>0 && f<0)
            {
                cout << a << "/" << b << "-" << c << "/" << d << "=" << "-" << abs(e)<< "/" << abs(f);
            }
            else if (e<0 && f<0)
            {
                cout << a << "/" << b << "-" << c << "/" << d << "=" << abs(e)<< "/" << abs(f);
            }
            else if (f==0 )
            {
                cout<<"error";
            }
            else if (e==0 && f>0 || e==0 && f<0)
            {
                cout<<"zero";
            }
            else
            {
            cout << a << "/" << b << "-" << c << "/" << d << "=" << e << "/" << f;
            }
            break;
        case '*' :
            e = a * c;
            f = b * d;
            if(f==0  ){
                cout<<"Erorr" <<"\n";
            }
            else if (c==0 || a==0){
                cout<<"the result"<<"="<<0<<"\n";
            }
            else {
            if(e < 0 && f < 0){
             cout << a << "/" << b << "/" << c << "/" << d << "=" << abs(e) << "/" <<abs(f);
            }
            else if (e<0 && f>0 ||  e>0 && f<0){
                cout << a << "/" << b << "*" << c << "/" << d << "=" << "-" << abs(e)<< "/" << abs(f);
            }
            cout << a << "/" << b << "*" << c << "/" << d << "=" << e << "/" << f;
            }
            break;
        case '/' :
            e = a * d;  // b and d musn't be = 0 to run the program well
            f = b * c;
            if(e < 0 && f < 0){
             cout << a << "/" << b << "/" << c << "/" << d << "=" << abs(e) << "/" <<abs(f);
            }
            else if( e>0 && f<0){
                cout << a << "/" << b << "/" << c << "/" << d << "=" <<"-"<< e << "/" << abs(f);

            }
            else if (f==0){
                cout << "error" <<"\n" ;
            }
            else if (e==0){
                cout << "the result" << "=" <<0<< "\n";
            }
            else{
                 cout << a << "/" << b << "/" << c << "/" << d << "=" << e << "/" <<f;
            
            }

            break;

        default :
            cout << op << "is an invalid operator";


    }

}

else 
{
    cout<<"please enter your 3 numbers (a , b , c): ";
    cin>>a>>b>>c;

    switch (op)
    {
    case '+' :
        e = (a * c) + b;
        f = c;
        if (e<0 && f>0 ||  e>0 && f<0)
            {
                cout << a << "+" << b << "/" << c <<  "=" << "-" << abs(e)<< "/" << abs(f);
            }
            else if (e<0 && f<0)
            {
                cout << a << "+" << b << "/" << c <<  "=" << abs(e)<< "/" << abs(f);
            }
            else if (f==0 )
            {
                cout<<"error";
            }
            else if (e==0 && f>0 || e==0 && f<0)
            {
                cout<<"zero";
            }
            else
            {
            cout << a << "+" << b << "/" << c <<  "=" << e<< "/" << f;
            }
            
        break ;
    case '-' :
            e = (a * c) - ( b);
            f = c ;
            if (e<0 && f>0 ||  e>0 && f<0)
            {
                cout << a << "-" << b << "/" << c << "=" << "-" << abs(e)<< "/" << abs(f);
            }
            else if (e<0 && f<0)
            {
                cout << a << "-" << b << "/" << c  << "=" << abs(e)<< "/" << abs(f);
            }
            else if (f==0 )
            {
                cout<<"error";
            }
            else if (e==0 && f>0 || e==0 && f<0)
            {
                cout<<"zero";
            }
            else
            {
            cout << a << "-" << b << "/" << c  << "=" << e << "/" << f;
            }
        break;
    case '*' :
            e = a * b;
            f = c;
            if(f==0){
                cout<<"Erorr" <<"\n";
            }
            else if (e==0 ){
                cout<<"the result"<<"="<<0<<"\n";
            }
            else {
            if(e < 0 && f < 0){
             cout << a << "*" << b << "/" << c <<  abs(e) << "/" <<abs(f);
            }
            else if (e<0 && f>0 ||  e>0 && f<0){
                cout << a << "*" << b << "/" << c << "=" << "-" << abs(e)<< "/" << abs(f);
            }
            cout << a << "*" << b << "/" << c <<  "=" << e << "/" << f;
            }
        break;
    case '/' :
            e = a * c;  // b and d musn't be = 0 to run the program well
            f = b ;
            if(e < 0 && f < 0){
             cout << a << "/" << b << "/" << c << "=" << abs(e) << "/" <<abs(f);
            }
            else if( e>0 && f<0){
                cout << a << "/" << b << "/" << c << "=" <<"-"<< e << "/" << abs(f);

            }
            else if (f==0){
                cout << "error" <<"\n" ;
            }
            else if (e==0){
                cout << "the result" << "=" <<0<< "\n";
            }
            else{
                 cout << a << "/" << b << "/" << c << "=" << e << "/" <<f;
            
            }

        break;

    default :
            cout << op << "is an invalid operator";


    }  
}
    return 0;
}
