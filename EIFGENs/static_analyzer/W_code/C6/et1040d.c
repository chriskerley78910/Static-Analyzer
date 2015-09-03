/*
 * Class ETF_STR_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1040 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1040 [] = {0xFF11,236,0xFF12,1039,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1040 [] = {0xFF11,1039,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1040 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1040 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1040 [] = {0xFF11,1039,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1040 [] = {0xFF11,1039,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1040 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1040 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1040 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1040 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1040 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1040 [] = {0xFF11,1039,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1040 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1040 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1040[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1040},
	{1, (BODY_INDEX)-1, 236, gen_type1_1040},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1039, gen_type2_1040},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1040},
	{14, (BODY_INDEX)-1, 0, gen_type4_1040},
	{15, (BODY_INDEX)-1, 1039, gen_type5_1040},
	{16, (BODY_INDEX)-1, 1039, gen_type6_1040},
	{17, (BODY_INDEX)-1, 0, gen_type7_1040},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1040},
	{14892, (BODY_INDEX)-1, 219, gen_type9_1040},
	{22, (BODY_INDEX)-1, 219, gen_type10_1040},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1040},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1039, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1039, gen_type12_1040},
	{14874, 0, 219, gen_type13_1040},
	{14875, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14890, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14891, 8, 219, gen_type14_1040},
};

extern void Init1040(void);
void Init1040(void)
{
	IDSC(desc_1040, 0, 1039);
	IDSC(desc_1040 + 1, 1, 1039);
	IDSC(desc_1040 + 32, 374, 1039);
	IDSC(desc_1040 + 34, 433, 1039);
}


#ifdef __cplusplus
}
#endif
