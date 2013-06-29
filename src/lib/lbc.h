/*
 * define des function
 */

int getUrl(char *url, const char *query, const char *region);
void testFunction();

/*
 * def des structs
 */

struct annonce_s {
	char *title;
	char *number;
	char *description;
	struct annonce_t *pPrev;
	struct annonce_t *pNext;
};

typedef struct annonce_s annonce_t;

/*
 * def adresse root
 */

#define ROOT_URL "http://www.leboncoin.fr/annonces/offres"

/*
 * def des exports
 */

#define TO_TXT 0
#define TO_HTML 1
#define TO_PDF 1

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

#define CATEGO_ALL 0
#define CATEGO_VEHICULES 1
#define CATEGO_VOITURES 2
#define CATEGO_MOTO 3
#define CATEGO_CARAVANING 4
#define CATEGO_UTILITAIRES 5
#define CATEGO_EQUIPEMENT_AUTO 6
#define CATEGO_EQUIPEMENT_MOTO 44
#define CATEGO_EQUIPEMENT_CARAVANING 50
#define CATEGO_NAUTISME 7
#define CATEGO_EQUIPEMENT_NAUTISME 51
#define CATEGO_IMMOBILIER 8
#define CATEGO_VENTE_IMMOBILIERES 8
#define CATEGO_LOCATION 10
#define CATEGO_COLOCATION 11
#define CATEGO_LOCATION_VACANCES 12
#define CATEGO_BUREAUX_COMMERCES 13
#define CATEGO_MULTIMEDIA 14
#define CATEGO_CONSOLES_JEUX_VIDEO 43
#define CATEGO_INFORMATIQUE 15
#define CATEGO_IMAGE_SON 16
#define CATEGO_TELEPHONIE 17
#define CATEGO_MAISON 18
#define CATEGO_AMEUBLEMENT 19
#define CATEGO_ELECTROMENAGER 20
#define CATEGO_ART_TABLE 45
#define CATEGO_DECORATION 39
#define CATEGO_LINGE_MAISON 46
#define CATEGO_BRICOLAGE 21
#define CATEGO_JARDINAGE 52
#define CATEGO_VETEMENTS 22
#define CATEGO_CHAUSSURES 53
#define CATEGO_ACCESSOIRES_BAGAGERIE 47
#define CATEGO_MONTRES_BIJOUX 42
#define CATEGO_EQUIPEMENT_BEBE 23
#define CATEGO_VETEMENTS_BEBE 54
#define CATEGO_LOISIRS 24
#define CATEGO_DVD_FILMS 25
#define CATEGO_CD_MUSIQUE 26
#define CATEGO_LIVRES 27
#define CATEGO_ANIMAUX 28
#define CATEGO_VELOS 55
#define CATEGO_SPORTS_HOBBIES 29
#define CATEGO_INSTRUMENTS_MUSIQUE 30
#define CATEGO_COLLECTION 40
#define CATEGO_JEUX_JOUETS 41
#define CATEGO_VINS_GASTRONOMIE 48
#define CATEGO_EMPLOI_SERVICES 31
#define CATEGO_MATERIEL_PROFESSIONNEL 32
#define CATEGO_EMPLOI 33
#define CATEGO_SERVICES 34
#define CATEGO_BILLETTERIE 35
#define CATEGO_EVENEMENTS 49 
#define CATEGO_COURS_PARTICULIERS 36
#define CATEGO_NONE 37
#define CATEGO_AUTRES 38
