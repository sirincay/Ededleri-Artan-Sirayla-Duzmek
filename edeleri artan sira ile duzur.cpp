// Telegram @SirinCayBoss

#include <iostream>
#include <conio.h>
int main(int argc, char *argv[])
{
/*En çoxu 100 elemente hesablanib */
int i, j, x[100], say, min, movqe, kecid;
std::cout<<"100 -den kicik her hansi bir eded daxil edin > 0 \n";
std::cin>>say;
std::cout<<say<<" sayda eded daxil edin\n";
for (i=0; i<say; i++ )
std::cin>>x[i];
for (i=0; i<say; ++i){
min = x[i];
movqe = i;
for (j=i; j<say; ++j)
if (x[j] < min){
 min = x[j];
 movqe = j;
}
kecid = x[i];
x[i] = min;
x[movqe] = kecid; }
for (i=0; i<say; i++)
std::cout<<x[i]<<" ";
std::cout<<"\n";
getch ();
}

