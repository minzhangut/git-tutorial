#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

bool Isprime(int i) {
  for (int j=2; j<i; j++)
    if (i%j == 0) return false;
  return true;
};

class Primegenerator {
private:
  int a_num{1}; 
  int total_prime_num{0};

public:
  /*Primegenerator  (int a){
    a_num = a ;};*/

  int nextprime() {
    //int total_prime_num = 0;
    a_num++;

    while(!Isprime(a_num)){
      a_num++;}
    total_prime_num++;      
    return a_num;
    //total_prime_num++;

  };

  int number_of_primes_found() {return total_prime_num;};

  int last_number_tested(){return a_num;}; 

};

int main() {
  /*cin >> nprimes;
  Primegenerator sequence;
  while (sequence.number_of_primes_found()<nprimes) {
    int number = sequence.nextprime();
    cout << "Number " << number << " is prime" << endl;
    }*/
  Primegenerator sequence;
  for (int count=0; count<10; count++)
    cout << "Prime " << count << " is " << sequence.nextprime() << endl;
  return 0;
}
//this is a comment
