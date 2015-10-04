/*
 * Class PLUS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1103 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1103 [] = {0xFF11,236,0xFF12,1102,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1103 [] = {0xFF11,1102,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1103 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1103 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1103 [] = {0xFF11,1102,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1103 [] = {0xFF11,1102,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1103 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1103 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1103 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1103 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1103 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1103 [] = {0xFF11,1102,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1103 [] = {0xFF11,258,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1103 [] = {0xFF11,245,0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1103 [] = {0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1103 [] = {0xFF11,1078,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1103 [] = {0xFF11,1078,0xFFFF};


static struct desc_info desc_1103[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1103},
	{1, (BODY_INDEX)-1, 236, gen_type1_1103},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{15763, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1102, gen_type2_1103},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1103},
	{14, (BODY_INDEX)-1, 0, gen_type4_1103},
	{15, (BODY_INDEX)-1, 1102, gen_type5_1103},
	{16, (BODY_INDEX)-1, 1102, gen_type6_1103},
	{17, (BODY_INDEX)-1, 0, gen_type7_1103},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1103},
	{21, (BODY_INDEX)-1, 219, gen_type9_1103},
	{22, (BODY_INDEX)-1, 219, gen_type10_1103},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1103},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1102, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1102, gen_type12_1103},
	{15743, 0, 258, gen_type13_1103},
	{15744, (BODY_INDEX)-1, 190, NULL},
	{15741, (BODY_INDEX)-1, 205, NULL},
	{15745, (BODY_INDEX)-1, 245, gen_type14_1103},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1078, gen_type15_1103},
	{15746, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15762, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15758, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15759, (BODY_INDEX)-1, 1078, gen_type16_1103},
	{15760, (BODY_INDEX)-1, 1078, gen_type17_1103},
	{15764, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1103(void);
void Init1103(void)
{
	IDSC(desc_1103, 0, 1102);
	IDSC(desc_1103 + 1, 1, 1102);
	IDSC(desc_1103 + 32, 394, 1102);
	IDSC(desc_1103 + 35, 98, 1102);
	IDSC(desc_1103 + 37, 380, 1102);
	IDSC(desc_1103 + 38, 375, 1102);
	IDSC(desc_1103 + 42, 363, 1102);
}


#ifdef __cplusplus
}
#endif
