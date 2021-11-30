#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string a;
    cout << "Input text: ";
	cin >> a;
	string b = func1(a);
    cout << "Reversed text: " << b << "\n";
	
	string m;
	m = func2(a); 
	string n;
	n = func2(b);
		if(m==n){
			cout << "Palindrome: Yes";
		}
		else{ 
			cout << "Palindrome: No";
		}
    return 0;
}
