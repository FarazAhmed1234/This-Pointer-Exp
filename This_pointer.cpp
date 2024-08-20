// #include<iostream>
// using namespace std;


// class Demo{

//     private:
//     int a;

//     public:
//     Demo(int a){              
//         a= a;                // This code Run But OutPut Value Not Correct Use Enter 
//     }

//     void display(){
//         cout<<"A value is  : "<<a<<endl;
//     }
// };
// int main(){

// Demo obj(6);
// obj.display();
// return 0;
// }











// #include<iostream>
// using namespace std;


// class Demo{

//     private:
//     int a;

//     public:
//     Demo(int a){
//         //this use ------->>>>>>> Identife 
//         this->a= a;        // Value is Correct
//     }

//     void display(){
//         cout<<"A value is  : "<<a<<endl;
//     }
// };
// int main(){

// Demo obj(6);
// obj.display();
// return 0;
// }







#include<iostream>
using namespace std;

class Rectangle{
    private:
    int l,w;

    public:
    Rectangle(int l, int w): l(l),w(w){}

    Rectangle& setLength(int l){
       this->l=l;
       return*this;
    }

    Rectangle& setWidth(int w){
       this->w=w;
       return*this;
    }

    int area(){
        return l*w;
    }

};
int main(){

    Rectangle obj(11,4);
    obj.setLength(11).setWidth(4);
    cout<<"Area is : "<<obj.area()<<endl;

return 0;
}