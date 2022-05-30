int res=0,h=0,p=0,i=1;
        stack<int> startPos ;
        stack<int> height ;
        startPos.push(0);
        for(i=0;i<n;i++)
        {
            // Empty or when a bigger value arrives we start a new rectangle
            if(height.empty() || arr[i]>height.top())
            {
                startPos.push(i);
                height.push(arr[i]);
            }
            // Pop logic
            else if( arr[i]<height.top())
            {
                while(!height.empty() && arr[i]<height.top())
                {
                    h=height.pop();
                    p=startPos.pop();
                    res=max(res,h*(i-p));
                }
                // Store the last popped value to retrive the current value's starting
                startPos.push(p);
                height.push(arr[i]);
            }
        }
        // Remaining values
        while(!height.empty())
        {
            h=height.pop();
            p=startPos.pop();
            res=max(res,h*(i-p));
        }
        return res;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int res=0;
      int arr[] = new int[n];
      
    //   Traverse the matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(M[i][j]==0)
            {
                arr[j]=0;
            }
            else
            {
                arr[j] = arr[j] + M[i][j];
            }
        }
        // Calculate result so far
        res=max(res,findMax(arr,n));
    }
    return res;