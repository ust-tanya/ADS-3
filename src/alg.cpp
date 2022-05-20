// Copyright 2022 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int right = size - 1;
  int left = 0, mid = 0;
  while (left <= right) {
  mid = (left + right) / 2;
  if (value == *(arr + mid)) {
  left = right = mid;
  while (*(arr + right) == *(arr + right + 1)) {
  right++;
  }
  while (*(arr + left) == *(arr + left - 1)) {
  left--;
  }
  return right - left + 1;
  } else if (value > *(arr + mid)) {
  left = mid + 1;
  } else if (value < *(arr + mid)) {
  right = mid - 1;
  }
  }
  return 0;
}
