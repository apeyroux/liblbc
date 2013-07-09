#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lbc.h>

// return new url and malloc url
int lbcSetQuery(lbc_query_t *lbc_query, char *categorie, char *region, char *query) {
	if(!categorie || !region || !query)
		return -1;

	if(0 == strcmp(categorie, "annonces"))
		lbc_query->categorie = strdup(CATEGO_ALL);
	else if(0 == strcmp(categorie, "all"))
		lbc_query->categorie = strdup(CATEGO_ALL);
	else if(0 == strcmp(categorie, "vehicules"))
		lbc_query->categorie = strdup(CATEGO_VEHICULES);
	else
		return -1;
	
	if(0 == strcmp(region, "idf")) 
		lbc_query->region = strdup(REGION_ILE_DE_FRANCE);
	else if(0 == strcmp(region, "alsace")) 
		lbc_query->region = strdup(REGION_ALSACE);
	else 
		return -1;	

	lbc_query->query = strdup(query);

	return 0;
}


char *lbcNewUrl(lbc_query_t *lbcq) {
	char *url = NULL;
	size_t ulen = strlen(ROOT_URL) + 
					strlen(lbcq->categorie) + 
					strlen(lbcq->region) + 
					strlen(lbcq->query) + 
					strlen("//offres//?q=") + 1;

	if(NULL != (url = malloc(sizeof(char)*ulen))) {
		sprintf(url, "%s/%s/offres/%s/?q=%s", ROOT_URL, lbcq->categorie, lbcq->region, lbcq->query);
		return url;
	}else{
		return NULL;
	}
}
