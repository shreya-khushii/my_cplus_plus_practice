for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==j){
            sum1= sum1+a[i][j];
        }
    }
}

for(int i=0;i<n;i++){
   sum = sum+a[i][n-i-1];
}


    
i=0 -> sum =sum+a[0][4-0-1]= sum+a[0][3] 
i=1 -> sum =sum+a[1][4-1-1]= sum+a[1][2] 

i=2 -> sum =sum+a[2][4-2-1]= sum+a[2][1] 
i=3 -> sum =sum+a[3][4-3-1]= sum+a[3][0] 