#include<stdio.h>

int main(){
	int cin[3][3]={{1, 0, 1},
                   {0, 0, 1},
	               {1, 1, 0}};
	int i,j;
	int seatcount=0;;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(cin[i][j]==0){
				seatcount++;
				printf("row and column for seat available:%d,%d\n",i+1,j+1);
			}
		}
	}
	printf("total number of seats:%d",seatcount);
	return 0;
}
