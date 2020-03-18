char* strcpy(char*s, const char*t){
  char* p = s;
  while((*s++ =*t++) != '\0'){}
  return p;
}

char* strncat(char* s, const char*t, size_t n){
  char* p = s;
  while(*s != '\0') {s++;}
  while(n-- > 0 && *t != '\0') {*s++ = *t++;}
  return p;
}

int strcmp(const char* s, const char* t){
  while(*s != '\0' && *t !='\0' && *s==*t){
    ++s;
    ++t;
  }
  return *s - *t;
}