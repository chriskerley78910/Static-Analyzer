/*
 * Class INTEGER_CONSTANT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1081 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1081 [] = {0xFF11,236,0xFF12,1080,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1081 [] = {0xFF11,1080,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1081 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1081 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1081 [] = {0xFF11,1080,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1081 [] = {0xFF11,1080,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1081 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1081 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1081 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1081 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1081 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1081 [] = {0xFF11,1080,0xFFFF};


static struct desc_info desc_1081[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1081},
	{1, (BODY_INDEX)-1, 236, gen_type1_1081},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{15362, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1080, gen_type2_1081},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1081},
	{14, (BODY_INDEX)-1, 0, gen_type4_1081},
	{15, (BODY_INDEX)-1, 1080, gen_type5_1081},
	{16, (BODY_INDEX)-1, 1080, gen_type6_1081},
	{17, (BODY_INDEX)-1, 0, gen_type7_1081},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1081},
	{21, (BODY_INDEX)-1, 219, gen_type9_1081},
	{22, (BODY_INDEX)-1, 219, gen_type10_1081},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1081},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1080, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1080, gen_type12_1081},
	{15358, 0, 205, NULL},
	{15359, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15360, (BODY_INDEX)-1, 205, NULL},
	{15361, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15363, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1081(void);
void Init1081(void)
{
	IDSC(desc_1081, 0, 1080);
	IDSC(desc_1081 + 1, 1, 1080);
	IDSC(desc_1081 + 32, 357, 1080);
	IDSC(desc_1081 + 36, 363, 1080);
}


#ifdef __cplusplus
}
#endif
