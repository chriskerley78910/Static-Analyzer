/*
 * Class FIND_SEPARATOR_FACILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1502 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1502 [] = {0xFF11,236,0xFF12,1501,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1502 [] = {0xFF11,1501,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1502 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1502 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1502 [] = {0xFF11,1501,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1502 [] = {0xFF11,1501,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1502 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1502 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1502 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1502 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1502 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1502 [] = {0xFF11,1501,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1502 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1502 [] = {0xFF11,0xFFF9,2,173,0xFF11,219,0xFF11,219,0xFFFF};


static struct desc_info desc_1502[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1502},
	{1, (BODY_INDEX)-1, 236, gen_type1_1502},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1501, gen_type2_1502},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1502},
	{14, (BODY_INDEX)-1, 0, gen_type4_1502},
	{15, (BODY_INDEX)-1, 1501, gen_type5_1502},
	{16, (BODY_INDEX)-1, 1501, gen_type6_1502},
	{17, (BODY_INDEX)-1, 0, gen_type7_1502},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type8_1502},
	{21, (BODY_INDEX)-1, 219, gen_type9_1502},
	{22, (BODY_INDEX)-1, 219, gen_type10_1502},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type11_1502},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1501, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1501, gen_type12_1502},
	{812, (BODY_INDEX)-1, 184, NULL},
	{813, (BODY_INDEX)-1, 205, NULL},
	{814, (BODY_INDEX)-1, 205, NULL},
	{815, (BODY_INDEX)-1, 205, NULL},
	{810, (BODY_INDEX)-1, 205, NULL},
	{811, (BODY_INDEX)-1, 205, NULL},
	{14674, (BODY_INDEX)-1, 190, NULL},
	{14675, (BODY_INDEX)-1, 190, NULL},
	{14676, (BODY_INDEX)-1, 190, NULL},
	{14677, (BODY_INDEX)-1, 190, NULL},
	{14678, (BODY_INDEX)-1, 190, NULL},
	{14679, (BODY_INDEX)-1, 190, NULL},
	{14680, (BODY_INDEX)-1, 190, NULL},
	{14681, (BODY_INDEX)-1, 190, NULL},
	{14682, (BODY_INDEX)-1, 190, NULL},
	{14683, (BODY_INDEX)-1, 190, NULL},
	{14684, (BODY_INDEX)-1, 190, NULL},
	{14685, (BODY_INDEX)-1, 190, NULL},
	{14686, (BODY_INDEX)-1, 190, NULL},
	{14687, (BODY_INDEX)-1, 190, NULL},
	{14688, (BODY_INDEX)-1, 190, NULL},
	{14689, (BODY_INDEX)-1, 190, NULL},
	{14690, (BODY_INDEX)-1, 190, NULL},
	{14691, (BODY_INDEX)-1, 190, NULL},
	{14692, (BODY_INDEX)-1, 190, NULL},
	{14693, (BODY_INDEX)-1, 190, NULL},
	{14694, (BODY_INDEX)-1, 190, NULL},
	{14695, (BODY_INDEX)-1, 190, NULL},
	{14696, (BODY_INDEX)-1, 190, NULL},
	{14697, (BODY_INDEX)-1, 190, NULL},
	{14698, (BODY_INDEX)-1, 190, NULL},
	{14673, (BODY_INDEX)-1, 190, NULL},
	{20951, (BODY_INDEX)-1, 219, gen_type13_1502},
	{20952, (BODY_INDEX)-1, 205, NULL},
	{20953, (BODY_INDEX)-1, 173, gen_type14_1502},
	{20954, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1502(void);
void Init1502(void)
{
	IDSC(desc_1502, 0, 1501);
	IDSC(desc_1502 + 1, 1, 1501);
	IDSC(desc_1502 + 32, 54, 1501);
	IDSC(desc_1502 + 38, 568, 1501);
	IDSC(desc_1502 + 64, 482, 1501);
}


#ifdef __cplusplus
}
#endif
