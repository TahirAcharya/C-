// github.com/TahirAcharya/C-
#include <iostream>
using namespace std;

class Sorting
{
    public:
     int i,j,n,temp,a[100];
        void set_value()
        {
            cout<<"Enter n value:";
            cin>>n;
            cout<<"Enter "<<n<<" elements:"<<endl;
            for (int i = 0; i < n; i++)
            {
                cin>>a[i];
            }
        }
        void display(){
              // printing
    cout<<"Sorted Elements are:"<<endl;
        for (int i = 0; i <n; i++) 
        {
        cout<<a[i]<<endl;
        }
            
        
        }
        
        void sort_ascending()
        {
          
    // sorting logic for ascending
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) {
                 temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
            }
        }
    }
    
    // printing
        cout<<"Sorted Elements are:"<<endl;
        for (int i = 0; i <n; i++) 
        {
        cout<<a[i]<<endl;
        }
            
        }
        
        
        void sort_descending()
        {
            
    // sorting logic for ascending
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] < a[j + 1]) {
                 temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
            }
        }
    }
        }
    
  
};


int main() {

Sorting object;
object.set_value();
object.sort_ascending();
object.display();
object.sort_descending();
object.display();
return 0;
}






