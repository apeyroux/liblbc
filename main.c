#include <stdio.h>
#include <lbc.h>

int main(int ac, char **av) {
	char *url = NULL;
	getUrl(url, "maison clamart", REGION_ILE_DE_FRANCE);
	printf("%s\n", url);
	return 0;
}
