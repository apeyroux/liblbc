#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lbc.h>

int lbcUrl(lbc_query_t lbcq, char *url) {
	size_t ulen = strlen(ROOT_URL) + 
				sizeof('/') + 
				strlen("/offres/") + 
				strlen(lbcq.region) + 
				strlen("&q=") + 
				strlen(lbcq.query) + 1;  
	printf("%d\n", (int)ulen);
	if(NULL != ((char *) realloc(url, sizeof(char) * ulen))) {
		sprintf(url, "%s/%s/offres/%s/?q=%s", ROOT_URL, lbcq.categorie, lbcq.region, lbcq.query);
		return 0;
	}else{
		return -1;
	}
}

int getUrl(char *url, const char *query, const char *region) {
	int url_len = strlen(ROOT_URL) + strlen(region) + strlen(query) + 1;
	if(NULL != ((char *) realloc(url, sizeof(char) * url_len))) {
		sprintf(url, "%s/%s/?q=%s", ROOT_URL, region, query);
		return 0;
	} else {
		return -1;
	}
}
