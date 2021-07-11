// a.	Viết chương trình nhập mảng một chiều  A với n phần tử (n>=10). Xuất mảng A ra màn hình (2điểm) 
// b.	Xóa các số hoàn hảo trong A trên, xuất lại mảng A sau khi xóa các số hoàn hảo.


#include <stdio.h>

bool SHH(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    return false;    
}


int main()
{
    int arr[] = {1,2,18,3,2,6};
    for (int i = 0; i < 6; i++)
    {
        if (SHH(arr[i]) == true)
        {
            printf("%d ", arr[i]);
        }   
    }
    return 0;
}