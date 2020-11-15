#include<bits/stdc++.h>
using namespace std;
int main() {
	string input;
	cin>>input;
	int gameP1=0, gameP2=0, pointP1=0, pointP2=0, player = 1;
	for(int i=0;i<input.length();i++){
		if(input.substr(i,1)=="S" && player == 1){
			pointP1 += 1;
		}
		else if(input.substr(i,1)=="R" && player == 1){
			pointP2 += 1;
			player =2;
		}
		else if(input.substr(i,1)=="S" && player == 2){
			pointP2 += 1;
		}
		else if(input.substr(i,1)=="R" && player == 2){
			pointP1 += 1;
			player =1;
		}
		else if(i == input.length()-1 && input.substr(i,1)=="Q" && gameP1>gameP2){
			printf("%d (winner) - %d\n",gameP1,gameP2);
		}
		else if(i == input.length()-1 && input.substr(i,1)=="Q" && gameP2>gameP1){
			printf("%d - %d (winner)\n",gameP1,gameP2);
		}
		else if(input.substr(i,1)=="Q"&&player==1){
			printf("%d (%d*) - %d (%d)\n",gameP1, pointP1, gameP2, pointP2);
		}
		else if(input.substr(i,1)=="Q"&&player==2){
			printf("%d (%d) - %d (%d*)\n",gameP1, pointP1, gameP2, pointP2);
		}
		if(pointP1>=5||pointP2>=5){
			if(pointP1==10){
				gameP1++;
				pointP1 = 0;
				pointP2 = 0;
			}
			else if(pointP2==10){
				gameP2++;
				pointP1 = 0;
				pointP2 = 0;
			}
			else if(pointP1-pointP2>=2){
				gameP1++;
				pointP1 = 0;
				pointP2 = 0;
			}
			else if(pointP2-pointP1>=2){
				gameP2++;
				pointP1 = 0;
				pointP2 = 0;
			}
		}
	}
	return 0;
}
