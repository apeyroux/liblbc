#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lbc.h>

// return new url and malloc url
char *lbcNewUrl(lbc_query_t lbcq) {
	char *url = NULL;
	size_t ulen = strlen(ROOT_URL) + 
					strlen(lbcq.categorie) + 
					strlen(lbcq.region) + 
					strlen(lbcq.query) + 
					strlen("//offres//?q=") + 1;

	if(NULL != (url = malloc(sizeof(char)*ulen))) {
		sprintf(url, "%s/%s/offres/%s/?q=%s", ROOT_URL, lbcq.categorie, lbcq.region, lbcq.query);
		return url;
	}else{
		return NULL;
	}
}
