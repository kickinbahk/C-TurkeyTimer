//
//  main.c
//  TurkeyTimer
//
//  Created by Josiah Mory on 4/8/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey(int pounds) {
  int necessaryMinutes = 15 + 15 * pounds;
  printf("Cook for %d minutes.\n", necessaryMinutes);
}

int main(int argc, const char * argv[]) {
  int totalWeight = 10;
  int gibletsWeight = 1;
  int turkeyWeight = totalWeight - gibletsWeight;
  showCookTimeForTurkey(turkeyWeight);
  return 0;
}
