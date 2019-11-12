#include <iostream>
#include <stdlib.h>

using namespace std;

int a;
void fun();
int main(){

	cout << "Please insert a number:" ;
	cout << "TEST";	
	cin >> a;

	cout << a<< " " ;

	fun();

	system("pause");

	return 0;
}

void fun(){

		if(a==1){
			return;		
		}

		else if(a%2==1){
			a=3*a+1;
			cout << a<< " ";
			fun();
		}
		else{
			a/=2;
			cout << a<<" ";
			fun();
		}

}
