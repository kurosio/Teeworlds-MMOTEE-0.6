#ifndef ENGINE_SERVER_BCRYPT_H
#define ENGINE_SERVER_BCRYPT_H

void Crypt(const char* pass, const unsigned char* salt, char* hexResult);

#endif
