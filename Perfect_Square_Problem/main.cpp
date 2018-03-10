#include <iostream>
using namespace std;

int perfect_Square(int i){

    int result = i*i;
    //checking if result is odd by checking out if the remainder is 1 or not
    if(result%10%2==0 || result%100/10%2==0){
        return 1;//we failed
    }else{
        return result;//otherwise we passed and it will return the answer
    }

}

int main()
{
    //if you know of any numbers you can just check here using this test
    int pf;
    pf = perfect_Square();
    cout << "Test: " << pf << endl;
    return 0;
}
