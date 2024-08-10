#include<iostream>
#include<fstream>
#include<cmath>
#include "inver_aug.h"

typedef float GoldenType;

using namespace std;

int main() {
    MatInputType inputArr[N][N];
    GoldenType goldenArr[N][N];
    InvType invArr[N][N];

    float totalError = 0.0;

    ifstream ifileMat("matrices.dat", ios::in | ios::binary);
    ifstream ifileGold("golden.dat", ios::in | ios::binary);

    while (ifileMat.read(reinterpret_cast<char*>(inputArr), N * N * sizeof(MatInputType))) {

		for (int i = 0; i < N; i++) {
			ifileGold.read(reinterpret_cast<char*>(goldenArr[i]), N * sizeof(GoldenType));
		}

		maintoAXI(inputArr, invArr);

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				float invArrVal = static_cast<float>(invArr[i][j]);
				totalError += abs(goldenArr[i][j] - invArrVal);
			}
		}

		cout<< "The golden matrix is: "<< endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout<<goldenArr[i][j]<<"\t";
			}
			cout<<endl;
		}

		cout<< "The inverted matrix is "<<endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout<<invArr[i][j]<<"\t";
			}
			cout<<endl;
		}

    }

    cout<<"The total absolute error is: "<< totalError << endl;
    //Error is currently zero since we are using float

}
