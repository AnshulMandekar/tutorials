#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string , int > student;
    student["asnhul"] = 8 ;
    student["ojas"] = 9 ; 
    student["Gujju"] = 9.5;
    
    

    map< string , int> :: iterator iter;
    for(iter = student.begin() ; iter != student.end()  ; iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}
