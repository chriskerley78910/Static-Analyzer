/*
 * Class KL_SPECIAL_ROUTINES [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1600 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1600 [] = {0xFF11,236,0xFF12,1599,190,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1600 [] = {0xFF11,1599,190,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1600 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1600 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1600 [] = {0xFF11,1599,190,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1600 [] = {0xFF11,1599,190,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1600 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1600 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1600 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1600 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1600 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1600 [] = {1599,190,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1600 [] = {0xFF11,1599,190,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type20_1600 [] = {0xFF11,391,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type21_1600 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_1600[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1600},
	{1, (BODY_INDEX)-1, 236, gen_type1_1600},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1599, gen_type2_1600},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1600},
	{14, (BODY_INDEX)-1, 0, gen_type4_1600},
	{15, (BODY_INDEX)-1, 1599, gen_type5_1600},
	{16, (BODY_INDEX)-1, 1599, gen_type6_1600},
	{17, (BODY_INDEX)-1, 0, gen_type7_1600},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1600},
	{21, (BODY_INDEX)-1, 219, gen_type9_1600},
	{22, (BODY_INDEX)-1, 219, gen_type10_1600},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1600},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1599, gen_type12_1600},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1599, gen_type13_1600},
	{13871, (BODY_INDEX)-1, 391, gen_type14_1600},
	{13872, (BODY_INDEX)-1, 391, gen_type15_1600},
	{13873, (BODY_INDEX)-1, 391, gen_type16_1600},
	{13874, (BODY_INDEX)-1, 391, gen_type17_1600},
	{13875, (BODY_INDEX)-1, 190, NULL},
	{13876, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13877, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13878, (BODY_INDEX)-1, 391, gen_type18_1600},
	{13879, (BODY_INDEX)-1, 391, gen_type19_1600},
	{13880, (BODY_INDEX)-1, 391, gen_type20_1600},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type21_1600},
};

extern void Init1600(void);
void Init1600(void)
{
	IDSC(desc_1600, 0, 1599);
	IDSC(desc_1600 + 1, 1, 1599);
	IDSC(desc_1600 + 32, 469, 1599);
}


#ifdef __cplusplus
}
#endif
