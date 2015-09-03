/*
 * Class EV_COORDINATE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1112 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1112 [] = {0xFF11,236,0xFF12,1111,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1112 [] = {0xFF11,1111,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1112 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1112 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1112 [] = {0xFF11,1111,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1112 [] = {0xFF11,1111,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1112 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1112 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1112 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1112 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1112 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1112 [] = {0xFF11,1111,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1112 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1112[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1112},
	{1, (BODY_INDEX)-1, 236, gen_type1_1112},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1111, gen_type2_1112},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1112},
	{14, (BODY_INDEX)-1, 0, gen_type4_1112},
	{15, (BODY_INDEX)-1, 1111, gen_type5_1112},
	{16, (BODY_INDEX)-1, 1111, gen_type6_1112},
	{17, (BODY_INDEX)-1, 0, gen_type7_1112},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1112},
	{21, (BODY_INDEX)-1, 219, gen_type9_1112},
	{22, (BODY_INDEX)-1, 219, gen_type10_1112},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1112},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1111, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1111, gen_type12_1112},
	{16057, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16058, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16059, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16060, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16061, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16062, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16063, (BODY_INDEX)-1, 205, NULL},
	{16064, (BODY_INDEX)-1, 205, NULL},
	{16065, (BODY_INDEX)-1, 205, NULL},
	{16066, (BODY_INDEX)-1, 205, NULL},
	{16067, 0, 193, NULL},
	{16068, 8, 193, NULL},
	{16069, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16070, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16071, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16072, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16073, (BODY_INDEX)-1, 219, gen_type13_1112},
};

extern void Init1112(void);
void Init1112(void)
{
	IDSC(desc_1112, 0, 1111);
	IDSC(desc_1112 + 1, 1, 1111);
	IDSC(desc_1112 + 32, 518, 1111);
	IDSC(desc_1112 + 48, 334, 1111);
}


#ifdef __cplusplus
}
#endif
