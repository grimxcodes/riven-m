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



char lexer::Advance() 
char cureent::Peek();
{
 if (Position < Source.size()) 
 {
  
  Position++ ;

}

return current;
}


void Lexer::SkipWhiteSpace() 
{
while (std::isspace(Peek())) 

{
Advance();
 
}
}


Token Lexer::ReadIndentifier() 
std::string text, 


while (std::isalpha(Peek()))
{
text += Advance();
 
}

if (text = "riven") 
{
return Token(TokenType::RIVEN, text); 
}

if (text = "main") 

{
return Token(TokenType::MAIN, text); 
}

if (text = "impr") 
{

return Token(TokenType::IMPR, text);
 

}

throw std::runtime_error(" unknown identifier:" + text);

Token ReadString() 
