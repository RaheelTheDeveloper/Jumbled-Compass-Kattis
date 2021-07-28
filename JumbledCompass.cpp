#include <iostream>
#include <cstdlib>

using namespace std;

class CompassAnim {

   public:
    
        int n1 = 0;
        int n2 = 0;
        
        int distanceToSelect(int n1, int n2){
            int x,y;
            
            if(n2 >= n1){
                x = n2 - n1; 
            }
            else{
                x = n2 + 360 - n1;
            }
            if(n1 >= n2){
                y = n2 - n1;
            }
            else{
                y = n2 - (n1 + 360);
            }
            if(abs(y) >= abs(x)){
                return x;
            }
            else{
                return y;
            }
             
        }
   };

int main() {
    
    CompassAnim * m = new CompassAnim();
   
    while(cin >> m->n1 >> m->n2){
        cout << m->distanceToSelect(m->n1,m->n2);
    }

   return 0;
}