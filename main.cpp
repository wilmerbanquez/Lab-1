#include <iostream>
using namespace std;
int opcion;
int main()
{
cout <<"Seleccione una opcion"<<endl;
cout <<"2. para problema 2"<<endl;
cout <<"4. para problema 4"<<endl;
cout <<"5. para problema 5"<<endl;
cout <<"6. para problema 6"<<endl;
cout <<"9. para problema 9"<<endl;
cout <<"10. para problema 10"<<endl;
cout <<"11 para problema 11"<<endl;
cout <<"13 para problema 13"<<endl;
cout <<"14 para problema 14"<<endl;
cout <<"16 para problema 16"<<endl;
cin >>opcion;
switch(opcion)
{
case 2:
{int dinero;
 int res;
 int bil50;
 int bil20;
 int bil10;
 int bil5;
 int bil2;
 int bil1;
 int mon500;
 int mon200;
 int mon100;
 int mon50;
    cout <<"Ingrese la cantidad de dinero a devolver: ";
    cin >>dinero;
    bil50 = dinero/50000;
    res = dinero - (bil50*50000);
    bil20 = res/20000;
    res = res-(bil20*20000);
    bil10 = res/10000;
    res = res-(bil10*10000);
    bil5 = res/5000;
    res = res-(bil5*5000);
    bil2 = res/2000;
    res = res-(bil2*2000);
    bil1 = res/1000;
    res = res-(bil1*1000);
    mon500 = res/500;
    res = res-(mon500*500);
    mon200 = res/200;
    res = res-(mon200*200);
    mon100 = res/100;
    res = res-(mon100*100);
    mon50 = res/50;
    res = res-(mon50*50);
    cout <<"50000: "<<bil50<<endl;
    cout <<"20000: "<<bil20<<endl;
    cout <<"10000: "<<bil10<<endl;
    cout <<"5000: "<<bil5<<endl;
    cout <<"2000: "<<bil2<<endl;
    cout <<"1000: "<<bil1<<endl<<"500: "<<mon500<<endl<<"200: "<<mon200<<endl<<"100: "<<mon100<<endl<<"50: "<<mon50<<endl<<"faltante: "<<res<<endl;
    break;
}
case 5:
{
    int num;
 cout <<"Ingrese un numero impar: ";
 cin >>num;
 int esp = num/2;
 int asc = 1;
 while(asc<num+2)
 {
     for(int j=0;j<esp;j++)
     {
         cout<<" ";
     }
     for(int j=0;j<asc;j++)
     {
         cout<<"*";
     }
     for(int j=0;j<esp;j++)
      {
         cout<<" ";
     }
  asc +=2;
  esp -=1;
  cout <<endl;
 }
esp = 0;
asc -=4;
while(asc>0)
{
    for(int j=-1;j<esp;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<asc;j++)
    {
        cout<<"*";
    }
    for(int j=0;j<esp;j++)
     {
        cout<<" ";
    }
 asc -=2;
 esp +=1;
 cout <<endl;
}
break;
}
case 4:
{
int num1;
int num2;
int hora;
int minuto;
cout <<"Ingrese el primer numero: ";
cin >>num1;
while(num1/100 > 24 or num1%100 > 59 or num1>1259 or num1<100){
    cout<<"Ingrese un número válido: "<<endl;
    cin >>num1;
}
cout <<"Ingrese el segundo numero: ";
cin >>num2;
while(num2/100 > 24 or num2%100 >59 or num2>1259 or num2<100){
    cout<<"Ingrese un numero valido: ";
    cin >>num2;
}
hora = (num1/100) + (num2/100);
minuto = (num1%100) + (num2%100);
if(hora>=24 and minuto>60){
    hora = hora-24;
    minuto = 60 - minuto;
    hora+=1;
    cout <<"La hora es "<<hora;
    cout <<minuto<<endl;
    break;
}
if(hora>=24 and minuto<60){
    hora = hora-24;
    cout<<"La hora es "<<hora<<minuto;
    break;
}
if(hora<24 and minuto>60){
    minuto = 60-minuto;
    hora = hora+1;
    cout <<"La hora es "<<hora;
    cout <<minuto<<endl;
    break;
}
if(hora<24 and minuto<60){
    cout <<"La hora es "<<hora;
    cout <<minuto<<endl;
    break;
}
break;
}
case 6:
{
int num;
cout<<"Ingrese un numero entero: ";
cin>>num;
if(num==0){
    cout <<"e es aproximadamente 0";
}
if(num!=2 and num!=1){
    num = num-1;
    float sum = 0;
    while(num>1){
        float fact = 1;
        for(int i=1;i<=num;i++){
            fact = fact*i;
        }
        sum = 1.0/fact + sum;
        num-=1;
    }
    cout<<"e es aproximadamente: "<<sum+2<<endl;
    num = 123123;
}
else
    if(num==2)
        cout <<"e es aproximadamente 2"<<endl;
    if(num==1)
        cout <<"e es aproximadamente 1"<<endl;
break;
}
case 9:
{
int num;
int temp = 0;
int div = 1;
int sum = 0;
cout<<"Ingrese un numero: ";
cin>>num;
temp = num;
while(temp/10 != 0){
    temp = temp/10;
    div = div*10;
}
cout <<"divisor: "<<div<<endl;
int aux = div;
int count = 0;
while(aux>0){
    aux = aux/10;
    count+=1;
}
int num1 = num;
cout <<"cifras: "<<count<<endl;
while(div>0){
    num = num1/div;
    aux = num;
    if(num==0)
        num = 1;
    for(int i=num;i>1;i--){
        num = num*aux;
    }
    sum = num + sum;
    num1 = num1%div;
    div = div/10;
    if(div == 0){
        cout<<sum<<endl;
        break;
    }
}
break;
}
case 10:
{
int num;
cout<<"Ingrese el numero entero: ";
cin >>num;
int cont = 0;
int count = 0;
while(count<num){
    for(long int i=2;i<=2147487483;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)
                cont++;
        }
        if(cont<3){
            count+=1;
        }
        if(count==num){
            cout<<"El primo numero "<<num<<" es "<<i<<endl;
            break;
        }
        cont = 0;
    }
}
break;
}
case 13:
{
int num;
cout <<"Ingrese el numero entero: ";
cin >>num;
int cont = 0;
int sum = 0;
for(int i=2;i<=num;i++){
    for(int j=1;j<=i;j++){
        if(i%j==0){
            cont++;
        }
    }
    if(cont<3){
        sum = sum + i;
    }
    cont= 0;
}
cout<<"El resultado de la suma es "<<sum;
break;
}
case 16:
{
int num;
cout <<"Ingrese el entero: ";
cin >>num;
int count = 1;
int count1 = 0;
int aux = num;
int mayor = 0;
int elementos;
while(num!=1){
    while(aux!=1){
        if(aux%2!=0){
            aux = 3*aux + 1;
            count +=1;
        }
        else{
            aux = aux/2;
            count +=1;
        }
    }
    if(count>count1){
        mayor = num;
        count1 = count;
        elementos = count;
    }
    num-=1;
    aux = num;
    if(num==1)
        break;
    count = 0;
}
cout <<"La serie mas larga es con la semilla " << mayor << " teniendo " << elementos+1 << " elementos "<<endl;
cout<<mayor<<" ";
while(mayor!=1){
    if(mayor%2!=0){
        mayor = 3*mayor + 1;
        count +=1;
        cout <<mayor <<" ";
    }
    else{
        mayor = mayor/2;
        count +=1;
        cout <<mayor<<" ";
    }
}
break;
}
}
return 0;
}
