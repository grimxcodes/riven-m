#include "../../include/lexer.hpp"

#include <cctype>
#include <stdexcept>

Lexer::Lexer(const std::string& source) 
:Source(source), 
Position(0)
{
}

char Lexer::Peek() const
{
if (Position >= Source.size()) 
{
 return '\0';
}

return Source[Position];


}
