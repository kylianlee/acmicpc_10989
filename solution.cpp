//
// Created by Kylian Lee on 2021/10/03.
//

#include <iostream>

using namespace std;

int sorted[10001];

int main(){
  int num, tmp, cnt = 0;
  scanf("%d", &num);
  for (int i = 0; i < num; ++i) {
    scanf("%d", &tmp);
    sorted[tmp]++;
  }
  for (int i = 1; i <= 10000; ++i) {
    if(cnt == num)
      break;
    if(!sorted[i])
      continue;
    for (int j = 0; j < sorted[i]; ++j) {
      printf("%d\n", i);
      cnt++;
    }
  }
  return 0;
}