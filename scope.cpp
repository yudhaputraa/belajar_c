#include <iostream>

using namespace std;

// global scope atau variabel global
int x = 10;

int ambil_global(){
    return x; // mengambil variabel global
}

int x_local(){
    int x = 5; //variabel local scopenya x_local()
    return x;
}

int main()
{
    cout<< "1.variabel global : "<< x <<endl;
    // ini variabel local utk main
    int x = 8;
    cout<<"2.variabel local main : "<<x<<endl;
    cout<<"3.variabel ambil_global : "<< ambil_global() <<endl;
    cout<<"4.variabel local main : "<<x<<endl;
    cout<<"5.variabel x_global : "<< x_local() <<endl;
    cout<<"6.variabel local main : "<<x<<endl;
    {
        cout<<"7.variabel local main : "<<x<<endl;
        //blok scope
        int x=1;
        cout<<"8.variabel blok scope : "<<x<<endl;
        cout<<"9.variabel ambil_global : "<< ambil_global() <<endl;
    }
    cout<<"10.variabel local main : "<<x<<endl;
    return 0;
}
