const int size=3;
int board [size][size];
int i,j;
int num0fx;
int num0fo;
int result= -1;//-1��û��Ӯ��1��xӮ��0��oӮ

//������󣨱�����ά���飩 
for (i=0;i<size;i++){
	for(j=0;j<size;j++){
		scanf("%d",&board[i][j]);	
	}
	
}

//	����У�������1�������x����0�������o��                                         
for(i=0;i<size&&result==-1;i++){
	num0fo=num0fx=0;
	for(j=0;j<size;j++){
		if (board[i][j]==1)
		num0fx++;
	}else{
		num0fo++;
	}
		if(num0fx==size){
		result==0;
	}else if(num0fo==size){
		result==1;
	}
} 

//����� (���ǰ�i��j����һ�£� 
for(j=0;j<size&&result==-1;j++){
	num0fo=num0fx=0;
	for(i=0;i<size;i++){
		if (board[i][j]==1)
		num0fx++;
	}else{
		num0fo++;
	}
		if(num0fx==size){
		result==0;
	}else if(num0fo==size){
		result==1;
	}
} 

/*for(int i = 0 ; i < size && result == -1 ; i++){

        int numofoh = 0 , numofxh = 0 , numofov = 0, numofxv = 0;

        for(int j = 0 ; j < size ; j++){
            if(a[i][j] == 0){

                numofoh ++ ;

            }else if(a[i][j] == 1){

                numofxh ++ ;

            }                                                   ��һ��ѭ����
		  
                                                                ��i=0ʱ������i=0��j=0��i=0��j=1��i=0��j=2��ʱ�����ڶ���forѭ�� ����ʱ���� numofoh��numofxh��numofov ��numofxv 
                                                                ���������ж�result����resultΪ-1��������ڶ���ѭ���� 

            if(a[j][i] == 0){

                numofov ++ ;

            }else if(a[j][i] == 1){

                numofxv ++ ;

            }

        }*/
//���Խ���
num0fo=num0fx=0;
for(i=0;i<size;i++){
	if(board[i][i]==1){
		num0fo++;
	}else{
		num0fx++;
	}
	if(num0fx==size){
		result==1;
	}else if(num0fo==size){
		result==0;
	}
} 
//��鷴�Խ���(��i��Ϊsize-i-1���ɣ� 
num0fo=num0fx=0;
for(i=0;i<size;i++){
	if(board[i][size-i-1]==1){
		num0fo++;
	}else{
		num0fx++;
	}
	if(num0fx==size){
		result==1;
	}else if(num0fo==size){
		result==0;
	}
} 
 

