#include<iostream>
#include<fstream>
#include<random>
#include"inver_aug.h"

using namespace std;

int main() {
    MatInputType inputArr[N][N];
    MatInputType inpReadArr[N][N];
    InvType invArr[N][N];

    ofstream ofile1("matrices.dat", ios::out | ios::binary);

    if (!ofile1) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> dis(1, 10); 

    for (int i = 0; i < 20; i++) {
        // Populate the matrix with random float values
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                inputArr[i][j] = dis(gen);
            }
        }
        
        for (int i = 0; i < N; ++i) {
            ofile1.write(reinterpret_cast<char*>(inputArr[i]), N * sizeof(MatInputType));
        }
    }
    ofile1.close();

    // Read the file of matrices, calculate inverse for each of them and add them to the file
    ifstream ifile1("matrices.dat", ios::in | ios::binary);
    ofstream ofile2("golden.dat", ios::out | ios::binary);
    while (!ifile1.eof()) {

        //Read the matrix from matrices.dat
        for (int i = 0; i < N; ++i) {
            ifile1.read(reinterpret_cast<char*>(inpReadArr[i]), N * sizeof(MatInputType));
        }

        //Invert the array
        inverse(inpReadArr, invArr);

        cout << "Input Read Array:" << endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << inpReadArr[i][j] << " ";
            }
            cout << endl;
        }

        // Print the inversed matrix
        cout << "Matrix inverted successfully" << endl;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << invArr[i][j] << " ";
            }
            cout << endl;
        }
       

        //Write inverted array to golden.dat
        for (int i = 0; i < N; ++i) {
            ofile2.write(reinterpret_cast<char*>(invArr[i]), N * sizeof(MatInputType));
        }
    }
    ifile1.close();
    ofile2.close();
    return 0;
}
