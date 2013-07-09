#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <lbc.h>

void usage() {
	fprintf(stdout, "usage : -h help\n\t-c categorie\n\t-r region\n\t-q query\n");
}

int main(int ac, char **av) {

	int ch;
	char *url = NULL;
	char *categorie = NULL;
	char *region = NULL;
	char *query = NULL;

	while(EOF != (ch = getopt(ac, av, "hc:r:q:"))) {
		switch(ch) {
			case 'h':
				usage();
				return EXIT_SUCCESS;
			case 'c':
				if(NULL == (categorie = (char *) malloc(strlen(optarg)+1))) {
					fprintf(stderr, "error: can't alloc mem for categorie.\n");
					return EXIT_FAILURE;
				}
				strncpy(categorie, optarg, strlen(optarg)+1);
				break;
			case 'r':
				if(NULL == (region = (char *) malloc(strlen(optarg)+1))) {
					fprintf(stderr, "error: can't alloc mem for region.\n");
					return EXIT_FAILURE;
				}
				strncpy(region, optarg, strlen(optarg)+1);
				break;
			case 'q':
				if(NULL == (query = (char *) malloc(strlen(optarg)+1))) {
					fprintf(stderr, "error: can't alloc mem for query.\n");
					return EXIT_FAILURE;	
				}
				strncpy(query, optarg, strlen(optarg)+1);
				break;
			default:
				usage();
				break;
		}
	}

	if(NULL == query) {
		fprintf(stderr, "error: you should specify query. Please read usage (-h).\n");
		return EXIT_FAILURE;
	}

	lbc_query_t lbcq = { CATEGO_LIVRES, REGION_ILE_DE_FRANCE, query };

	if(NULL == (url = lbcNewUrl(lbcq))) {
		fprintf(stderr, "error: can't init url ...\n");
		return EXIT_FAILURE;
	}

	fprintf(stdout, "url: %s\n", url);


	free(url);

	return EXIT_SUCCESS;
}
