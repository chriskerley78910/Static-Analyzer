/*
 * Class ETF_MODEL_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_880 [] = {0xFF11,1555,879,0xFFFF};
static EIF_TYPE_INDEX gen_type2_880 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_880 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_880 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_880 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type6_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_880 [] = {0xFF11,15,0xFFFF};
static EIF_TYPE_INDEX gen_type9_880 [] = {0xFF11,878,0xFFFF};


static struct desc_info desc_880[] = {
	{(BODY_INDEX) 13941, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_880},
	{1, (BODY_INDEX)-1, 1555, gen_type1_880},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 879, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_880},
	{14, (BODY_INDEX)-1, 0, gen_type3_880},
	{15, (BODY_INDEX)-1, 879, NULL},
	{16, (BODY_INDEX)-1, 879, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_880},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, gen_type5_880},
	{21, (BODY_INDEX)-1, 219, gen_type6_880},
	{22, (BODY_INDEX)-1, 219, gen_type7_880},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, gen_type8_880},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 879, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 879, NULL},
	{13942, (BODY_INDEX)-1, 878, gen_type9_880},
};

extern void Init880(void);
void Init880(void)
{
	IDSC(desc_880, 0, 879);
	IDSC(desc_880 + 1, 1, 879);
	IDSC(desc_880 + 32, 363, 879);
}


#ifdef __cplusplus
}
#endif
