#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d;
    int sw;
    cout << "1.część rzeczywista: " << endl;
    cin >> a;
    cout << "1.część urojona: " << endl;
    cin >> b;
    cout << "2.część rzeczywista: " << endl;
    cin >> c;
    cout << "2.część urojona: " << endl;
    cin >> d;
    cout << "1-dzielenie\n2-mnożenie\n";
    cin >> sw;
    switch (sw){
        case 1:{
            cout << "(" << (a*c+d*b)/(c*c+d*d) << ")" << "+(" << (a*d+c*b)/(c*c+d*d) << ")j" << endl;
        }
        break;
        case 2:{
            cout << "(" << (a*c-d*b) << ")+" << "(" << (a*d+d*c) << ")j" << endl;
        }
    }
    return 0;
}
