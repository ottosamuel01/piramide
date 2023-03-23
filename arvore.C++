#include <iostream>

void drawTree(int max){
  for (int i {}; i < max; ++i){
    for (int x {}; x < max; ++x){
      std::cout << " ";
    }
    for (int j = max - i; j > 0; j--){
      std::cout << " ";
    }
    for (int k {}; k < 2 * i + 1; ++k){
      std::cout << "*";
    }
    std::cout << '\n';
  }
}

int main(){
  drawTree(10);
  return 0;
}