/*
 * Class COMPOSITE_EXPRESSION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1100 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1100 [] = {0xFF11,236,0xFF12,1099,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1100 [] = {0xFF11,1099,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1100 [] = {0xFF11,1099,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1100 [] = {0xFF11,1099,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1100 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1100 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1100 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1100 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1100 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1100 [] = {0xFF11,1099,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1100 [] = {0xFF11,258,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1100 [] = {0xFF11,245,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1100 [] = {0xFF11,1078,0xFFFF};


static struct desc_info desc_1100[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1100},
	{1, (BODY_INDEX)-1, 236, gen_type1_1100},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{15747, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1099, gen_type2_1100},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1100},
	{14, (BODY_INDEX)-1, 0, gen_type4_1100},
	{15, (BODY_INDEX)-1, 1099, gen_type5_1100},
	{16, (BODY_INDEX)-1, 1099, gen_type6_1100},
	{17, (BODY_INDEX)-1, 0, gen_type7_1100},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1100},
	{21, (BODY_INDEX)-1, 219, gen_type9_1100},
	{22, (BODY_INDEX)-1, 219, gen_type10_1100},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1100},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1099, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1099, gen_type12_1100},
	{15743, 0, 258, gen_type13_1100},
	{15744, (BODY_INDEX)-1, 190, NULL},
	{15741, (BODY_INDEX)-1, 205, NULL},
	{15745, (BODY_INDEX)-1, 245, gen_type14_1100},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1078, gen_type15_1100},
	{15746, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1100(void);
void Init1100(void)
{
	IDSC(desc_1100, 0, 1099);
	IDSC(desc_1100 + 1, 1, 1099);
	IDSC(desc_1100 + 32, 394, 1099);
	IDSC(desc_1100 + 35, 98, 1099);
	IDSC(desc_1100 + 37, 380, 1099);
	IDSC(desc_1100 + 38, 363, 1099);
}


#ifdef __cplusplus
}
#endif
