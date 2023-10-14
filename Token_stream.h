#pragma once

#include "Token.h"
#include "std_lib_facilities.h"

constexpr char declkey = '#';
constexpr char print = ';';

constexpr char number = '8';
constexpr char name = 'a';
constexpr char let = 'L';

const string prompt = "> ";
const string result = "= ";
const string quit = "exit";

class Token_stream
{
  bool full{false};
  Token buffer{'\0'};

public:
  Token_stream() {}

  Token get ();
  void putback (Token t);

  void ignore (char);
};