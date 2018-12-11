#include<iostream>
using namespace std;
void primeGen(int);

int main(){

    int num = 10000,pause;
    primeGen(num);
    cin >> pause;
}

void primeGen(int x){
    //to store whether the i%j ever equaled to 0
    bool prime;
    //iterates all i's between 2 and x where x is the number entered by user
    for(int i=2; i<=x;i++){
        // sets value back to true to test the next number
        prime = true;
        //iterate the dividend j to mod the current i with all j from 2 to i-1
        for(int j=2; j<i-1; j++){
            //actual test for prime using the mod operator
            if((i%j)==0){
                prime = false;
                break;
            }
        }
        // if prime stays true, then the number is prime.
        if(prime){
            cout << i << " is a prime number." << endl;
        }
    }
}
