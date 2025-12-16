#include <iostream>
#include <cstdlib>  // for atoi

using namespace std;

int main(int argc, char* argv[]) {
    // Check if two arguments are provided
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <num1> <num2>" << endl;
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int sum = a + b;

    cout << "Sum = " << sum << endl;

    return 0;
}
