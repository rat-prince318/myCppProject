#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double arctan(double x){
	int n = 1,sign = 1 ;
	double sum=0;
	while(pow(x,n)/n > pow(10,-15)){
		sum += pow(x,n) / n * sign ;
		n += 2;
		sign *= -1;
				
	}
	return sum;
		
}

int main(){
	double pi = 16* arctan(1.0/5) - 4*arctan(1.0/239); 
	cout << setprecision(100) << "pi = " << pi << endl;
	
	return 0;
	
}




