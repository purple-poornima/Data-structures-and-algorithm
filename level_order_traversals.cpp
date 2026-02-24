#include <iostream>
#include <cmath>
using namespace std;
int main() {
     int arr[10]={1,2,3,4,5,6,7,8,9,10};
     int level=0;
     int count=0;
int level_counts=1;
     for(int x:arr){
        count++;
         cout<<x<<" ";
         

         if(count==level_counts){
             level++;
            
             level_counts=pow(2,level);
             cout<<endl;
             count=0;
         }
     }
     
}
