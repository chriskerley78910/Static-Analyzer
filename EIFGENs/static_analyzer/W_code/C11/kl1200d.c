/*
 * Class KL_INTEGER_ROUTINES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1200 [] = {0xFF11,236,0xFF12,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1200 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1200 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1200 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1200 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1200 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1200 [] = {0xFF11,1098,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1200 [] = {0xFF11,1200,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1200 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1200 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1200[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1200},
	{1, (BODY_INDEX)-1, 236, gen_type1_1200},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1199, gen_type2_1200},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1200},
	{14, (BODY_INDEX)-1, 0, gen_type4_1200},
	{15, (BODY_INDEX)-1, 1199, gen_type5_1200},
	{16, (BODY_INDEX)-1, 1199, gen_type6_1200},
	{17, (BODY_INDEX)-1, 0, gen_type7_1200},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1200},
	{21, (BODY_INDEX)-1, 219, gen_type9_1200},
	{22, (BODY_INDEX)-1, 219, gen_type10_1200},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1200},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1199, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1199, gen_type12_1200},
	{14132, (BODY_INDEX)-1, 1098, gen_type13_1200},
	{16102, (BODY_INDEX)-1, 1200, gen_type14_1200},
	{16385, (BODY_INDEX)-1, 864, gen_type15_1200},
	{16471, (BODY_INDEX)-1, 184, NULL},
	{16472, (BODY_INDEX)-1, 219, gen_type16_1200},
	{16473, (BODY_INDEX)-1, 219, gen_type17_1200},
	{16474, (BODY_INDEX)-1, 219, gen_type18_1200},
	{16475, (BODY_INDEX)-1, 205, NULL},
	{16476, (BODY_INDEX)-1, 175, NULL},
	{16477, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16478, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16479, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16480, (BODY_INDEX)-1, 205, NULL},
	{16481, (BODY_INDEX)-1, 205, NULL},
	{16482, (BODY_INDEX)-1, 205, NULL},
	{16483, (BODY_INDEX)-1, 205, NULL},
	{16484, (BODY_INDEX)-1, 205, NULL},
	{16485, (BODY_INDEX)-1, 205, NULL},
	{16486, (BODY_INDEX)-1, 205, NULL},
	{16487, (BODY_INDEX)-1, 205, NULL},
	{16488, (BODY_INDEX)-1, 205, NULL},
	{16489, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1200(void);
void Init1200(void)
{
	IDSC(desc_1200, 0, 1199);
	IDSC(desc_1200 + 1, 1, 1199);
	IDSC(desc_1200 + 32, 608, 1199);
	IDSC(desc_1200 + 33, 601, 1199);
	IDSC(desc_1200 + 34, 602, 1199);
	IDSC(desc_1200 + 35, 734, 1199);
}


#ifdef __cplusplus
}
#endif
