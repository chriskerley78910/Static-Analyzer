/*
 * Class KL_IMPORTED_INTEGER_ROUTINES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1102 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1102 [] = {0xFF11,236,0xFF12,1101,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1102 [] = {0xFF11,1101,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1102 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1102 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1102 [] = {0xFF11,1101,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1102 [] = {0xFF11,1101,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1102 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1102 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1102 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1102 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1102 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1102 [] = {0xFF11,1101,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1102 [] = {0xFF11,1172,0xFFFF};


static struct desc_info desc_1102[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1102},
	{1, (BODY_INDEX)-1, 236, gen_type1_1102},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1101, gen_type2_1102},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1102},
	{14, (BODY_INDEX)-1, 0, gen_type4_1102},
	{15, (BODY_INDEX)-1, 1101, gen_type5_1102},
	{16, (BODY_INDEX)-1, 1101, gen_type6_1102},
	{17, (BODY_INDEX)-1, 0, gen_type7_1102},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1102},
	{21, (BODY_INDEX)-1, 219, gen_type9_1102},
	{22, (BODY_INDEX)-1, 219, gen_type10_1102},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1102},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1101, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1101, gen_type12_1102},
	{15996, (BODY_INDEX)-1, 1172, gen_type13_1102},
};

extern void Init1102(void);
void Init1102(void)
{
	IDSC(desc_1102, 0, 1101);
	IDSC(desc_1102 + 1, 1, 1101);
	IDSC(desc_1102 + 32, 580, 1101);
}


#ifdef __cplusplus
}
#endif
