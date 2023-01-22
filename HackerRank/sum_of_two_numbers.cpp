#include<iostream>
#include<conio.h>
using namespace std;

int sum(int a, int b){
	return a+b;
}

int main(){
	int a, b;
	sum:
	cout << " -----------------" << endl;
	cout << "|                 |" << endl;
	cout << "|   SUM PROGRAM   |" << endl;
	cout << "|                 |" << endl;
	cout << " ----------------- " << endl;
	cout << "\nENTER FIRST NUMBER: ";
	cin >> a;
	cout << "\nENTER SECOND NUMBER: ";
	cin >> b;
	if((a >= 1 && a <= 1000) && (b >= 1 && b <= 1000)){
		cout << "\nSUM = " << sum(a, b);
	}
	else{
		cout << "\nFIRST AND SECOND NUMBER SHOULD BE BETWEEN 0 AND 1000.....PLEASE ENTER ANY KEY AND TRY AGAIN" << endl;
		getch();
		system("cls");
		goto sum;
	}
}
