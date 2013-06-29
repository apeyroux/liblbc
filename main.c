#include <stdio.h>
#include <stdlib.h>
#include <lbc.h>

int main(int ac, char **av) {
	char *url = NULL;
	url = (char *) malloc(sizeof(char)); 
	getUrl(url, "maison clamart", REGION_ILE_DE_FRANCE);
	printf("%s\n", url);
	free(url);
	return 0;
}
