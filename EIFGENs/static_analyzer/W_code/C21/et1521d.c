/*
 * Class ETF_EVENT [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1521 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1521 [] = {0xFF11,236,0xFF12,1520,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1521 [] = {0xFF11,1520,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1521 [] = {0xFF11,1520,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1521 [] = {0xFF11,1520,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1521 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1521 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1521 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1521 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1521 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1521 [] = {1520,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1521 [] = {0xFF11,1520,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1521 [] = {0xFF11,269,0xFF11,237,0xFF11,0,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1521 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_1521[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1521},
	{1, (BODY_INDEX)-1, 236, gen_type1_1521},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1520, gen_type2_1521},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1521},
	{14, (BODY_INDEX)-1, 0, gen_type4_1521},
	{15, (BODY_INDEX)-1, 1520, gen_type5_1521},
	{16, (BODY_INDEX)-1, 1520, gen_type6_1521},
	{17, (BODY_INDEX)-1, 0, gen_type7_1521},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1521},
	{21, (BODY_INDEX)-1, 219, gen_type9_1521},
	{22, (BODY_INDEX)-1, 219, gen_type10_1521},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1521},
	{13918, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1520, gen_type12_1521},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1520, gen_type13_1521},
	{13919, 0, 269, gen_type14_1521},
	{13920, (BODY_INDEX)-1, 190, NULL},
	{13921, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13922, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13917, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_1521},
};

extern void Init1521(void);
void Init1521(void)
{
	IDSC(desc_1521, 0, 1520);
	IDSC(desc_1521 + 1, 1, 1520);
	IDSC(desc_1521 + 32, 370, 1520);
}


#ifdef __cplusplus
}
#endif
