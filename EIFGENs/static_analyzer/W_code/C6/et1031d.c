/*
 * Class ETF_TYPE_CONSTRAINTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1031 [] = {0xFF11,236,0xFF12,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1031 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1031 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1031 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1031 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1031 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1031 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1031 [] = {0xFF11,1030,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1031 [] = {0xFF11,844,205,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1031 [] = {0xFF11,319,0xFF11,219,205,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1031 [] = {0xFF11,310,0xFF11,310,0xFF11,1018,0xFF11,219,0xFF11,219,0xFFFF};


static struct desc_info desc_1031[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1031},
	{1, (BODY_INDEX)-1, 236, gen_type1_1031},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1030, gen_type2_1031},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1031},
	{14, (BODY_INDEX)-1, 0, gen_type4_1031},
	{15, (BODY_INDEX)-1, 1030, gen_type5_1031},
	{16, (BODY_INDEX)-1, 1030, gen_type6_1031},
	{17, (BODY_INDEX)-1, 0, gen_type7_1031},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1031},
	{21, (BODY_INDEX)-1, 219, gen_type9_1031},
	{22, (BODY_INDEX)-1, 219, gen_type10_1031},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1031},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1030, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1030, gen_type12_1031},
	{14858, (BODY_INDEX)-1, 844, gen_type13_1031},
	{14859, (BODY_INDEX)-1, 319, gen_type14_1031},
	{14860, (BODY_INDEX)-1, 310, gen_type15_1031},
	{14861, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1031(void);
void Init1031(void)
{
	IDSC(desc_1031, 0, 1030);
	IDSC(desc_1031 + 1, 1, 1030);
	IDSC(desc_1031 + 32, 402, 1030);
}


#ifdef __cplusplus
}
#endif
