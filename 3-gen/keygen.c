#include <string.h>
#include <stdio.h>

int main( int argc, char *argv )
{
	char buff_name[100];
	int summ, i;

	printf( "OiTZI Crackme3.1 KEYGEN (pm)\r\nEnter your name: " );
	scanf( "%s", buff_name );

	summ = 0;
	for( i = 0; i < strlen( buff_name ); i++ )
	{
		summ += buff_name[i];
	}

	printf( "Your passcode  : %d\r\n", summ );

	return 0;
}