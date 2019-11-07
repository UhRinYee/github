#include <stdio.h>

int Grow(int (*area)[5],int ginger_area , int day){
	int i,j;
	int blind;

        for(i = 0; i<ginger_area; i++){
                for(j = 0; j<ginger_area; j++){
			if(area[i][j] != -1)
				area[i][j] += day;			//택배가 오는날
			
			if(area[i][j] >= 1 && area[i][j] <= 5)		//택배가 오는날 인삼의 상태 
				blind++;
				
				
                }
        }
	return blind;
}

int main(){
	int ginger_area;
	int day;
	int area[5][5]={0};
	int i = 0 , j = 0;
	int blind = 0;

	//인삼밭의 크기 입력 n*n	0<K<50
	scanf("%d",&ginger_area);
	//택배가 오기까지 남은날
	scanf("%d",&day);

	for(i = 0; i<ginger_area; i++){
		for(j = 0; j<ginger_area; j++){
			scanf("%d",&area[i][j]);		
		}
	}
	
	blind = Grow(area,ginger_area,day);
	printf("%d",blind);
	return 0;
}
