#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

const int SIZE=5;
void printArray(int arr[], int SIZE);
int main() {
  // generate lotter
  int lotter[SIZE];
  srand(time(0)); 
  cout<<"Lottery number is: ";
  for(int i=0; i<5; i++){
    lotter[i]=rand()%10;
    cout<<lotter[i]<<" ";
  }
  
    cout<<endl<<"\n\n\n--------------------"<<endl;

  //generate user numbers
  int user[5];
  int intPutTimes=0;
  while(intPutTimes<5){
    cout<<"Please enter an integer number between 0-9: ";
    cin>>user[intPutTimes];
    intPutTimes++;
  }
  cout<<endl<<"--------------------\n\n";

  cout<<"\n\n\nYour number is: ";
  printArray(user,SIZE);
  int arryDifference[5];
  for(int k=0; k<5;k++){
    if(user[k]-lotter[k]==0){
      arryDifference[k]=0;
    }else{
      arryDifference[k]=user[k];
    }
  }
  int sumDifference=0;
  for(int x=0;x<5;x++){
    sumDifference+=arryDifference[x];
  }
  if(sumDifference==0){
    cout<<"\nYou are winner";
  }else{
    cout<<"\nYou did not win!";
  }
}

void printArray(int arr[], int SIZE){
  for(int j=0;j<5;j++){
    cout<<arr[j]<<" ";
  }
}

