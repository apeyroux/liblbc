#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lbc.h>

int getUrl(char *url, const char *query, const char *region) {
	url = NULL;
	int url_len = strlen(ROOT_URL) + strlen(region) + strlen(query) + 1;
	if(NULL != (url = (char *) malloc(sizeof(char) * url_len))) {
		sprintf(url, "%s/%s/?q=%s", ROOT_URL, region, query);
		return 0;
	} else {
		return -1;
	}
}
