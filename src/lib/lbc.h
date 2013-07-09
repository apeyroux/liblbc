/*
 * def des structs
 */

struct lbc_query_s {
	char *categorie;
	char *region;
	char *query;
};

struct lbc_annonce_s {
	char *title;
	char *number;
	char *description;
	char *url;
	struct annonce_s *prev;
	struct annonce_s *next;
};

typedef struct lbc_annonce_s lbc_annonce_t;
typedef struct lbc_query_s lbc_query_t;

/*
 * define des function
 */

int lbcUrl(lbc_query_t lbcq, char *url);


/*
 * def adresse root
 */

#define ROOT_URL "http://www.leboncoin.fr"

/*
 * def des exports
 */

#define TO_TXT 0
#define TO_HTML 1
#define TO_PDF 2

/*
 * def des regions
 */

#define REGION_ALSACE "alsace"
#define REGION_AQUITAINE "aquitaine"
#define REGION_AUVERGNE "auvergne"
#define REGION_BASSE_NORMANDIE "basse_normandie"
#define REGION_BOURGOGNE "bourgogne"
#define REGION_BRETAGNE "bretagne"
#define REGION_CENTRE "centre"
#define REGION_CHAMPAGNE_ARDENNE "champagne_ardenne"
#define REGION_CORSE "corse"
#define REGION_FRANCHE_COMTE "franche_comte"
#define REGION_HAUTE_NORMANDIE "haute_normandie"
#define REGION_ILE_DE_FRANCE "ile_de_france"
#define REGION_LANGUEDOC_ROUSSILLON "languedoc_roussillon"
#define REGION_LIMOUSIN "limousin"
#define REGION_LORRAINE "lorraine"
#define REGION_MIDI_PYRENEES "midi_pyrenees"
#define REGION_NORD_PAS_DE_CALAIS "nord_pas_de_calais"
#define REGION_PAYS_DE_LA_LOIRE "pays_de_la_loire"
#define REGION_PICARDIE "picardie"
#define REGION_POITOU_CHARENTES "poitou_charentes"
#define REGION_PROVENCE_ALPES_COTE_AZUR "provence_alpes_cote_d_azur"
#define REGION_RHONE_ALPES "rhone_alpes"
#define REGION_GUADELOUPE "guadeloupe"
#define REGION_MARTINIQUE "martinique"
#define REGION_GUYANE "guyane"
#define REGION_REUNION "reunion"

/*
 * def des categories
 */

#define CATEGO_ALL "annonces"
#define CATEGO_VEHICULES "_vehicules_"
#define CATEGO_VOITURES "voitures"
#define CATEGO_MOTO "moto"
#define CATEGO_CARAVANING "caravaning"
#define CATEGO_UTILITAIRES "utilitaires"
#define CATEGO_EQUIPEMENT_AUTO "equipement_auto"
#define CATEGO_EQUIPEMENT_MOTO "equipement_moto"
#define CATEGO_EQUIPEMENT_CARAVANING "equipement_caravaning"
#define CATEGO_NAUTISME "nautisme"
#define CATEGO_EQUIPEMENT_NAUTISME "equipement_nautisme"
#define CATEGO_IMMOBILIER "_immobilier_"
#define CATEGO_VENTE_IMMOBILIERES "ventes_immobilieres"
#define CATEGO_LOCATION "locations"
#define CATEGO_COLOCATION "colocations"
#define CATEGO_LOCATION_VACANCES "locations_de_vacances"
#define CATEGO_BUREAUX_COMMERCES "bureaux_commerces"
#define CATEGO_MULTIMEDIA "_multimedia_"
#define CATEGO_CONSOLES_JEUX_VIDEO "consoles_jeux_video"
#define CATEGO_INFORMATIQUE "informatique"
#define CATEGO_IMAGE_SON "image_son"
#define CATEGO_TELEPHONIE "telephonie"
#define CATEGO_MAISON "_maison_"
#define CATEGO_AMEUBLEMENT "ameublement"
#define CATEGO_ELECTROMENAGER "electromenager"
#define CATEGO_ART_TABLE "arts_de_la_table"
#define CATEGO_DECORATION "decoration"
#define CATEGO_LINGE_MAISON "linge_de_maison"
#define CATEGO_BRICOLAGE "bricolage"
#define CATEGO_JARDINAGE "jardinage"
#define CATEGO_VETEMENTS "vetements"
#define CATEGO_CHAUSSURES "chaussures"
#define CATEGO_ACCESSOIRES_BAGAGERIE "accessoires_bagagerie"
#define CATEGO_MONTRES_BIJOUX "montres_bijoux"
#define CATEGO_EQUIPEMENT_BEBE "equipement_bebe"
#define CATEGO_VETEMENTS_BEBE "vetements_bebe"
#define CATEGO_LOISIRS "_loisirs_"
#define CATEGO_DVD_FILMS "dvd_films"
#define CATEGO_CD_MUSIQUE "cd_musique"
#define CATEGO_LIVRES "livres"
#define CATEGO_ANIMAUX "animaux"
#define CATEGO_VELOS "velos"
#define CATEGO_SPORTS_HOBBIES "sports_hobbies"
#define CATEGO_INSTRUMENTS_MUSIQUE "instruments_de_musique"
#define CATEGO_COLLECTION "collection"
#define CATEGO_JEUX_JOUETS "jeux_jouets"
#define CATEGO_VINS_GASTRONOMIE "vins_gastronomie"
#define CATEGO_EMPLOI_SERVICES "_emploi_services_"
#define CATEGO_MATERIEL_PROFESSIONNEL "_materiel_professionnel_"
#define CATEGO_EMPLOI "emploi"
#define CATEGO_SERVICES "services"
#define CATEGO_BILLETTERIE "billetterie"
#define CATEGO_EVENEMENTS "evenements"
#define CATEGO_COURS_PARTICULIERS "cours_particuliers"
#define CATEGO_NONE "_"
#define CATEGO_AUTRES "autres"
