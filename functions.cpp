/*#include<bits/stdc++.h>
using namespace std;
void myfunction(){
    cout<<"ayush is selmon";
}
int main()
{
     myfunction();
     cout<<endl;
     myfunction();
     cout<<endl;
     myfunction();
     return 0;
}
     */


/*#include<bits/stdc++.h>
using namespace std;
void myfunction(int num){
    cout<<num<<endl;
}
int main(){
    myfunction(1);
    myfunction(2);
    myfunction(3);
    return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
void myfunction(string name){
    cout<<name<<endl;
}
int main(){
    myfunction("Ayush");
    myfunction("selmon");
    myfunction("shera");
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int  myfunction(int x){
    return 5+x;
}
int main(){
    cout<<myfunction(5);
    return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
int myfunction(int x,int y){
return 10+x+y;
}
int main(){
    cout<<myfunction(10,10);
    return 0;
}*/

//pass by reference
/*#include<bits/stdc++.h>
using namespace std;
void swap_numbers(int &x,int &y){
   int z=x;
   x=y;
   y=z;
}
int main(){
   
    int firstnum=10;
    int secondnum=20;
    
     cout<<"before swapping "<<"\n";
     cout<<firstnum<<" "<<secondnum<<"\n";

     cout<<"after swapping"<<"\n";
     swap_numbers(firstnum,secondnum);

     cout<<firstnum<<" "<<secondnum<<"\n";
     return 0;

     
}*/


//array;


#include<bits/stdc++.h>
using namespace std;
void myfunction(int mynumbers[5]){
    for(int i=0;i<5;i++){
        cout<<mynumbers[i]<<" ";
    }
}
int main(){
    int mynumbers[5]={1,2,3,4,5};
    myfunction(mynumbers);
    return 0;
}







