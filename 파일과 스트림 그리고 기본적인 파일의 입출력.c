#include <stdio.h>

int main(){
			//절대경로가 아니라면 현재경로에 만들어진다.
//	FILE * fp = fopen("data.txt","wt");		//data.txt라는 파일을 만든다. , 절대경로사용 가능
//	if(fp == NULL){					//만약 동일한 이름이 있다면 가차없이 지워버린다.
//		puts("파일 오픈 실패!");
//		return -1;			//비정상 종류를 의미 하는 -1 반환
//	}
//	fputc('A',fp);		//문자 A를 fp가 가리키는 파일에 저장.
//	fputc('B',fp);
//	fputc('C',fp);
//
//	fclose(fp);		//스트림의 종류(다리를 끊어버린다(?))
//				//사용할때마다 닫는것을 습관화 하자
//	return 0;
	//windows의 경우 절대경로는 \\로 해야한다. 이유는 \n , \t 등등...
	//비슷한이유이다.	이말은 즉슨 \하나만 입력하면 인식이 안됀다.

	//파일로부터 데이터 읽기
	int ch ,i;
	FILE * fp=fopen("data.txt","rt");
	if(fp == NULL){
		printf("파일 오픈 실패!");
		return -1;
	}

	
	for(i = 0; i < 3;i++){
		ch = fgetc(fp);		//data.txt의 저장된 문자를 하나씩 가져옴
		printf("%c \n",ch);
	}
	fclose(fp);
	return 0;
}
