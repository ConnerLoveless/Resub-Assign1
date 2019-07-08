#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int num;
  int count = 0;
  int total = 0;
  int min = 100;
  int max = 1;
  double average = 0;
  do{
    cout << "Enter an integer between 1 and 100 (-1 to terminate)" << endl;
    cin >> num;
    if (num == -1){
      cout << "count" << setw(5) << "Minimum" << setw(5) << "Maximum" << setw(5) << "Average" << endl;
      cout << count << setw(5) << min << setw(5) << max << setw(5) << average << endl;
    }else if ((num < 1) || (num > 100)){
      cout << "Invalid integer; must be between 1 and 100" << endl;
    }else{
      count++;
      if (num < min){
        min = num;
      }
      if (num > max){
        max = num;
      }
      total = total + num;
      average = total/(double)count;
    }
  }while(num != -1);
  return 0;
} 