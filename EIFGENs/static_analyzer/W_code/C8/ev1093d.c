/*
 * Class EV_ANY_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1093 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1093 [] = {0xFF11,236,0xFF12,1092,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1093 [] = {0xFF11,1092,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1093 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1093 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1093 [] = {0xFF11,1092,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1093 [] = {0xFF11,1092,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1093 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1093 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1093 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1093 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1093 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1093 [] = {0xFF11,1092,0xFFFF};


static struct desc_info desc_1093[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1093},
	{1, (BODY_INDEX)-1, 236, gen_type1_1093},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1092, gen_type2_1093},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1093},
	{14, (BODY_INDEX)-1, 0, gen_type4_1093},
	{15, (BODY_INDEX)-1, 1092, gen_type5_1093},
	{16, (BODY_INDEX)-1, 1092, gen_type6_1093},
	{17, (BODY_INDEX)-1, 0, gen_type7_1093},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1093},
	{21, (BODY_INDEX)-1, 219, gen_type9_1093},
	{22, (BODY_INDEX)-1, 219, gen_type10_1093},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1093},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1092, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1092, gen_type12_1093},
};

extern void Init1093(void);
void Init1093(void)
{
	IDSC(desc_1093, 0, 1092);
	IDSC(desc_1093 + 1, 1, 1092);
}


#ifdef __cplusplus
}
#endif
