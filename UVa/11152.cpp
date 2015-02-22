#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

#define PI acos(-1)

using namespace std;

int main(){
	double semip, a, b, c, R, areaTri, areaMaior, areaMenor, raioMaior, raioMenor;
	while(scanf(" %lf %lf %lf", &a, &b, &c)!=EOF){
		semip = (a+b+c)/2;
		
		areaTri = sqrt(semip*(semip-a)*(semip-b)*(semip-c));
		
		raioMaior = a*b*c / 4 / areaTri;
		areaMaior = raioMaior*raioMaior*PI;
		
		raioMenor = areaTri/semip;
		areaMenor = PI*raioMenor*raioMenor;
		
		printf("%.4lf %.4lf %.4lf\n", areaMaior-areaTri, areaTri-areaMenor, areaMenor);
	}

	return 0;
}
