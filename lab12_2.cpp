#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void updateImage(bool o[][M],int a,int b, int c){
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			if(sqrt(pow(i-b,2)+pow(j-c,2))<=a-1){
				o[i][j]=true;
			}
		}
	} 
}

void showImage(const bool t[][M]){
	for(int i=0; i<M+2;i++){
		cout << "-";
	}
	cout << "\n";
	for(int i=1; i<N; i++){
		cout << "|";
			for(int j=1; j<=M; j++){
			if(t[i][j]==0) {
				cout << " ";
			}
			else cout << "*";
		
		}
			cout << "|";
			cout << "\n";
		
	}
	for(int i=0; i<M+2;i++){
			cout << "-";
		}
		cout << "\n";
	
}