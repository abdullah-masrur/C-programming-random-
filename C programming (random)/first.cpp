#include<iostream>
#include<cmath>

using namespace std;

int main(){
float a,b;
float result;

cin>>a;
cin>>b;

result = a/b;


cout<<"floor "<<a<<"/"<<b<<" = "<<floor(result)<<endl;
cout<<"ceil "<<a<<"/"<<b<<" = "<<ceil(result)<<endl;
cout<<"round "<<a<<"/"<<b<<" = "<<round(result)<<endl;





return 0;
}
