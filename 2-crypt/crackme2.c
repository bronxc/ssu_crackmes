#include <string.h>
#include <stdio.h>

int main( int argc, char *argv )
{
	char pass[] = "\x37\x20\x38\x67\x6a\x3b\x22\x61\x60";
	char buff[100];
	int i;

	printf( "OiTZI Crackme2.1 (pm)\r\nEnter password: " );
	scanf( "%s", buff );

	for( i = 0; i < strlen( buff ); i++ )
	{
		if( buff[i] != ( pass[i] ^ 0x53 ) )
		{
			printf( "Error! Wrong password!\r\n" );
			return 0;
		}
	}	

	printf( "Success!\r\n" );
	return 0;
}