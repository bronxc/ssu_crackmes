#include <string.h>
#include <stdio.h>

int main( int argc, char *argv )
{
	char buff[100];
	printf( "OiTZI Crackme1.1 (pm)\r\nEnter password: " );
	scanf( "%s", buff );
	if( !strcmp( buff, "sadkj5" ) )
	{
		printf( "Success!\r\n" );
	}
	else
	{
		printf( "Error! Wrong password!\r\n" );
	}

	return 0;
}