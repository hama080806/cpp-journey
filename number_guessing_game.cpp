#include <iostream> 
#include <ctime>
#include <cstdlib>
 using namespace std;

 int main(){

    int guess;
    int tries=0;
    srand(time(NULL));
    int number=(rand()%100 )+1;
    
    cout<< "wlecome to the number guessing game!" << '\n';
     cout<< "guess the number between 1 and 100: ";

    do {
 
        cin>> guess;
        tries++;
        if (guess>number){
            cout<< "too high"<<'\n';
        }
        else if (guess <number){
            cout<< "too low"<<'\n';
        }
        else{
            cout<< " congrats you got the number in "<< tries<< " tries"<<'\n';
        }


    }while (guess!=number);
    return 0;
 }