#include <cstdio>
#include <iostream>
#include<cmath>
using namespace std;
int main(void) {
	int N;
	double sum = 0.0;
	double Ssum = 0.0;
	double avr;
	double d;
	cin >> N;
	double* array = new double[N];
	for (int i = 0; i < N; i++) {
		cin>>array[i];
		sum += array[i];
		Ssum += pow(array[i], 2);
	}
	avr = sum / N;
	d = sqrt(Ssum / N - pow(avr,2));
	for (int i = 0; i < N; i++) {
		double temp = (array[i] - avr) / d;
		printf("%f\n", temp);
	}
	return 0;
}
