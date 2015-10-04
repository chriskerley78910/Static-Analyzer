/*
 * Class EV_SHARED_TRANSPORT_I
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
static EIF_TYPE_INDEX gen_type13_1001 [] = {0xFF11,1225,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1001 [] = {0xFF11,1225,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1001 [] = {0xFF11,276,205,205,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1001 [] = {0xFF11,871,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1001 [] = {0xFF11,297,205,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1001 [] = {0xFF11,1264,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1001 [] = {0xFF11,1408,0xFFFF};
static EIF_TYPE_INDEX gen_type20_1001 [] = {0xFF11,1295,0xFFFF};
static EIF_TYPE_INDEX gen_type21_1001 [] = {0xFF11,1461,0xFFFF};
static EIF_TYPE_INDEX gen_type22_1001 [] = {0xFF11,1252,0xFFFF};


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
	{14601, (BODY_INDEX)-1, 1225, gen_type13_1001},
	{14602, (BODY_INDEX)-1, 1225, gen_type14_1001},
	{14603, 24, 190, NULL},
	{14604, (BODY_INDEX)-1, 276, gen_type15_1001},
	{14605, (BODY_INDEX)-1, 871, gen_type16_1001},
	{14606, 0, 1358, NULL},
	{14607, 8, 1358, NULL},
	{14608, 26, 208, NULL},
	{14609, 28, 208, NULL},
	{14610, (BODY_INDEX)-1, 297, gen_type17_1001},
	{14611, (BODY_INDEX)-1, 1264, gen_type18_1001},
	{14592, (BODY_INDEX)-1, 1408, gen_type19_1001},
	{14593, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14594, (BODY_INDEX)-1, 1295, gen_type20_1001},
	{14595, (BODY_INDEX)-1, 1461, gen_type21_1001},
	{14596, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14597, 16, 1274, NULL},
	{14598, (BODY_INDEX)-1, 1252, gen_type22_1001},
	{14599, 30, 208, NULL},
	{14600, 32, 208, NULL},
};

extern void Init1001(void);
void Init1001(void)
{
	IDSC(desc_1001, 0, 1000);
	IDSC(desc_1001 + 1, 1, 1000);
	IDSC(desc_1001 + 32, 700, 1000);
}


#ifdef __cplusplus
}
#endif
