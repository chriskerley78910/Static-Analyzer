/*
 * Class EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_IMP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1000 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1000 [] = {0xFF11,236,0xFF12,999,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1000 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1000 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1000 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1000 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1000 [] = {0xFF11,1124,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1000 [] = {0xFF11,1124,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1000 [] = {0xFF11,1117,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1000 [] = {0xFF11,1117,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1000 [] = {0xFF11,1126,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1000 [] = {0xFF11,1126,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1000 [] = {0xFF11,1111,0xFFFF};
static EIF_TYPE_INDEX gen_type20_1000 [] = {0xFF11,1111,0xFFFF};


static struct desc_info desc_1000[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1000},
	{1, (BODY_INDEX)-1, 236, gen_type1_1000},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 999, gen_type2_1000},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1000},
	{14, (BODY_INDEX)-1, 0, gen_type4_1000},
	{15, (BODY_INDEX)-1, 999, gen_type5_1000},
	{16, (BODY_INDEX)-1, 999, gen_type6_1000},
	{17, (BODY_INDEX)-1, 0, gen_type7_1000},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1000},
	{21, (BODY_INDEX)-1, 219, gen_type9_1000},
	{22, (BODY_INDEX)-1, 219, gen_type10_1000},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1000},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 999, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 999, gen_type12_1000},
	{14581, (BODY_INDEX)-1, 1124, gen_type13_1000},
	{14589, (BODY_INDEX)-1, 1124, gen_type14_1000},
	{14582, 0, 1124, NULL},
	{14583, (BODY_INDEX)-1, 1117, gen_type15_1000},
	{14590, (BODY_INDEX)-1, 1117, gen_type16_1000},
	{14584, 8, 1117, NULL},
	{14585, (BODY_INDEX)-1, 1126, gen_type17_1000},
	{14591, (BODY_INDEX)-1, 1126, gen_type18_1000},
	{14586, 16, 1126, NULL},
	{14587, (BODY_INDEX)-1, 1111, gen_type19_1000},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1111, gen_type20_1000},
	{14588, 24, 1111, NULL},
};

extern void Init1000(void);
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 1, 999);
	IDSC(desc_1000 + 32, 701, 999);
}


#ifdef __cplusplus
}
#endif
