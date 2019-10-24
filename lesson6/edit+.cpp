#include <cstdio>
#include <iostream>
#include <string>

enum { ESC = 1, PRINT, SELECT, COPY, PASTE, CUT };

bool str_cmp(const char *comand, const char *string) {
  if (comand == nullptr || string == nullptr) {
    return false;
  }
  while (*string != '\0' && *comand == *string) {
    ++comand;
    ++string;
  }
  return *comand == *string;
}

int CheckUserCommand(const char *command) {

  if (str_cmp(command, "esc")) {
    return ESC;
  }
  if (str_cmp(command, "print")) {
    return PRINT;
  }
  if (str_cmp(command, "select")) {
    return SELECT;
  }
  if (str_cmp(command, "copy")) {
    return COPY;
  }
  if (str_cmp(command, "paste")) {
    return PASTE;
  }
  if (str_cmp(command, "cut")) {
    return CUT;
  }

  return 0;
}

int main() {

  char command[10];
  char string[10];
  char *ptr = string;

  std::cout << "Enter string" << std::endl;
  std::cin >> string;

  for (size_t k = 0;; k++) {
    std::cout << "Enter command" << std::endl;
    std::cin >> command;
    if (CheckUserCommand(command) == ESC)
      return 0;

    int count = 0;

    for (size_t i = 0; string[i] != '\0'; i++) {
      count += 1;
    }

    switch (CheckUserCommand(command)) {

    case PRINT:
      std::cout << string << std::endl;
      break;

    case SELECT:
      int startPosition;
      int endPosition;
      std::cout << "Enter the first element to select" << std::endl;
      std::cin >> startPosition;
      std::cout << "Enter the second element to select" << std::endl;
      std::cin >> endPosition;
      break;

    case COPY:
      char *begin;
      begin = string + startPosition;
      char *end;
      end = begin + endPosition;
      break;

    case PASTE:
      std::cout << string;
      for (; begin != end; ++begin) {
        std::cout << *begin;
      }
      std::cout << '\n';
      break;

    case CUT:
      for (size_t j = 0; j <= count; ++j) {
        if ((j >= 0 && j <= startPosition) ||
            (j >= endPosition && j <= count)) {
          std::cout << string[j];
        }
      }
      std::cout << '\n';
    }
  }
  return 0;
}
