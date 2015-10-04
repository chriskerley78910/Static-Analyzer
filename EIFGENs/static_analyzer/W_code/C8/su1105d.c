/*
 * Class SUM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1105 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1105 [] = {0xFF11,236,0xFF12,1104,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1105 [] = {0xFF11,1104,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1105 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1105 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1105 [] = {0xFF11,1104,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1105 [] = {0xFF11,1104,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1105 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1105 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1105 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1105 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1105 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1105 [] = {0xFF11,1104,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1105 [] = {0xFF11,258,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1105 [] = {0xFF11,245,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1105 [] = {0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1105 [] = {0xFF11,1078,0xFFFF};


static struct desc_info desc_1105[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1105},
	{1, (BODY_INDEX)-1, 236, gen_type1_1105},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{15770, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1104, gen_type2_1105},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1105},
	{14, (BODY_INDEX)-1, 0, gen_type4_1105},
	{15, (BODY_INDEX)-1, 1104, gen_type5_1105},
	{16, (BODY_INDEX)-1, 1104, gen_type6_1105},
	{17, (BODY_INDEX)-1, 0, gen_type7_1105},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1105},
	{21, (BODY_INDEX)-1, 219, gen_type9_1105},
	{22, (BODY_INDEX)-1, 219, gen_type10_1105},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1105},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1104, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1104, gen_type12_1105},
	{15743, 0, 258, gen_type13_1105},
	{15744, (BODY_INDEX)-1, 190, NULL},
	{15741, (BODY_INDEX)-1, 205, NULL},
	{15745, (BODY_INDEX)-1, 245, gen_type14_1105},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1078, gen_type15_1105},
	{15746, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15769, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15766, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15767, (BODY_INDEX)-1, 1078, gen_type16_1105},
	{15771, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1105(void);
void Init1105(void)
{
	IDSC(desc_1105, 0, 1104);
	IDSC(desc_1105 + 1, 1, 1104);
	IDSC(desc_1105 + 32, 394, 1104);
	IDSC(desc_1105 + 35, 98, 1104);
	IDSC(desc_1105 + 37, 380, 1104);
	IDSC(desc_1105 + 38, 364, 1104);
	IDSC(desc_1105 + 41, 363, 1104);
}


#ifdef __cplusplus
}
#endif
