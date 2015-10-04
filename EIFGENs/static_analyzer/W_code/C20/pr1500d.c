/*
 * Class PRINTER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1500 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1500 [] = {0xFF11,236,0xFF12,1499,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1500 [] = {0xFF11,1499,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1500 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1500 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1500 [] = {0xFF11,1499,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1500 [] = {0xFF11,1499,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1500 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1500 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1500 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1500 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1500 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1500 [] = {0xFF11,1499,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1500 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1500[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1500},
	{1, (BODY_INDEX)-1, 236, gen_type1_1500},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1499, gen_type2_1500},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1500},
	{14, (BODY_INDEX)-1, 0, gen_type4_1500},
	{15, (BODY_INDEX)-1, 1499, gen_type5_1500},
	{16, (BODY_INDEX)-1, 1499, gen_type6_1500},
	{17, (BODY_INDEX)-1, 0, gen_type7_1500},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1500},
	{20580, (BODY_INDEX)-1, 219, gen_type9_1500},
	{22, (BODY_INDEX)-1, 219, gen_type10_1500},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1500},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1499, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1499, gen_type12_1500},
	{20581, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20569, 0, 219, gen_type13_1500},
	{20570, 8, 190, NULL},
	{20571, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20572, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20573, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20574, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20575, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20576, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20577, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20578, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20579, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1500(void);
void Init1500(void)
{
	IDSC(desc_1500, 0, 1499);
	IDSC(desc_1500 + 1, 1, 1499);
	IDSC(desc_1500 + 32, 361, 1499);
	IDSC(desc_1500 + 37, 373, 1499);
}


#ifdef __cplusplus
}
#endif
