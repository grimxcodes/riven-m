#pragma once

#include <string>

enum class TokenType 
{
RIVEN, // riven
MAIN, // main

LEFT_BRACKET, // ( [ ) 
RIGHT_BRACKET, // ( ] ) 

LEFT_BRACE, // {
RIGHT_BRACE, // }

IMPR, 
OUTPUT, //( /> ) 

STRING, // " HELLO WORLD "
SEMICOLON, 

EOF, 


};





struct Token
{

TokenType Type;
std::string Text;

Token(TokenType type, const std::string& text) 
: Type(type), 
    Text(text)
{
}


};
