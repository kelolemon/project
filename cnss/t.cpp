# include <bits/stdc++.h>

using namespace std;

string cow_name[1000000];
int cow_number;
string now_name;

inline int cmp(string a,string b){
	return a<b;
}

int main(){
	scanf("%d",&cow_number);
	cin>>now_name;
	for (int i=1;i<=cow_number;i++) cin>>cow_name[i]; //read cow's name;
	sort(cow_name+1,cow_name+1+cow_number,cmp);  // sort
	for (int i=1;i<=cow_number;i++) 
		if (cow_name[i]==now_name){ //find the name just called. print the next name
			if (i==cow_number) puts("The End"); 
			else cout<<cow_name[i+1]<<endl;
			break;
		} 
}
