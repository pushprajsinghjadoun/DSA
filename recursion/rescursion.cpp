#include<iostream>

using namespace std;


void replacePi(char input[]) {
	int arraysize = sizeof(input)/sizeof(input[0]);
    if(arraysize==0)
    {
        return;
    }
    replacePi(input+1);
    
    
    
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
