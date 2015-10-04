/*
 * Class ABSOLUTE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1090 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1090 [] = {0xFF11,236,0xFF12,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1090 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1090 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1090 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1090 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1090 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1090 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1090 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1090 [] = {0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1090 [] = {0xFF11,1084,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1090 [] = {0xFF11,1553,0xFF11,1089,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1090 [] = {0xFF11,1084,0xFFFF};


static struct desc_info desc_1090[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1090},
	{1, (BODY_INDEX)-1, 236, gen_type1_1090},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{1453, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1089, gen_type2_1090},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1090},
	{14, (BODY_INDEX)-1, 0, gen_type4_1090},
	{15, (BODY_INDEX)-1, 1089, gen_type5_1090},
	{16, (BODY_INDEX)-1, 1089, gen_type6_1090},
	{17, (BODY_INDEX)-1, 0, gen_type7_1090},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1090},
	{21, (BODY_INDEX)-1, 219, gen_type9_1090},
	{22, (BODY_INDEX)-1, 219, gen_type10_1090},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1090},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1089, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1089, gen_type12_1090},
	{15495, (BODY_INDEX)-1, 190, NULL},
	{1450, (BODY_INDEX)-1, 190, NULL},
	{1451, (BODY_INDEX)-1, 190, NULL},
	{1452, (BODY_INDEX)-1, 190, NULL},
	{1446, (BODY_INDEX)-1, 205, NULL},
	{1447, (BODY_INDEX)-1, 1089, gen_type13_1090},
	{1448, (BODY_INDEX)-1, 1089, gen_type14_1090},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1089, gen_type15_1090},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1084, gen_type16_1090},
	{15496, (BODY_INDEX)-1, 1553, gen_type17_1090},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1084, gen_type18_1090},
};

extern void Init1090(void);
void Init1090(void)
{
	IDSC(desc_1090, 0, 1089);
	IDSC(desc_1090 + 1, 1, 1089);
	IDSC(desc_1090 + 32, 201, 1089);
	IDSC(desc_1090 + 36, 287, 1089);
	IDSC(desc_1090 + 39, 438, 1089);
}


#ifdef __cplusplus
}
#endif
