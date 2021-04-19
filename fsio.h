#include <stdio.h>
#include <string.h>

typedef struct fsio_data {
	char* data_name;
	char* data_type;
	char* data_size;
	void* data;
} fsio_data;

typedef struct fsio_obj {
	void read( const char* file_name ) {
		int len = strlen();
		char ext[100]; for( int i = len - 1; i >= 0; i-- ) if( file_name[i] == '.' ) { for( int j = i + 1; j < len; i++ ) ext[j - i - 1] = file_name[j]; break;}
		if( strcmp(ext, "txt") == 0 ) {

		}
		else {
			print("FSIO_ERR: no information about the extension of file name '%s', '%s'", file_name, ext);
		}
	}

	fsio_data data;

	void write( const char* file_name ) {

	}
} fsio_obj;