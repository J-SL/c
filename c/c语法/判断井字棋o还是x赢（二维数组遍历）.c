const int size=3;
int board [size][size];
int i,j;
int num0fx;
int num0fo;
int result= -1;//-1：没人赢，1：x赢，0：o赢

//读入矩阵（遍历二维数组） 
for (i=0;i<size;i++){
	for(j=0;j<size;j++){
		scanf("%d",&board[i][j]);	
	}
	
}

//	检查行（其中用1代表符号x，用0代表符号o）                                         
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

//检查列 (就是把i和j调换一下） 
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

            }                                                   第一次循环：
		  
                                                                当i=0时，遍历i=0，j=0；i=0，j=1；i=0，j=2；时跳出第二个for循环 ，此时根据 numofoh，numofxh，numofov ，numofxv 
                                                                的数量来判断result，若result为-1，则继续第二次循环。 

            if(a[j][i] == 0){

                numofov ++ ;

            }else if(a[j][i] == 1){

                numofxv ++ ;

            }

        }*/
//检查对角线
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
//检查反对角线(把i改为size-i-1即可） 
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
 

