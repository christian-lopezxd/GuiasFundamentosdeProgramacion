#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    for (int i = 0; i < 10; i++) 
    //generar numero aleatorio
        cout << 1 + rand()%3 << " "; 
    return 0;
}