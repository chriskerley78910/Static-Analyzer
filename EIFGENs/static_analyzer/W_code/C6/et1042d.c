/*
 * Class ETF_TUPLE_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1042 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1042 [] = {0xFF11,236,0xFF12,1041,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1042 [] = {0xFF11,1041,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1042 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1042 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1042 [] = {0xFF11,1041,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1042 [] = {0xFF11,1041,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1042 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1042 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1042 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1042 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1042 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1042 [] = {0xFF11,1041,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1042 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1042 [] = {0xFF11,249,0xFF11,1033,0xFFFF};


static struct desc_info desc_1042[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1042},
	{1, (BODY_INDEX)-1, 236, gen_type1_1042},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1041, gen_type2_1042},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1042},
	{14, (BODY_INDEX)-1, 0, gen_type4_1042},
	{15, (BODY_INDEX)-1, 1041, gen_type5_1042},
	{16, (BODY_INDEX)-1, 1041, gen_type6_1042},
	{17, (BODY_INDEX)-1, 0, gen_type7_1042},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1042},
	{14898, (BODY_INDEX)-1, 219, gen_type9_1042},
	{22, (BODY_INDEX)-1, 219, gen_type10_1042},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1042},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1041, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1041, gen_type12_1042},
	{14874, 0, 219, gen_type13_1042},
	{14875, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14896, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14897, 8, 249, gen_type14_1042},
};

extern void Init1042(void);
void Init1042(void)
{
	IDSC(desc_1042, 0, 1041);
	IDSC(desc_1042 + 1, 1, 1041);
	IDSC(desc_1042 + 32, 374, 1041);
	IDSC(desc_1042 + 34, 431, 1041);
}


#ifdef __cplusplus
}
#endif
