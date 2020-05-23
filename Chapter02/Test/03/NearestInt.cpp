#include <iostream>
using namespace std;

/* Function declare */
void roundToNearestInt(float & x, int & res);

int main() {
    float a;
    int result;
    cout << "Input a float x: " << endl;
    cin >> a;
    roundToNearestInt(a, result);
    cout << "The nearest int is: " << result << endl;
    return 0;
}

void roundToNearestInt(float & x, int & res) {
    if(x >= 0) {
        res = int(x + 0.5);
    }else{
        res = int(x - 0.5);
    }
}
