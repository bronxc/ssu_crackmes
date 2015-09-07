#include <stdio.h>
#include <string.h>

int main( int argc, char *argv )
{
	int i;
	char pass[] = "dsk49hq23";

	printf( "original:\t\t" );

	for( i = 0; i < strlen(pass); i++ )
	{
		printf( "\\x%0.2x", pass[i] );
	}
	
	printf( "\nencoded:\t\t" );

	for( i = 0; i < strlen(pass); i++ )
	{
		printf( "\\x%0.2x", pass[i] ^ 0x53 );
	}

	return 0;
}