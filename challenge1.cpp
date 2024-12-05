#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Hello welxome to Frank's carpet cleaning service"<<endl;
    cout<<"How many small room would you like to cleaned?";
    cin>>x;
    cout<<"How many large room would you like to cleaned?";
    cin>>y;
    cout << "Estimate for carpet cleaning serice"<< endl;
    cout << "Number of small rooms:"<< x<<endl;
    cout << "Number of large rooms:"<< y<<endl;
    cout<< "Price per small room: $25"<<endl;
    cout<< "Price per large room: $35"<<endl;
    cout<< "Cost :"<< (x*25+y*35) << endl;
    cout<< "Tax :"<<(0.06*(x*25+y*35))<< endl;
    cout<<"======================================"<<endl;
    cout<<"Total estimate:"<<((x*25+y*35)+(0.06*(x*25+y*35)))<<endl;
    cout<<"This estimate is valid for 30 days";




}