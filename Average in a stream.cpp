vector<float> streamAvg(int arr[], int n) {
	    // code here
	   vector<float> v;
	   double sum=0, avg=0;
	   for(int i=0;i<n;i++){
	       sum +=arr[i];
	       avg=sum/(i+1);
	       setprecision(2);
	       v.push_back(avg);
	   } return v;
	}
