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
	else if(0 == strcmp(categorie, "vehicule"))
		lbc_query->categorie = strdup(CATEGO_VEHICULES);
	else if(0 == strcmp(categorie, "voiture"))
		lbc_query->categorie = strdup(CATEGO_VOITURES);
	else if(0 == strcmp(categorie, "moto"))
		lbc_query->categorie = strdup(CATEGO_MOTO);
	else if(0 == strcmp(categorie, "caravaning"))
		lbc_query->categorie = strdup(CATEGO_CARAVANING);
	else if(0 == strcmp(categorie, "utilitaires"))
		lbc_query->categorie = strdup(CATEGO_UTILITAIRES);
	else if(0 == strcmp(categorie, "eq_auto"))
		lbc_query->categorie = strdup(CATEGO_EQUIPEMENT_AUTO);
	else if(0 == strcmp(categorie, "eq_moto"))
		lbc_query->categorie = strdup(CATEGO_EQUIPEMENT_MOTO);
	else if(0 == strcmp(categorie, "eq_caravaning"))
		lbc_query->categorie = strdup(CATEGO_EQUIPEMENT_CARAVANING);
	else if(0 == strcmp(categorie, "nautisme"))
		lbc_query->categorie = strdup(CATEGO_NAUTISME);
	else if(0 == strcmp(categorie, "eq_nautisme"))
		lbc_query->categorie = strdup(CATEGO_EQUIPEMENT_NAUTISME);
	else if(0 == strcmp(categorie, "immo"))
		lbc_query->categorie = strdup(CATEGO_IMMOBILIER);
	else if(0 == strcmp(categorie, "immobilier"))
		lbc_query->categorie = strdup(CATEGO_IMMOBILIER);
	else if(0 == strcmp(categorie, "ventes_immo"))
		lbc_query->categorie = strdup(CATEGO_VENTE_IMMOBILIERES);
	else if(0 == strcmp(categorie, "location"))
		lbc_query->categorie = strdup(CATEGO_LOCATION);
	else if(0 == strcmp(categorie, "colocation"))
		lbc_query->categorie = strdup(CATEGO_COLOCATION);
	else if(0 == strcmp(categorie, "loc_vacances"))
		lbc_query->categorie = strdup(CATEGO_LOCATION_VACANCES);
	else if(0 == strcmp(categorie, "loc_commerce"))
		lbc_query->categorie = strdup(CATEGO_BUREAUX_COMMERCES);
	else if(0 == strcmp(categorie, "multimedia"))
		lbc_query->categorie = strdup(CATEGO_MULTIMEDIA);
	else if(0 == strcmp(categorie, "console_jeux_video"))
		lbc_query->categorie = strdup(CATEGO_CONSOLES_JEUX_VIDEO);
	else if(0 == strcmp(categorie, "informatique"))
		lbc_query->categorie = strdup(CATEGO_INFORMATIQUE);
	else if(0 == strcmp(categorie, "image_son"))
		lbc_query->categorie = strdup(CATEGO_IMAGE_SON);
	else if(0 == strcmp(categorie, "telephonie"))
		lbc_query->categorie = strdup(CATEGO_TELEPHONIE);
	else if(0 == strcmp(categorie, "maison"))
		lbc_query->categorie = strdup(CATEGO_MAISON);
	else if(0 == strcmp(categorie, "ameublement"))
		lbc_query->categorie = strdup(CATEGO_AMEUBLEMENT);
	else if(0 == strcmp(categorie, "electromenager"))
		lbc_query->categorie = strdup(CATEGO_ELECTROMENAGER);
	else if(0 == strcmp(categorie, "art_table"))
		lbc_query->categorie = strdup(CATEGO_ART_TABLE);
	else if(0 == strcmp(categorie, "deco"))
		lbc_query->categorie = strdup(CATEGO_DECORATION);
	else if(0 == strcmp(categorie, "linge_maison"))
		lbc_query->categorie = strdup(CATEGO_LINGE_MAISON);
	else if(0 == strcmp(categorie, "bricolage"))
		lbc_query->categorie = strdup(CATEGO_BRICOLAGE);
	else if(0 == strcmp(categorie, "jardinage"))
		lbc_query->categorie = strdup(CATEGO_JARDINAGE);
	else if(0 == strcmp(categorie, "vetements"))
		lbc_query->categorie = strdup(CATEGO_VETEMENTS);
	else if(0 == strcmp(categorie, "chaussures"))
		lbc_query->categorie = strdup(CATEGO_CHAUSSURES);
	else if(0 == strcmp(categorie, "accessoires_bagagerie"))
		lbc_query->categorie = strdup(CATEGO_ACCESSOIRES_BAGAGERIE);
	else if(0 == strcmp(categorie, "montres_bijoux"))
		lbc_query->categorie = strdup(CATEGO_MONTRES_BIJOUX);
	else if(0 == strcmp(categorie, "equipement_bebe"))
		lbc_query->categorie = strdup(CATEGO_EQUIPEMENT_BEBE);
	else if(0 == strcmp(categorie, "vetements_bebe"))
		lbc_query->categorie = strdup(CATEGO_VETEMENTS_BEBE);
	else if(0 == strcmp(categorie, "loisirs"))
		lbc_query->categorie = strdup(CATEGO_LOISIRS);
	else if(0 == strcmp(categorie, "dvd"))
		lbc_query->categorie = strdup(CATEGO_DVD_FILMS);
	else if(0 == strcmp(categorie, "cd"))
		lbc_query->categorie = strdup(CATEGO_CD_MUSIQUE);
	else if(0 == strcmp(categorie, "livres"))
		lbc_query->categorie = strdup(CATEGO_LIVRES);
	else if(0 == strcmp(categorie, "animaux"))
		lbc_query->categorie = strdup(CATEGO_ANIMAUX);
	else if(0 == strcmp(categorie, "velos"))
		lbc_query->categorie = strdup(CATEGO_VELOS);
	else if(0 == strcmp(categorie, "sports_hobbies"))
		lbc_query->categorie = strdup(CATEGO_SPORTS_HOBBIES);
	else if(0 == strcmp(categorie, "instruments_musique"))
		lbc_query->categorie = strdup(CATEGO_INSTRUMENTS_MUSIQUE);
	else if(0 == strcmp(categorie, "collection"))
		lbc_query->categorie = strdup(CATEGO_COLLECTION);
	else if(0 == strcmp(categorie, "jeux"))
		lbc_query->categorie = strdup(CATEGO_JEUX_JOUETS);
	else if(0 == strcmp(categorie, "jouets"))
		lbc_query->categorie = strdup(CATEGO_JEUX_JOUETS);
	else if(0 == strcmp(categorie, "vins"))
		lbc_query->categorie = strdup(CATEGO_VINS_GASTRONOMIE);
	else if(0 == strcmp(categorie, "emploi_services"))
		lbc_query->categorie = strdup(CATEGO_EMPLOI_SERVICES);
	else if(0 == strcmp(categorie, "materiel_pro"))
		lbc_query->categorie = strdup(CATEGO_MATERIEL_PROFESSIONNEL);
	else if(0 == strcmp(categorie, "emploi"))
		lbc_query->categorie = strdup(CATEGO_EMPLOI);
	else if(0 == strcmp(categorie, "services"))
		lbc_query->categorie = strdup(CATEGO_SERVICES);
	else if(0 == strcmp(categorie, "billetterie"))
		lbc_query->categorie = strdup(CATEGO_BILLETTERIE);
	else if(0 == strcmp(categorie, "evenements"))
		lbc_query->categorie = strdup(CATEGO_EVENEMENTS);
	else if(0 == strcmp(categorie, "cours_particuliers"))
		lbc_query->categorie = strdup(CATEGO_COURS_PARTICULIERS);
	else if(0 == strcmp(categorie, ""))
		lbc_query->categorie = strdup(CATEGO_NONE);
	else if(0 == strcmp(categorie, "-"))
		lbc_query->categorie = strdup(CATEGO_NONE);
	else if(0 == strcmp(categorie, "autres"))
		lbc_query->categorie = strdup(CATEGO_AUTRES);
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
