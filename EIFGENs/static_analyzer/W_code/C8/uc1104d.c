/*
 * Class UC_STRING_EQUALITY_TESTER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1104 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1104 [] = {0xFF11,236,0xFF12,1103,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1104 [] = {0xFF11,1103,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1104 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1104 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1104 [] = {0xFF11,1103,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1104 [] = {0xFF11,1103,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1104 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1104 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1104 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1104 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1104 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1104 [] = {0xFF11,1103,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1104 [] = {0xFF11,1173,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1104 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1104[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1104},
	{1, (BODY_INDEX)-1, 236, gen_type1_1104},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1103, gen_type2_1104},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1104},
	{14, (BODY_INDEX)-1, 0, gen_type4_1104},
	{15, (BODY_INDEX)-1, 1103, gen_type5_1104},
	{16, (BODY_INDEX)-1, 1103, gen_type6_1104},
	{17, (BODY_INDEX)-1, 0, gen_type7_1104},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1104},
	{21, (BODY_INDEX)-1, 219, gen_type9_1104},
	{22, (BODY_INDEX)-1, 219, gen_type10_1104},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1104},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1103, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1103, gen_type12_1104},
	{15997, (BODY_INDEX)-1, 1173, gen_type13_1104},
	{15998, (BODY_INDEX)-1, 190, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 219, gen_type14_1104},
};

extern void Init1104(void);
void Init1104(void)
{
	IDSC(desc_1104, 0, 1103);
	IDSC(desc_1104 + 1, 1, 1103);
	IDSC(desc_1104 + 32, 576, 1103);
	IDSC(desc_1104 + 33, 1011, 1103);
}


#ifdef __cplusplus
}
#endif
