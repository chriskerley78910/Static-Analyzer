/*
 * Class ETF_CHAR_PARAM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1029 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1029 [] = {0xFF11,236,0xFF12,1028,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1029 [] = {0xFF11,1028,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1029 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1029 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1029 [] = {0xFF11,1028,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1029 [] = {0xFF11,1028,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1029 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1029 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1029 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1029 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1029 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1029 [] = {0xFF11,1028,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1029 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1029 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1029[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1029},
	{1, (BODY_INDEX)-1, 236, gen_type1_1029},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1028, gen_type2_1029},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1029},
	{14, (BODY_INDEX)-1, 0, gen_type4_1029},
	{15, (BODY_INDEX)-1, 1028, gen_type5_1029},
	{16, (BODY_INDEX)-1, 1028, gen_type6_1029},
	{17, (BODY_INDEX)-1, 0, gen_type7_1029},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1029},
	{14852, (BODY_INDEX)-1, 219, gen_type9_1029},
	{22, (BODY_INDEX)-1, 219, gen_type10_1029},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1029},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1028, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1028, gen_type12_1029},
	{14850, (BODY_INDEX)-1, 219, gen_type13_1029},
	{14851, (BODY_INDEX)-1, 219, gen_type14_1029},
};

extern void Init1029(void);
void Init1029(void)
{
	IDSC(desc_1029, 0, 1028);
	IDSC(desc_1029 + 1, 1, 1028);
	IDSC(desc_1029 + 32, 444, 1028);
}


#ifdef __cplusplus
}
#endif
