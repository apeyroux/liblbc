#include <stdio.h>
#include <stdlib.h>
#include <lbc.h>

int main(int ac, char **av) {
	lbc_query_t lbcq = { CATEGO_LIVRES, REGION_ILE_DE_FRANCE, "OuiOui" };
	char *url = (char *) malloc(1024);
	lbcUrl(lbcq, url);
	fprintf(stdout, "url: %s\n", url);
	return 0;
}
