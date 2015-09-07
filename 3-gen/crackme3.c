#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv )
{
	char buff_name[100];
	char buff_code[100];
	int summ, i;

	printf( "OiTZI Crackme3.1 (pm)\r\nEnter your name    : " );
	scanf( "%s", buff_name );
	printf( "Enter your passcode: " );
	scanf( "%s", buff_code );

	summ = 0;
	for( i = 0; i < strlen( buff_name ); i++ )
	{
		summ += buff_name[i];
	}

	if( summ != atoi( buff_code ) )
	{
		printf( "Error! Wrong passcode!\r\n" );
	}
	else
	{
		printf( "Success!\r\n" );
	}



	return 0;
}