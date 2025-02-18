#include <stdio.h>
#include <stdlib.h>

/* Return true (non-zero) if c is a whitespace characer
   ('\t' or ' ').  
   Zero terminators are not printable (therefore false) */
int space_char(char c){

  return 0;
}

/* Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){

  return 0;
}

/* Returns a pointer to the first character of the next 
   space-separated token in zero-terminated str.  Return a zero pointer if 
   str does not contain any tokens. */
char *token_start(char *str){

  return 0;
}

/* Returns a pointer terminator char following *token */
char *token_terminator(char *token){

  return 0;
}

/* Counts the number of tokens in the string argument. */
int count_tokens(char *str){

  return 0;
}

/* Returns a freshly allocated new zero-terminated string containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len){

  return 0;
}

/* Returns a freshly-allocated zero-terminated vector of freshly allocated space-separeted tokens 
   from zero-terminated string. */
char **tokenize(char* str){

  return 0;
}

/* Prints all tokens. */
void print_tokens(char **tokens){

  return 0;
}

/* Frees all tokens and the vector containing them. */
void free_tokens(char **tokens){

  return 0;
}
