/*
 * Class EV_FRAME_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1001 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1001 [] = {0xFF11,236,0xFF12,1000,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1001 [] = {0xFF11,1000,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1001 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1001 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1001 [] = {0xFF11,1000,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1001 [] = {0xFF11,1000,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1001 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1001 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1001 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1001 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1001 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1001 [] = {0xFF11,1000,0xFFFF};


static struct desc_info desc_1001[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1001},
	{1, (BODY_INDEX)-1, 236, gen_type1_1001},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1000, gen_type2_1001},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1001},
	{14, (BODY_INDEX)-1, 0, gen_type4_1001},
	{15, (BODY_INDEX)-1, 1000, gen_type5_1001},
	{16, (BODY_INDEX)-1, 1000, gen_type6_1001},
	{17, (BODY_INDEX)-1, 0, gen_type7_1001},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1001},
	{21, (BODY_INDEX)-1, 219, gen_type9_1001},
	{22, (BODY_INDEX)-1, 219, gen_type10_1001},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1001},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1000, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1000, gen_type12_1001},
	{14613, (BODY_INDEX)-1, 205, NULL},
	{14609, (BODY_INDEX)-1, 205, NULL},
	{14610, (BODY_INDEX)-1, 205, NULL},
	{14611, (BODY_INDEX)-1, 205, NULL},
	{14612, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1001(void);
void Init1001(void)
{
	IDSC(desc_1001, 0, 1000);
	IDSC(desc_1001 + 1, 1, 1000);
	IDSC(desc_1001 + 32, 668, 1000);
}


#ifdef __cplusplus
}
#endif
