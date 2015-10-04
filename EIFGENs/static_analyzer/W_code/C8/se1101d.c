/*
 * Class SET_ENUMERATION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1101 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1101 [] = {0xFF11,236,0xFF12,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1101 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1101 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1101 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1101 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1101 [] = {0xFF11,258,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1101 [] = {0xFF11,245,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1101 [] = {0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1101 [] = {0xFF11,1072,0xFFFF};


static struct desc_info desc_1101[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1101},
	{1, (BODY_INDEX)-1, 236, gen_type1_1101},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{15754, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1100, gen_type2_1101},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1101},
	{14, (BODY_INDEX)-1, 0, gen_type4_1101},
	{15, (BODY_INDEX)-1, 1100, gen_type5_1101},
	{16, (BODY_INDEX)-1, 1100, gen_type6_1101},
	{17, (BODY_INDEX)-1, 0, gen_type7_1101},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1101},
	{21, (BODY_INDEX)-1, 219, gen_type9_1101},
	{22, (BODY_INDEX)-1, 219, gen_type10_1101},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1101},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1100, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1100, gen_type12_1101},
	{15743, 0, 258, gen_type13_1101},
	{15744, (BODY_INDEX)-1, 190, NULL},
	{15741, (BODY_INDEX)-1, 205, NULL},
	{15745, (BODY_INDEX)-1, 245, gen_type14_1101},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1078, gen_type15_1101},
	{15746, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15748, 8, 1072, gen_type16_1101},
	{15749, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15750, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15751, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15752, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15753, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15755, (BODY_INDEX)-1, 190, NULL},
	{15756, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1101(void);
void Init1101(void)
{
	IDSC(desc_1101, 0, 1100);
	IDSC(desc_1101 + 1, 1, 1100);
	IDSC(desc_1101 + 32, 394, 1100);
	IDSC(desc_1101 + 35, 98, 1100);
	IDSC(desc_1101 + 37, 380, 1100);
	IDSC(desc_1101 + 38, 360, 1100);
	IDSC(desc_1101 + 45, 363, 1100);
}


#ifdef __cplusplus
}
#endif
