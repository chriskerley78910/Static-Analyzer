/*
 * Class KL_ARRAY_ROUTINES [BOOLEAN]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1601 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1601 [] = {0xFF11,236,0xFF12,1600,190,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1601 [] = {0xFF11,1600,190,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1601 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1601 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1601 [] = {0xFF11,1600,190,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1601 [] = {0xFF11,1600,190,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1601 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1601 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1601 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1601 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1601 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1601 [] = {1600,190,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1601 [] = {0xFF11,1600,190,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1601 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1601 [] = {0xFF11,393,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1601 [] = {0xFF11,393,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1601 [] = {0xFF11,393,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1601 [] = {0xFF11,393,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1601 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_1601[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1601},
	{1, (BODY_INDEX)-1, 236, gen_type1_1601},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1600, gen_type2_1601},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1601},
	{14, (BODY_INDEX)-1, 0, gen_type4_1601},
	{15, (BODY_INDEX)-1, 1600, gen_type5_1601},
	{16, (BODY_INDEX)-1, 1600, gen_type6_1601},
	{17, (BODY_INDEX)-1, 0, gen_type7_1601},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1601},
	{21, (BODY_INDEX)-1, 219, gen_type9_1601},
	{22, (BODY_INDEX)-1, 219, gen_type10_1601},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1601},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1600, gen_type12_1601},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1600, gen_type13_1601},
	{16385, (BODY_INDEX)-1, 864, gen_type14_1601},
	{16560, (BODY_INDEX)-1, 393, gen_type15_1601},
	{16553, (BODY_INDEX)-1, 393, gen_type16_1601},
	{16554, (BODY_INDEX)-1, 190, NULL},
	{16555, (BODY_INDEX)-1, 190, NULL},
	{16556, (BODY_INDEX)-1, 393, gen_type17_1601},
	{16557, (BODY_INDEX)-1, 393, gen_type18_1601},
	{16558, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16559, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type19_1601},
};

extern void Init1601(void);
void Init1601(void)
{
	IDSC(desc_1601, 0, 1600);
	IDSC(desc_1601 + 1, 1, 1600);
	IDSC(desc_1601 + 32, 602, 1600);
	IDSC(desc_1601 + 33, 525, 1600);
}


#ifdef __cplusplus
}
#endif
