#include <iostream>
using namespace std;
int main() {
  string atb1, atb2, atb3, atb4, atb5, atb6, atb7, atb8, atb9, atb10;
  int sum=0;
  cout<<"Tas ir viktorina par temu for cikls C++";
  
  cout<<"\n\n\n1. Kas ir for cikls?\na. Cikls ar pecnosacijumu\nb. Cikls ar priekšnosacijumu\nc. Cikls ar skaititāju\nd. Neviens no minetajiem\n\n";
  cin>>atb1;
  if(atb1=="c"){
    sum++;
  }
  
  cout<<"\n\n2. Kurš for cikls ir uzrakstīts pareizi?\na. for(int i = 0; i < 12)\nb. for(int j = 0; j < 12; j++)\nc. for(int q; q<j; ++)\nd. for(int; int j++; j < 3)\n\n";
  cin>>atb2;
  if(atb2=="b"){
    sum++;
  }
    
  cout<<"\n\n3. Ja jūs gribat sakt no 100 un beigas iegūst 3, kads cikls bus pareizs?\na. for(int i = 0; i < 100; i+3)\nb. for(int i = 3; i > 100; i--)\nc. for(int i = 100; i < 3; i++)\nd. for(int i = 100; i > 3; i--)\n\n";
  cin>>atb3;
  if(atb3=="d"){
    sum++;
  }
  cout<<"\n\n4. Cik reizes nostradās cikls?\nfor(int i=0; i<5; i++)\na. 4\nb. 5\nc. 1\nd. 0\n\n";
  cin>>atb4;
  if(atb4=="b"){
    sum++;
  }
  cout<<"\n\n5. Kurš cikls nenostradās nevienu reizi?\na. for(int i=0; i<5; i++)\nb. for(int i=5; i<=10; i++)\nc. for(int i=10; i<10; i++)\nd. for(int i=0; i<10; i++)\n\n";
  cin>>atb5;
  if(atb5=="c"){
    sum++;
  }
 cout<<"\n\n6. Kāds ir i++ ekvivalents?\na. i=i+i\nb. i=i+1\nc. i=i-1\nd. i--\n\n";
  cin>>atb6;
  if(atb6=="b"){
    sum++;
  }
  cout<<"\n\n7. Kas ir nepareizi? for (int k = 2, k <=12, k++)\na. Cikls ir pareizs\nb. Mainīgajam vienmēr jābūt burtam i, ja izmanto for ciklu\nc. Beigās jābūt semikolam\nd. Jāizmanto semikolus, nevis komatus\n\n";
  cin>>atb7;
  if(atb7=="d"){
    sum++;
  }
  cout<<"\n\n8. Vai for cikls var saturēt for ciklu?\na. Jā\nb. Ne\nc. Kompilēšanas kļūda\nd. Runtime kļūda\n\n";
  cin>>atb8;
  if(atb8=="a"){
    sum++;
  }
  cout<<"\n\n9. Cik reizes nostradās cikls?\na. 3\nb. 4\nc. Cikls darbosies bezgalīgi\nd. 0\n\n";
  cin>>atb9;
  if(atb9=="c"){
    sum++;
  }
  cout<<"\n\n10. Kā pārtraukt ciklu?\na. Izmantot break\nb. Izmantot continue\nc. Izmantot return\nd. Izmantot switch\n\n";
  cin>>atb10;
  if(sum!=10){
    cout<<"Jus atbildat nepareizi uz šiem jautājumiem: ";
  if(atb10=="a"){
    sum++;
  }
  if(atb1!="c"){
    cout<<"1\n";
  }
  if(atb2!="b"){
    cout<<"2\n";
  }
  if(atb3!="d"){
    cout<<"3\n";
  }
  if(atb4!="c"){
    cout<<"4\n";
  }
  if(atb5!="c"){
    cout<<"5\n";
  }
  if(atb6!="b"){
    cout<<"6\n";
  }
  if(atb7!="d"){
    cout<<"7\n";
  }
  if(atb8!="a"){
    cout<<"8\n";
  }
  if(atb9!="c"){
    cout<<"9\n";
  }
  if(atb10!="a"){
    cout<<"10\n";
  }
    }
  else{
    cout<<"Viss ir pareizi!";
  }







  
}