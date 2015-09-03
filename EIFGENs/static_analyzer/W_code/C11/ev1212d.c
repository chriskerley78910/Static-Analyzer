/*
 * Class EV_RADIO_PEER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1212 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1212 [] = {0xFF11,236,0xFF12,1211,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1212 [] = {0xFF11,1211,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1212 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1212 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1212 [] = {0xFF11,1211,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1212 [] = {0xFF11,1211,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1212 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1212 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1212 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1212 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1212 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1212 [] = {0xFF11,1211,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1212 [] = {0xFF11,1334,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1212 [] = {0xFF11,1312,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1212 [] = {0xFF11,403,0xFF11,0xFF11,1211,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1212 [] = {0xFF11,1211,0xFFFF};


static struct desc_info desc_1212[] = {
	{(BODY_INDEX) 17043, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1212},
	{1, (BODY_INDEX)-1, 236, gen_type1_1212},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1211, gen_type2_1212},
	{16714, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1212},
	{14, (BODY_INDEX)-1, 0, gen_type4_1212},
	{15, (BODY_INDEX)-1, 1211, gen_type5_1212},
	{16, (BODY_INDEX)-1, 1211, gen_type6_1212},
	{17, (BODY_INDEX)-1, 0, gen_type7_1212},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1212},
	{21, (BODY_INDEX)-1, 219, gen_type9_1212},
	{22, (BODY_INDEX)-1, 219, gen_type10_1212},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1212},
	{16722, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1211, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1211, gen_type12_1212},
	{16723, 0, 0, NULL},
	{16708, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16709, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16710, (BODY_INDEX)-1, 190, NULL},
	{17048, 8, 1334, gen_type13_1212},
	{16712, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16713, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{17047, (BODY_INDEX)-1, 190, NULL},
	{16716, (BODY_INDEX)-1, 1312, gen_type14_1212},
	{16717, (BODY_INDEX)-1, 199, NULL},
	{16718, (BODY_INDEX)-1, 190, NULL},
	{16719, (BODY_INDEX)-1, 190, NULL},
	{16720, (BODY_INDEX)-1, 190, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 190, NULL},
	{17044, (BODY_INDEX)-1, 403, gen_type15_1212},
	{17045, (BODY_INDEX)-1, 1211, gen_type16_1212},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{17046, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1212(void);
void Init1212(void)
{
	IDSC(desc_1212, 0, 1211);
	IDSC(desc_1212 + 1, 1, 1211);
	IDSC(desc_1212 + 32, 474, 1211);
	IDSC(desc_1212 + 47, 762, 1211);
}


#ifdef __cplusplus
}
#endif
