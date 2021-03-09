#include <base/system.h>
#include <openssl/evp.h>
#include <openssl/crypto.h>

#define OUTBYTES_CRYPT 16

//PBKDF2_HMAC_SHA_512
void Crypt(const char* pass, const unsigned char* salt, char* hexResult)
{
	unsigned int i;
	unsigned char digest[OUTBYTES_CRYPT];
	PKCS5_PBKDF2_HMAC(pass, str_length((char*)pass), salt, str_length((char*)salt), 1, EVP_sha512(), OUTBYTES_CRYPT, digest);
	for(i = 0; i < sizeof(digest); i++)
		sprintf(hexResult + (i * 2), "%02x", 255 & digest[i]);
}
