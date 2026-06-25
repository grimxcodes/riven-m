#include "lexer.hpp"

#include <cctype>
#include <stdexcept>

Lexer::Lexer(const std::string& source) 
:Source(source), 
Position(0)
{
}

