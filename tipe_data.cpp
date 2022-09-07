#include <iostream>
#include <limits>

using namespace std;

int main(){

    // bilangan bulat
    int a = 5; // 32-bit
    unsigned int ab = 5; 
    long b = 6;
    short c =7;

    // bilangan bulat
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a'; //character 1-bit

    // boolean
    bool g = true; // true/false

    //cout << a << endl;
    //cout << sizeof(a) << " Byte"<< endl;
    //cout << b << endl;
    //cout << sizeof(b) << " Byte"<< endl;
    //cout << c << endl;
    //cout << sizeof(c) << " Byte"<< endl;
    //cout << "ini int/bilangan bulat max" << numeric_limits<int>::max() << endl;
    //cout << "ini int/bilangan bulat min" << numeric_limits<int>::min() << endl;
    //cout << "ini long max " << numeric_limits<long>::max() << endl;
    //cout << "ini long min " << numeric_limits<long>::min() << endl;
    //cout << "ini short max " << numeric_limits<short>::max() << endl;
    //cout << "ini short min " << numeric_limits<short>::min() << endl;
    //cout << "ini short max " << numeric_limits<short>::max() << endl;
    //cout << "ini short min " << numeric_limits<short>::min() << endl;
    cout << "ini unsigned int max " << numeric_limits<unsigned int>::max() << endl;
    cout << "ini unsigned int min " << numeric_limits<unsigned int>::min() << endl;

}