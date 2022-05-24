///////////////////////////////////////////////////////////////////////////
//  bug1.cpp
//   
// 
//   Created by jmaletic on 9/9/13.
// 
//   This code prints out a sets of random numbers, no duplicates per set.
//
//   There is a bug in this code.  It compiles but seems to get into an infinit loop.
//   Find the bug.
//
//   Step 1: Compile the program clang++ -Wall bug1.cpp -o buggy
//           Run it ./buggy  ctrl c to break it.
//   Step 2: Read over the code and figure out what it does a bit.
//           Insert print statements into the different loops to 
//           determine where the infinite loop is occurring.
//           Start in the main and work down the call stack.
//   Step 3: Once you figure out what loop is the problem try to 
//           figure out what it is supposed to do and why its broken.
//   Step 4: Make the fix and compile/run the program
//   Step 5: Does it work?  



#include <iostream>
#include <cstdlib>

const int MAX             = 6;
const int SIZE_OF_SAMPLES = 3;
const int REP             = 5;

bool inArray     (int[], int, int  );
void UniqRandInt (int,   int, int[]);



///////////////////////////////////////////////////////////////////////////
int main() {
    //std::cerr<<"in main\n";

    //std::cerr << __FILE__ << " " << __FUNCTION__ << " " << __LINE__ << "\n";
    

    int arr[SIZE_OF_SAMPLES];
    
    srand(time(nullptr));  //Seed random number generator correctly.
    

    for (int i = 0; i < REP; i++) {
        UniqRandInt(MAX, SIZE_OF_SAMPLES, arr);
        for(int j = 0; j < SIZE_OF_SAMPLES; j++) {
            std::cout << arr[j] << " "; // set i to j 
        }
        std::cout << std::endl;
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////
// result[n] will be initialized with a set of random numbers, no duplicates
//           Values between 0 and max.
// 
void UniqRandInt(int max, int n, int result[]) {

    int cntr = 0, r;

    while(cntr <= REP) { // changed n to REP and < to <=
       
        r = rand() % (max + 1); // Not a bug but I changed it to look better.
        if (!inArray(result, n, r)) { // n is size of samples and we want a number in when it is NOT true
            result[cntr] =  r;
            cntr++; 
        }
    }
    return;
}

///////////////////////////////////////////////////////////////////////////
// Check if x is included in array[] of arrSize.
// Returns: 1 if x is a member
//           0 if x is not a member
// 
bool inArray(int array[], int arrSize, int x) {
    for (int i = 0; i < arrSize; ++i) {
        if (array[i] == x) {
            return true;
        }
    }
    return false;
}
