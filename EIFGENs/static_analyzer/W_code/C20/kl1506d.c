/*
 * Class KL_CLONABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1506 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1506 [] = {0xFF11,236,0xFF12,1505,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1506 [] = {0xFF11,1505,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1506 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1506 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1506 [] = {0xFF11,1505,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1506 [] = {0xFF11,1505,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1506 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1506 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1506 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1506 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1506 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1506 [] = {0xFF11,1505,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1506 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1506 [] = {0xFF11,1505,0xFFFF};


static struct desc_info desc_1506[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1506},
	{1, (BODY_INDEX)-1, 236, gen_type1_1506},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1505, gen_type2_1506},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1506},
	{14, (BODY_INDEX)-1, 0, gen_type4_1506},
	{15, (BODY_INDEX)-1, 1505, gen_type5_1506},
	{16, (BODY_INDEX)-1, 1505, gen_type6_1506},
	{17, (BODY_INDEX)-1, 0, gen_type7_1506},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1506},
	{21, (BODY_INDEX)-1, 219, gen_type9_1506},
	{22, (BODY_INDEX)-1, 219, gen_type10_1506},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1506},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1505, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1505, gen_type12_1506},
	{16385, (BODY_INDEX)-1, 864, gen_type13_1506},
	{20660, (BODY_INDEX)-1, 1505, gen_type14_1506},
};

extern void Init1506(void);
void Init1506(void)
{
	IDSC(desc_1506, 0, 1505);
	IDSC(desc_1506 + 1, 1, 1505);
	IDSC(desc_1506 + 32, 602, 1505);
	IDSC(desc_1506 + 33, 974, 1505);
}


#ifdef __cplusplus
}
#endif
