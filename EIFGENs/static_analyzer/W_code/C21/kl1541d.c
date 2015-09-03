/*
 * Class KL_LINKABLE [G#1]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1541 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1541 [] = {0xFF11,236,0xFF12,1540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1541 [] = {0xFF11,1540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1541 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1541 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1541 [] = {0xFF11,1540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1541 [] = {0xFF11,1540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1541 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1541 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1541 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1541 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1541 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1541 [] = {1540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1541 [] = {0xFF11,1540,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1541 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1541 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1541 [] = {1540,0xFFF8,1,0xFFFF};


static struct desc_info desc_1541[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1541},
	{1, (BODY_INDEX)-1, 236, gen_type1_1541},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1540, gen_type2_1541},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1541},
	{14, (BODY_INDEX)-1, 0, gen_type4_1541},
	{15, (BODY_INDEX)-1, 1540, gen_type5_1541},
	{16, (BODY_INDEX)-1, 1540, gen_type6_1541},
	{17, (BODY_INDEX)-1, 0, gen_type7_1541},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1541},
	{21, (BODY_INDEX)-1, 219, gen_type9_1541},
	{22, (BODY_INDEX)-1, 219, gen_type10_1541},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1541},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1540, gen_type12_1541},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1540, gen_type13_1541},
	{14195, 0, (EIF_TYPE_INDEX)-1, gen_type14_1541},
	{14196, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14197, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_1541},
	{14201, 8, 1540, gen_type16_1541},
	{14202, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14203, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1541(void);
void Init1541(void)
{
	IDSC(desc_1541, 0, 1540);
	IDSC(desc_1541 + 1, 1, 1540);
	IDSC(desc_1541 + 32, 697, 1540);
	IDSC(desc_1541 + 36, 573, 1540);
}


#ifdef __cplusplus
}
#endif
