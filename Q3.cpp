#include<stdio.h>

int main(){
	int img[4][4]={{1, 0, 1, 0},
            {0, 1, 0, 1},
            {1, 1, 0, 0},
            {0, 0, 1, 1}}; 
    int i,j;
    printf("original image\n");
    for (i=0;i<4;i++){
    	for(j=0;j<4;j++){
    		printf("%d",img[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(img[i][j]==0)
				img[i][j]=1;
			else
				img[i][j]=0;
		}
}
	printf("inverted image\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",img[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
