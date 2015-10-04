/*
 * Class EV_ENVIRONMENT_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1095 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1095 [] = {0xFF11,236,0xFF12,1094,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1095 [] = {0xFF11,1094,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1095 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1095 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1095 [] = {0xFF11,1094,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1095 [] = {0xFF11,1094,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1095 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1095 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1095 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1095 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1095 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1095 [] = {0xFF11,1094,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1095 [] = {0xFF11,1343,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1095 [] = {0xFF11,1219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1095 [] = {0xFF11,216,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1095 [] = {0xFF11,133,0xFFFF};


static struct desc_info desc_1095[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1095},
	{1, (BODY_INDEX)-1, 236, gen_type1_1095},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1094, gen_type2_1095},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1095},
	{14, (BODY_INDEX)-1, 0, gen_type4_1095},
	{15, (BODY_INDEX)-1, 1094, gen_type5_1095},
	{16, (BODY_INDEX)-1, 1094, gen_type6_1095},
	{17, (BODY_INDEX)-1, 0, gen_type7_1095},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1095},
	{21, (BODY_INDEX)-1, 219, gen_type9_1095},
	{22, (BODY_INDEX)-1, 219, gen_type10_1095},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1095},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1094, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1094, gen_type12_1095},
	{15697, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15698, (BODY_INDEX)-1, 1234, NULL},
	{15699, 0, 1343, gen_type13_1095},
	{15700, (BODY_INDEX)-1, 1219, gen_type14_1095},
	{15701, (BODY_INDEX)-1, 216, gen_type15_1095},
	{15702, 8, 133, gen_type16_1095},
};

extern void Init1095(void);
void Init1095(void)
{
	IDSC(desc_1095, 0, 1094);
	IDSC(desc_1095 + 1, 1, 1094);
	IDSC(desc_1095 + 32, 657, 1094);
}


#ifdef __cplusplus
}
#endif
