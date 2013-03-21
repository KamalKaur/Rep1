#include <iostream>

using namespace std;

int main()

{ char ch,ans,var,chr;
    cout<< "***********...Welcome to quiz game***********" << endl;
    cout<<"Do you want to continue?? \n (Y/N)";
    cin>>ans;
    if(ans=='y')
    {


    cout<<"\n\n"<<"Here is the first question for you..";
    cout<<"2*19=____?\n";
    cout<<"(a) 18\n";
    cout<<"(b) 38\n";
    cout<<"(c) 36\n";
    cout<<"(d) None of the above";
    cout<<"\n\n Enter a,b,c or d\n";
    cin>>ch;
    if(ch=='b')
    {
        cout<<"Right answer";
    }
    else{
    cout<<"wrong...!!";
    }
    cout<<"Do you want to try second question ?";
    cin>>var;
    if(var=='y')
    {
        cout<<" Here is the second question for you..";
        cout<<"85/5=___?\n";
        cout<<"(a) 35\n";
        cout<<"(b) 17\n";
        cout<<"(c) 18\n";
        cout<<"(d) none of the above\n";
        cout<<"\n\n Enter a,b,c or d\n";
        cin>>chr;
        if (chr=='b'){
        cout<<"Congos... you won... ";}
        else{ cout<<" Sorry wrong answer..";}


    }
    }
    else if(ans=='n')
    {cout<<" Ok.. your wish.. ";}
    else{
    cout<<"enter 'y' or 'n' and run the program again.. Thank You.. :) \n\n\n\n";}

return 0;
}
