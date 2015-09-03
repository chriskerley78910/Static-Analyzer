/*
 * Class ETF_INPUT_HANDLER_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1032 [] = {0xFF11,236,0xFF12,1031,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1032 [] = {0xFF11,1031,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1032 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1032 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1032 [] = {0xFF11,1031,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1032 [] = {0xFF11,1031,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1032 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1032 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1032 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1032 [] = {0xFF11,1031,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1032 [] = {0xFF11,844,205,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1032 [] = {0xFF11,319,0xFF11,219,205,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1032 [] = {0xFF11,310,0xFF11,310,0xFF11,1018,0xFF11,219,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1032 [] = {0xFF11,940,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1032 [] = {0xFF11,1520,0xFF11,0xFFF9,1,173,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type21_1032 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type22_1032 [] = {0xFF11,1113,0xFFFF};
static EIF_TYPE_INDEX gen_type23_1032 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1032[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1032},
	{1, (BODY_INDEX)-1, 236, gen_type1_1032},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1031, gen_type2_1032},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1032},
	{14, (BODY_INDEX)-1, 0, gen_type4_1032},
	{15, (BODY_INDEX)-1, 1031, gen_type5_1032},
	{16, (BODY_INDEX)-1, 1031, gen_type6_1032},
	{17, (BODY_INDEX)-1, 0, gen_type7_1032},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1032},
	{21, (BODY_INDEX)-1, 219, gen_type9_1032},
	{22, (BODY_INDEX)-1, 219, gen_type10_1032},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1032},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1031, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1031, gen_type12_1032},
	{14858, (BODY_INDEX)-1, 844, gen_type13_1032},
	{14859, (BODY_INDEX)-1, 319, gen_type14_1032},
	{14860, (BODY_INDEX)-1, 310, gen_type15_1032},
	{14861, (BODY_INDEX)-1, 190, NULL},
	{14873, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14862, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14863, (BODY_INDEX)-1, 219, gen_type16_1032},
	{14864, 24, 190, NULL},
	{14865, 0, 219, gen_type17_1032},
	{14866, 8, 940, gen_type18_1032},
	{14867, 16, 1520, gen_type19_1032},
	{14868, (BODY_INDEX)-1, 219, gen_type20_1032},
	{14869, (BODY_INDEX)-1, 219, gen_type21_1032},
	{14870, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14871, (BODY_INDEX)-1, 1113, gen_type22_1032},
	{14872, (BODY_INDEX)-1, 219, gen_type23_1032},
};

extern void Init1032(void);
void Init1032(void)
{
	IDSC(desc_1032, 0, 1031);
	IDSC(desc_1032 + 1, 1, 1031);
	IDSC(desc_1032 + 32, 402, 1031);
	IDSC(desc_1032 + 36, 361, 1031);
}


#ifdef __cplusplus
}
#endif
