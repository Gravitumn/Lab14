#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);  

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);  
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int n[4]={*a,*b,*c,*d};
	int temp,ran;
	 for (int i=3; i>0; --i){
    	ran = rand()%i;
    	temp = n[i];
   	 	n[i] = n[ran];
    	n[ran] = temp;
    }
	*a=n[0];
	*b=n[1];
	*c=n[2];
	*d=n[3];
}
