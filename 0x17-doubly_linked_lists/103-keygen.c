#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>
int main(int argc, char *argv[])
{
	File *output;
	RSA *rsa;

	if (argc != 2)
	{
		printf("Usage: %s <output_file>\n", argv[0]);
		return (1);
	}

	output = fopen(argv[1], "w");
	if (output == NULL)
	{
		perror("fopen");
		return (1);
	}

	rsa = RSA_generate_key(2048, RSA_F4, NULL, NULL);
	if (rsa == NULL)
	{
		ERR_print_errors_fp(stderr);
		return (1);
	}

	if (!PEM_write_RSAPrivateKey(output, rsa, NULL, NULL, 0, NULL, NULL))
	{
		ERR_print_errors_fp(stderr);
		return (1);
	}

	RSA_free(rsa);
	fclose(output);
	return (0);
}
