#define MAX 100
void input(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void RemoveDuplicate(int arr[]);
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%4d", a[i]);
    }
}
 
void ThemPhanTu(int a[], int *n, int val, int pos){
    // Mang da day, khong the them.
    if(*n >= MAX){
        return;
    }
    // Neu pos <= 0 => Them vao dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Them vao cuoi
    else if(pos > *n){
        pos = *n;
    }
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = *n; i > pos; i--){
        a[i] = a[i-1];
    }
    // Chen val tai pos
    a[pos] = val;
    // Tang so luong phan tu sau khi chen.
    ++*n;
}
 
void XoaPhanTu(int a[], int *n, int pos){
    // Mang rong, khong the xoa.
    if(*n <= 0){
        return;
    }
    // Neu pos <= 0 => Xoa dau
    if(pos < 0){
        pos = 0;
    }
    // Neu pos >= n => Xoa cuoi
    else if(pos >= n){
        pos = *n-1;
    }
    // Dich chuyen mang
    for(int i = pos; i < *n - 1; i++){
        a[i] = a[i+1];
    }
    // Giam so luong phan tu sau khi xoa.
    --*n;
}
void bubble_sort(int arr[], int n)
{
  int i, j ,temp;

  for (i = 0 ; i < n - 1; i++) {
    for (j = 0 ; j < n - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        /* Swapping */
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}
int secondmax(int a[], int n){
    int firstMax, secondMax;
    if (a[0] > a[1]){
        firstMax = a[0];
        secondMax = a[1];
    }else{
        firstMax = a[1];
        secondMax = a[0];
    }
    for(int i = 2; i < n; i++){
        if(a[i] >= firstMax){
            secondMax = firstMax;
            firstMax = a[i];
        }else if (a[i] > secondMax){
            secondMax = a[i];
        }
    }
    return secondMax;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int randomGenenator()
{
    return rand() % (MAX +1);
}
int binary_search(int x, int arr[], int n)
{
  int left = 0, right = n - 1, mid;
  while (left <= right)
  {
    mid = (left + right) / 2;
    if (arr[mid] == x)
    {
      return mid;
    }
    if (arr[mid] > x)
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return -1;
}
 void RemoveDuplicate(int arr[])
{
    int n;
	int i,j,k;
   for(i=0;i<n;i++)
	{
    for(j=i+1;j<n;)
    	{
        if(arr[i]==arr[j])
        	{
            for(k=j;k<n;k++)
            	{
                arr[k]=arr[k+1];
            	}
            n--;
        	}
        else
            j++;
    	}
	}	
}
int checkConse(int arr[])
{
    int n;
    int i,count;
	count=0;
    for(i=0;i<n;i++)
    {
		if(arr[i]>0 && arr[i+1]-arr[i]==1)
			{
				count++;
			}
	}		
	return count;	
}
//tìm số xuất hiện nhiều nhất trong mảng
unsigned int Count(int A[], unsigned int n, int x){
    unsigned int temp = 0;
    for(int i = 0; i<n; i++)
        if(A[i]==x)
            temp++;
    return temp;
}
//tim phan tu xuat hien nhat lan nhat trong A
unsigned int Count(int A[], unsigned int n) {
    unsigned int temp1, temp = Count(A,n,A[0]), index = 0;
    for(int i = 1; i<n; i++)
    {
        temp1 = Count(A,n,A[i]);
        if(temp<temp1)
        {
            temp = temp1;
            index = i;
        }
    }
    return A[index];
}
//