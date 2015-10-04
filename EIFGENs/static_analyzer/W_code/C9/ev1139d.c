/*
 * Class EV_COORDINATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1139 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1139 [] = {0xFF11,236,0xFF12,1138,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1139 [] = {0xFF11,1138,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1139 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1139 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1139 [] = {0xFF11,1138,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1139 [] = {0xFF11,1138,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1139 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1139 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1139 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1139 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1139 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1139 [] = {0xFF11,1138,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1139 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1139[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1139},
	{1, (BODY_INDEX)-1, 236, gen_type1_1139},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1138, gen_type2_1139},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1139},
	{14, (BODY_INDEX)-1, 0, gen_type4_1139},
	{15, (BODY_INDEX)-1, 1138, gen_type5_1139},
	{16, (BODY_INDEX)-1, 1138, gen_type6_1139},
	{17, (BODY_INDEX)-1, 0, gen_type7_1139},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1139},
	{21, (BODY_INDEX)-1, 219, gen_type9_1139},
	{22, (BODY_INDEX)-1, 219, gen_type10_1139},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1139},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1138, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1138, gen_type12_1139},
	{16162, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16163, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16164, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16165, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16166, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16167, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16168, (BODY_INDEX)-1, 205, NULL},
	{16169, (BODY_INDEX)-1, 205, NULL},
	{16170, (BODY_INDEX)-1, 205, NULL},
	{16171, (BODY_INDEX)-1, 205, NULL},
	{16172, 0, 193, NULL},
	{16173, 8, 193, NULL},
	{16174, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16175, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16176, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16177, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16178, (BODY_INDEX)-1, 219, gen_type13_1139},
};

extern void Init1139(void);
void Init1139(void)
{
	IDSC(desc_1139, 0, 1138);
	IDSC(desc_1139 + 1, 1, 1138);
	IDSC(desc_1139 + 32, 550, 1138);
	IDSC(desc_1139 + 48, 334, 1138);
}


#ifdef __cplusplus
}
#endif
