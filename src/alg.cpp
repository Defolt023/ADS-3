// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i, count;
  count = 0;
  for (i = 0; size > i; i++) {
  if (arr[i] == value) {
  count++;
  }
  }
  if (count != 0) {
  return count;
  } else {
  return 0;
}
