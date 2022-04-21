/*
Thomas Moore
4/20/22
bankers.cpp
*/

#include <iostream>
#include <fstream>
#include <sstream>

const int numProcesses = 5; // # of Processes
const int numResources = 3; // # of resources

bool safeState(int processes[], int available_resources[], int max_required[][numResources], int alloted[][numResources]) {

    int need[numProcesses][numResources];



    // Calculates the need of all processes and assigns it to the matrix "need"

    for (int i = 0 ; i < numProcesses ; i++) {

        for (int j = 0 ; j < numResources ; j++) {

            need[i][j] = max_required[i][j] - alloted[i][j];

        }

    }

    bool finish[numProcesses] = {0};
    int safe_sequence[numProcesses];

    // Copy current available resources

    int curr_available[numResources];
    for (int i = 0; i < numResources ; i++) curr_available[i] = available_resources[i];

    int index = 0;

    while (index < numProcesses) {

        bool found = false;
        for (int p = 0; p < numProcesses; p++) {

            if (finish[p] == 0) {

                int j;
                for (j = 0; j < numResources; j++) {

                    if (need[p][j] > curr_available[j]) break;

                }

                if (j == numResources) {

                    for (int k = 0 ; k < numResources ; k++) {

                        curr_available[k] += alloted[p][k];

                    }

                    safe_sequence[index] = p;
                    ++index;
                    finish[p] = 1;

                    found = true;

                }

            }

        }

        // If the system is not in a safe state, print out that result
        if (found == false) {

            std::cout << "NOT SAFE";

            return false;

        }

    }

    // If the system is in a safe state, print that it is
    // and the safe sequence

    std::cout << "SAFE STATE\nSafe sequence is: ";

    for (int i = 0; i < numProcesses ; i++) std::cout << "P" << safe_sequence[i] << " ";
    std::cout << "\n";

    return true;

}

int main() {
    int i, j, looping;

    int mAlloc[5][3]; // Allocation Matrix P0~P4
    int mMax[5][3]; // Max Matrix 
    int available[3] = {3, 3, 2}; // Available Resources

    int f[numProcesses], ans[numProcesses], index = 0;

    std::ifstream file;
    file.open("input.txt");

    for (int m = 0; m < numProcesses; ++m) {
        for (int l = 0; l < numResources; ++l) {
            
        
            if (file.is_open()) {
                std::string line;

                std::getline(file, line, ' ');
            
                std::stringstream ss;
                ss << line;
                int output;
                ss >> output;
                //std::cout << output << std::endl;
                mAlloc[m][l] = output;
                
            }
        }
    }

    for (int m = 0; m < numProcesses; ++m) {
        for (int l = 0; l < numResources; ++l) {
            
        
            if (file.is_open()) {
                std::string line;

                std::getline(file, line, ' ');
            
                std::stringstream ss;
                ss << line;
                int output;
                ss >> output;
                //std::cout << output << std::endl;
                mMax[m][l] = output;
                
            }
        }
    }

    for (int m = 0; m < numResources; ++m) {
        
        if (file.is_open()) {
           std::string line;

            std::getline(file, line, ' ');
            
            std::stringstream ss;
            ss << line;
            int output;
            ss >> output;
            //std::cout << output << std::endl;
            available[m] = output;
            
        }
    }

    int processes[] = {0, 1, 2, 3, 4};
    safeState(processes, available, mMax, mAlloc);
   
}