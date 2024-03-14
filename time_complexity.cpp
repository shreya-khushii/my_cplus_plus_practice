
time complexity ->

n -> a[n]-> []
100000 -> -> a[100000]  -> [1,2,3,4,5,6,6,7,8,8..]


loop 
O-> big o
time complexity -> constant -> O(1)
variable -> 

int n, k; -> t1 -> O(1)
cin>>n>>k; -> t2 -> O(1);
int arr[n]; -> t3->O(1);

for(int i=0;i<n;i++){ -> t4 -> O(n)
   cin>>arr[i];
}

sort(arr, arr+n); -> t5-> O(n*logn)
cout<<arr[n-1]<<endl; -> t6-> O(1)
return 0; -> t7 -> O(1)


t= max(t1, t2,t3, t4,t5,t6, t7) = O(n*logn)

n = 10 -> O(10*log10)-> O(10)