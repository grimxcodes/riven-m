#pragma once

#include <string>
#include <vector>

#include "Token.h"


class lexer 
{
public:

lexer(const std::string& Source);

std::vector<token> Tokenizer();

private:

std::string Source;
size_t Position;

char Peek() const;
char Advance();
void SkipWhiteSpace();
Token ReadIdentifier();
Token ReadStriReadString();

};
