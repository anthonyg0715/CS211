#include <iostream>
using namespace std;

bool equivalentArrays(int a[], int b[], int size){
    int c=0;
    //checking for equivalence
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(a[i]==b[j]){
                int d = i;
                int e = j;
                //Third for loop to check for non equivalence
                for(int f=0; f<size; f++){
                    if(a[d]!=b[e]){//if they are not the same size keep c=0 and break
                        c=0;
                        break;
                    } else {//otherwise increment c
                        c++;
                    }
                    if((d+1)>=size){//greater than the size of the array
                        d=0;//so set back to zero
                    } else{//otherwise keep incrementing
                        d++;
                    }
                    if((e+1)>=size){//if the second array is greater than the size
                        e=0;//set back to zero
                    } else {//otherwise keep incrementing
                        e++;
                    }

                }
                if(c==size){//finally we just check whether both arrays are equal or not if yes return true
                    return true;
                }
            }

        }
    }
    return false;//otherwise not equal return false

}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {4,5,1,2,3};
    cout << "a[] equals b[]?: " << equivalentArrays(a,b,5) << endl;//true
    cout << "b[] equals a[]?: " << equivalentArrays(b,a,5) << endl;//true

    int a1[] = {5, 4, 2, 1};
	int b1[] = {1, 2, 4, 5};
	cout << "a1[] equals b1[]? " << equivalentArrays(a1, b1, 4) << endl; //false
	cout << "b1[] equals a1[]? " << equivalentArrays(b1, a1, 4) << endl; //false

    return 0;
}
