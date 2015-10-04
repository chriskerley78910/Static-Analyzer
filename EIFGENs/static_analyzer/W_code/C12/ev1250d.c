/*
 * Class EV_FONTABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1250 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1250 [] = {0xFF11,236,0xFF12,1249,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1250 [] = {0xFF11,1249,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1250 [] = {0xFF11,1249,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1250 [] = {0xFF11,1249,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1250 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1250 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1250 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1250 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1250 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1250 [] = {0xFF11,1249,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1250 [] = {0xFF11,1374,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1250 [] = {0xFF11,1341,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1250 [] = {0xFF11,1226,0xFFFF};


static struct desc_info desc_1250[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1250},
	{1, (BODY_INDEX)-1, 236, gen_type1_1250},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1249, gen_type2_1250},
	{16813, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1250},
	{14, (BODY_INDEX)-1, 0, gen_type4_1250},
	{15, (BODY_INDEX)-1, 1249, gen_type5_1250},
	{16, (BODY_INDEX)-1, 1249, gen_type6_1250},
	{17, (BODY_INDEX)-1, 0, gen_type7_1250},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1250},
	{21, (BODY_INDEX)-1, 219, gen_type9_1250},
	{22, (BODY_INDEX)-1, 219, gen_type10_1250},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1250},
	{16821, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1249, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1249, gen_type12_1250},
	{16822, 0, 0, NULL},
	{16823, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16824, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16825, (BODY_INDEX)-1, 190, NULL},
	{17223, 8, 1374, gen_type13_1250},
	{16827, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16828, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16814, (BODY_INDEX)-1, 190, NULL},
	{16815, (BODY_INDEX)-1, 1341, gen_type14_1250},
	{16816, (BODY_INDEX)-1, 199, NULL},
	{16817, (BODY_INDEX)-1, 190, NULL},
	{16818, (BODY_INDEX)-1, 190, NULL},
	{16819, (BODY_INDEX)-1, 190, NULL},
	{17221, (BODY_INDEX)-1, 1226, gen_type15_1250},
	{17222, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1250(void);
void Init1250(void)
{
	IDSC(desc_1250, 0, 1249);
	IDSC(desc_1250 + 1, 1, 1249);
	IDSC(desc_1250 + 32, 503, 1249);
	IDSC(desc_1250 + 47, 617, 1249);
}


#ifdef __cplusplus
}
#endif
