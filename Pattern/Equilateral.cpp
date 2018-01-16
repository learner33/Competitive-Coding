#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n, mul, sub, front=1, back;
	cin >> n;
	mul = (n*n)+1;
	sub = n-1;
	for(int i=0;i<n;i++){
		for(int s=0; s<i*2;s++)
			cout << "-";
		for(int j=i;j<n;j++){
			cout << front<<"*";
			front++;
		}
		back = mul;
		for(int k=i;k<n;k++){
			if(k != n-1)
				cout << back<<"*";
			else
				cout << back;
			back++;
		}
		mul -= sub;
		sub--;
		cout << "\n";
	}
	return 0;
}


Link : http://qa.geeksforgeeks.org/6283/program-print-trapezium-pattern-numbers-stars-and-hyphens

1st row<- 1 to n ->            then          <- n*n+1 to 4 times ->
2nd row<-continue from top->                 <- n*n+1 minus n-1 then continue ->
3rd row<-       ""        ->                 <- n*n+1 minus n-1 minus n-2 then continue ->
.
.
.
