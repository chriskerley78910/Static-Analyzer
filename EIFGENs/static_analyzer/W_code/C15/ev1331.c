/*
 * Code for class EV_CHARACTER_FORMAT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1331_12391(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1331_12392(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12393(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12394(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12395(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12396(EIF_REFERENCE);
extern void F1331_12397(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1331_12398(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1331_12399(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1331_12400(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1331_12401(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1331_12402(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1331_12403(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1331_12404(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1331_12405(EIF_REFERENCE);
extern void F1331_12406(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1331_12407(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1331_12408(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12409(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12410(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12411(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12412(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12413(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12414(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12415(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12416(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12417(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12418(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12419(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12420(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12421(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12422(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12423(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12424(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12425(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12426(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12427(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12428(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12429(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12430(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12431(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12432(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1331_12433(EIF_REFERENCE);
extern void F1331_12434(EIF_REFERENCE);
extern void EIF_Minit1331(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHARACTER_FORMAT_IMP}.old_make */
void F1331_12391 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 1, 18238);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18238);
	RTCC(arg1, 1330, l_feature_name, 1, RTWCT(9390, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9383, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9390, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9400, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.make */
void F1331_12392 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1330, Current, 1, 0, 18239);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18239);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9525, 0x10000000, 1); /* bcolor */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16777215L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9526, 0x10000000, 1); /* fcolor */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000540, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8373, "default_font_name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7339, 1068))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(loc1 + RTVA(8376, "default_font_point_height_internal", loc1));
	
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(8380, "default_font_weight_internal", loc1));
	
	ui4_3 = ti4_3;
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7346, 1068))(Current)).it_i4);
	ui4_4 = ti4_4;
	ui4_5 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9505, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
	RTHOOK(5);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9403, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9393, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9399, dtype))(Current, ui1_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui1_1
#undef ub1
}

/* {EV_CHARACTER_FORMAT_IMP}.font */
EIF_TYPED_VALUE F1331_12393 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "font";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18240);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18240);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004CA, 0,0); /* Result */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9534, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8560, "set_family", Result))(Result, ui4_1x);
	
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9533, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8564, "set_height_in_points", Result))(Result, ui4_1x);
	
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9532, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8561, "set_weight", Result))(Result, ui4_1x);
	
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9531, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8562, "set_shape", Result))(Result, ui4_1x);
	
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8559, "preferred_families", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(6,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9535, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1705, "extend", tr1))(tr1, ur1x);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {EV_CHARACTER_FORMAT_IMP}.color */
EIF_TYPED_VALUE F1331_12394 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "color";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1330, Current, 1, 0, 18241);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18241);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80004CB, 0,0); /* Result */
	
	tr1 = RTLN(1227);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and(loc1,ui4_1);
	
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8594, "set_red_with_8_bit", Result))(Result, ui4_1x);
	
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 65280L);
	ti4_1 = eif_bit_and(loc1,ui4_1);
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_right((ti4_1),ui4_1);
	
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8595, "set_green_with_8_bit", Result))(Result, ui4_1x);
	
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	ti4_1 = eif_bit_shift_right(loc1,ui4_1);
	
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8596, "set_blue_with_8_bit", Result))(Result, ui4_1x);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {EV_CHARACTER_FORMAT_IMP}.background_color */
EIF_TYPED_VALUE F1331_12395 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "background_color";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1330, Current, 1, 0, 18242);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18242);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80004CB, 0,0); /* Result */
	
	tr1 = RTLN(1227);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 255L);
	ti4_1 = eif_bit_and(loc1,ui4_1);
	
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8594, "set_red_with_8_bit", Result))(Result, ui4_1x);
	
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 65280L);
	ti4_1 = eif_bit_and(loc1,ui4_1);
	
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_right((ti4_1),ui4_1);
	
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8595, "set_green_with_8_bit", Result))(Result, ui4_1x);
	
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	ti4_1 = eif_bit_shift_right(loc1,ui4_1);
	
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8596, "set_blue_with_8_bit", Result))(Result, ui4_1x);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {EV_CHARACTER_FORMAT_IMP}.effects */
EIF_TYPED_VALUE F1331_12396 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "effects";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18243);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18243);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800035D, 0,0); /* Result */
	
	tr1 = RTLN(861);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9529, dtype));
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4905, "enable_underlined", Result))(Result);
		
	}
	RTHOOK(4);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9528, dtype));
	if (tb1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4903, "enable_striked_out", Result))(Result);
		
	}
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9527, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4907, "set_vertical_offset", Result))(Result, ui4_1x);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_font */
void F1331_12397 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_font";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 1, 18244);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18244);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(1226));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("font_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8565, "name", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8552, "family", arg1))(arg1)).it_i4);
	
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8557, "height_in_points", arg1))(arg1)).it_i4);
	
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8554, "weight", arg1))(arg1)).it_i4);
	
	ui4_3 = ti4_3;
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8555, "shape", arg1))(arg1)).it_i4);
	
	ui4_4 = ti4_4;
	ui4_5 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9505, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("font_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9483, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_font_attributes */
void F1331_12398 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "set_font_attributes";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 6, 18245);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18245);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(216));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9535, 0xF80000E1, 0); /* name */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4388, "as_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9535, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9534, 0x10000000, 1); /* family */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9534, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9533, 0x10000000, 1); /* height_in_points */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9533, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 9532, 0x10000000, 1); /* weight */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9532, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 9531, 0x10000000, 1); /* shape */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9531, dtype)) = (EIF_INTEGER_32) arg5;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 9530, 0x10000000, 1); /* char_set */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9530, dtype)) = (EIF_INTEGER_32) arg6;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_color */
void F1331_12399 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_color";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 1, 18246);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18246);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(1227));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("color_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8591, "red_8_bit", arg1))(arg1)).it_i4);
	
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8592, "green_8_bit", arg1))(arg1)).it_i4);
	
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8593, "blue_8_bit", arg1))(arg1)).it_i4);
	
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9506, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("color_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_fcolor */
void F1331_12400 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_fcolor";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 3, 18247);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18247);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9526, 0x10000000, 1); /* fcolor */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9526, 0x10000000, 1); /* fcolor */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype)) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9526, 0x10000000, 1); /* fcolor */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype))) += arg2;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 9526, 0x10000000, 1); /* fcolor */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype)) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 9526, 0x10000000, 1); /* fcolor */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype))) += arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_bcolor */
void F1331_12401 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_bcolor";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 3, 18248);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18248);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9525, 0x10000000, 1); /* bcolor */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9525, 0x10000000, 1); /* bcolor */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype)) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9525, 0x10000000, 1); /* bcolor */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype))) += arg2;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 9525, 0x10000000, 1); /* bcolor */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype)) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 9525, 0x10000000, 1); /* bcolor */
	
	(*(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype))) += arg1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 9524, 0x04000000, 1); /* bcolor_set */
	
	*(EIF_BOOLEAN *)(Current + RTWA(9524, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_background_color */
void F1331_12402 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_background_color";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 1, 18249);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18249);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(1227));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("color_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8591, "red_8_bit", arg1))(arg1)).it_i4);
	
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8592, "green_8_bit", arg1))(arg1)).it_i4);
	
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8593, "blue_8_bit", arg1))(arg1)).it_i4);
	
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9507, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("color_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9485, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("bcolor_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9524, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_effects */
void F1331_12403 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_effects";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 1, 18250);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18250);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(861));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("effect_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(4900, "is_underlined", arg1));
	
	ub1 = tb1;
	tb2 = *(EIF_BOOLEAN *)(arg1 + RTVA(4899, "is_striked_out", arg1));
	
	ub2 = tb2;
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4901, "vertical_offset", arg1));
	
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9508, dtype))(Current, ub1x, ub2x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("effects_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9486, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef ub2
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.set_effects_internal */
void F1331_12404 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_effects_internal";
	RTEX;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_b
#define arg3 arg3x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 3, 18251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18251);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9529, 0x04000000, 1); /* is_underlined */
	
	*(EIF_BOOLEAN *)(Current + RTWA(9529, dtype)) = (EIF_BOOLEAN) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9528, 0x04000000, 1); /* is_striked_out */
	
	*(EIF_BOOLEAN *)(Current + RTWA(9528, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9527, 0x10000000, 1); /* vertical_offset */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(9527, dtype)) = (EIF_INTEGER_32) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.dummy_character_format_range_information */
RTOID (F1331_12405)
EIF_TYPED_VALUE F1331_12405 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dummy_character_format_range_information";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12405);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18252);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80005D9, 0,0); /* Result */
	
	tr1 = RTLN(1497);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6384, 910))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6385, 910))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6386, 910))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6387, 910))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6388, 910))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6389, 910))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6390, 910))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6391, 910))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6392, 910))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11174, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.apply_character_format_to_text_buffer */
void F1331_12406 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "apply_character_format_to_text_buffer";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1330, Current, 5, 4, 18253);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTAOMS(12405,8);
	RTDBGEAA(1330, Current, 18253);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(1497));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	
	up1 = arg2;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5961, 866))(Current, up1x)).it_p);
	RTHOOK(2);
	RTDBGAL(Current, 5, 0xF8000540, 0, 0); /* loc5 */
	
	loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11175, "font_family", arg1));
	
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9535, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(6);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(7);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(8);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9512, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(8,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tp2 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up3 = tp2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5915, 866))(Current, up1x, up2x, up3x);
			RTHOOK(9);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(10);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(11);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11178, "font_height", arg1));
	
	if (tb1) {
		RTHOOK(12);
		RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
		
		RTCOMS(tr1,12405,0,"fh",2,26216);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9533, dtype));
		tr2 = c_outi(ti4_1);
		
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(14);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(15);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(16);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9513, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(16,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9533, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5900, 866))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 * ti4_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			RTHOOK(17);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(18);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(19);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11177, "font_shape", arg1));
	
	if (tb1) {
		RTHOOK(20);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9531, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7347, 1068))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(21);
			RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
			
			RTCOMS(tr1,12405,1,"fsi",3,6714217);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(22);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(23);
			RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
			
			RTCOMS(tr1,12405,2,"fsr",3,6714226);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(24);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(25);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(26);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(27);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(28);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9514, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(28,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			RTHOOK(29);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(30);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(31);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11176, "font_weight", arg1));
	
	if (tb1) {
		RTHOOK(32);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9532, dtype));
		switch (ti4_1) {
			case 8L:
				RTHOOK(33);
				RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
				
				RTCOMS(tr1,12405,3,"fwb",3,6715234);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(34);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				
				loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9608, 1335))(Current)).it_i4);
				loc4 = (EIF_INTEGER_32) loc4;
				break;
			case 7L:
				RTHOOK(35);
				RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
				
				RTCOMS(tr1,12405,4,"fwr",3,6715250);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(36);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				
				loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9607, 1335))(Current)).it_i4);
				loc4 = (EIF_INTEGER_32) loc4;
				break;
			case 6L:
				RTHOOK(37);
				RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
				
				RTCOMS(tr1,12405,5,"fwt",3,6715252);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(38);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				
				loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9605, 1335))(Current)).it_i4);
				loc4 = (EIF_INTEGER_32) loc4;
				break;
			case 9L:
				RTHOOK(39);
				RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
				
				RTCOMS(tr1,12405,6,"fwb",3,6715234);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(40);
				RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
				
				loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9610, 1335))(Current)).it_i4);
				loc4 = (EIF_INTEGER_32) loc4;
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(41);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(42);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(43);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(44);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9515, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(44,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			RTHOOK(45);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(46);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(47);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11179, "color", arg1));
	
	if (tb1) {
		RTHOOK(48);
		RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
		
		RTCOMS(tr1,12405,7,"fg",2,26215);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
		tr2 = c_outi(ti4_1);
		
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(49);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(50);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(51);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(52);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(52,1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up1 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
			ui4_1 = ((EIF_INTEGER_32) 16L);
			ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
			
			ui4_1 = (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 257L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5486, 865))(Current, up1x, ui4_1x);
			RTHOOK(53);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(53,1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up1 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
			ui4_1 = ((EIF_INTEGER_32) 16L);
			ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
			
			ui4_1 = ((EIF_INTEGER_32) 24L);
			ti4_1 = eif_bit_shift_right((ti4_2),ui4_1);
			
			ui4_1 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 257L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5487, 865))(Current, up1x, ui4_1x);
			RTHOOK(54);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(54,1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up1 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
			ui4_1 = ((EIF_INTEGER_32) 24L);
			ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
			
			ui4_1 = ((EIF_INTEGER_32) 24L);
			ti4_1 = eif_bit_shift_right((ti4_2),ui4_1);
			
			ui4_1 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 257L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5489, 865))(Current, up1x, ui4_1x);
			RTHOOK(55);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9518, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(55,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tr1 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
			RTNHOOK(55,2);
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up3 = tp2;
			tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			up4 = tp3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5914, 866))(Current, up1x, up2x, up3x, up4x);
			RTHOOK(56);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(57);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(58);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11180, "background_color", arg1));
	
	if (tb1) {
		RTHOOK(59);
		RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
		
		tr1 = RTMS_EX_H("bg",2,25191);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
		tr2 = c_outi(ti4_1);
		
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(60);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(61);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(62);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(63);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(63,1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up1 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
			ui4_1 = ((EIF_INTEGER_32) 16L);
			ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
			
			ui4_1 = (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 257L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5486, 865))(Current, up1x, ui4_1x);
			RTHOOK(64);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(64,1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up1 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
			ui4_1 = ((EIF_INTEGER_32) 16L);
			ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
			
			ui4_1 = ((EIF_INTEGER_32) 24L);
			ti4_1 = eif_bit_shift_right((ti4_2),ui4_1);
			
			ui4_1 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 257L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5487, 865))(Current, up1x, ui4_1x);
			RTHOOK(65);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(65,1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up1 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
			ui4_1 = ((EIF_INTEGER_32) 24L);
			ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
			
			ui4_1 = ((EIF_INTEGER_32) 24L);
			ti4_1 = eif_bit_shift_right((ti4_2),ui4_1);
			
			ui4_1 = (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 257L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5489, 865))(Current, up1x, ui4_1x);
			RTHOOK(66);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9519, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(66,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tr1 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
			RTNHOOK(66,2);
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
			
			up3 = tp2;
			tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			up4 = tp3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5914, 866))(Current, up1x, up2x, up3x, up4x);
			RTHOOK(67);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(68);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(69);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11181, "effects_striked_out", arg1));
	
	if (tb1) {
		RTHOOK(70);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9528, dtype));
		if (tb1) {
			RTHOOK(71);
			RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
			
			tr1 = RTMS_EX_H("sot",3,7565172);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(72);
			RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
			
			tr1 = RTMS_EX_H("sof",3,7565158);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(73);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(74);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(75);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(76);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9521, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(76,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9528, dtype));
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5920, 866))(Current, up1x, up2x, ub1x);
			RTHOOK(77);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(78);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(79);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11182, "effects_underlined", arg1));
	
	if (tb1) {
		RTHOOK(80);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9529, dtype));
		if (tb1) {
			RTHOOK(81);
			RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
			
			tr1 = RTMS_EX_H("ut",2,30068);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(82);
			RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
			
			tr1 = RTMS_EX_H("uf",2,30054);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(83);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(84);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(85);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(86);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9520, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(86,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9529, dtype));
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5920, 866))(Current, up1x, up2x, ub1x);
			RTHOOK(87);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(88);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTHOOK(89);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11183, "effects_vertical_offset", arg1));
	
	if (tb1) {
		RTHOOK(90);
		RTDBGAL(Current, 3, 0xF80004B9, 0, 0); /* loc3 */
		
		tr1 = RTMS_EX_H("vo",2,30319);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9527, dtype));
		tr2 = c_outi(ti4_1);
		
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9891, "c_string_from_eiffel_string", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(91);
		RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
		
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
		
		up2 = tp1;
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5963, 866))(Current, up1x, up2x)).it_p);
		RTHOOK(92);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 == tp1)) {
			RTHOOK(93);
			RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
			
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(8307, "item", loc3));
			
			up1 = tp1;
			loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
			RTHOOK(94);
			up1 = loc2;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9522, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(94,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9527, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			RTHOOK(95);
			up1 = loc1;
			up2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5962, 866))(Current, up1x, up2x);
		}
		RTHOOK(96);
		up1 = arg2;
		up2 = loc2;
		up3 = arg3;
		up4 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5960, 866))(Current, up1x, up2x, up3x, up4x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(97);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ui4_1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.new_text_tag_from_applicable_attributes */
EIF_TYPED_VALUE F1331_12407 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_text_tag_from_applicable_attributes";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc6);
	RTLR(7,tr3);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1330, Current, 6, 1, 18254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTAOMS(12406,2);
	RTDBGEAA(1330, Current, 18254);
	RTCC(arg1, 1330, l_feature_name, 1, eif_attached_type(1497));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
	
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5958, 866))(Current, up1x)).it_p);
	RTHOOK(2);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = *(EIF_BOOLEAN *)(arg1 + RTVA(11175, "font_family", arg1));
	
	if (!tb4) {
		tb4 = *(EIF_BOOLEAN *)(arg1 + RTVA(11178, "font_height", arg1));
		
		tb3 = tb4;
	}
	if (!tb3) {
		tb3 = *(EIF_BOOLEAN *)(arg1 + RTVA(11177, "font_shape", arg1));
		
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(arg1 + RTVA(11176, "font_weight", arg1));
		
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11175, "font_family", arg1));
		
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 2, 0xF80004B9, 0, 0); /* loc2 */
			
			tr1 = RTLN(1209);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9535, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
			
			RTNHOOK(4,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(5);
			up1 = Result;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9512, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(5,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tp2 = *(EIF_POINTER *)(loc2 + RTVA(8307, "item", loc2));
			
			up3 = tp2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5915, 866))(Current, up1x, up2x, up3x);
		}
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11178, "font_height", arg1));
		
		if (tb1) {
			RTHOOK(7);
			up1 = Result;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9513, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(7,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9533, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5900, 866))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (ti4_1 * ti4_2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
		}
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11177, "font_shape", arg1));
		
		if (tb1) {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9531, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7347, 1068))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(10);
				up1 = Result;
				tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9514, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(10,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
				
				up2 = tp1;
				ui4_1 = ((EIF_INTEGER_32) 2L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			} else {
				RTHOOK(11);
				up1 = Result;
				tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9514, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(11,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
				
				up2 = tp1;
				ui4_1 = ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			}
		}
		RTHOOK(12);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11176, "font_weight", arg1));
		
		if (tb1) {
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9532, dtype));
			switch (ti4_1) {
				case 8L:
					RTHOOK(14);
					up1 = Result;
					tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9515, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(14,1);
					tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
					
					up2 = tp1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9608, 1335))(Current)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
					break;
				case 7L:
					RTHOOK(15);
					up1 = Result;
					tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9515, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(15,1);
					tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
					
					up2 = tp1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9607, 1335))(Current)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
					break;
				case 6L:
					RTHOOK(16);
					up1 = Result;
					tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9515, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(16,1);
					tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
					
					up2 = tp1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9605, 1335))(Current)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
					break;
				case 9L:
					RTHOOK(17);
					up1 = Result;
					tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9515, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(17,1);
					tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
					
					up2 = tp1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9610, 1335))(Current)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	}
	RTHOOK(18);
	RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(18,1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9893, "reusable_color_struct", tr1))(tr1)).it_p);
	
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(19);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11179, "color", arg1));
	
	if (tb1) {
		RTHOOK(20);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_1 = eif_bit_shift_left((ti4_2),ui4_1);
		
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(21);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
		ui4_1 = ((EIF_INTEGER_32) 65280L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		
		loc4 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(22);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9526, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		
		loc5 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(23);
		RTDBGAL(Current, 6, 0xF80000E1, 0, 0); /* loc6 */
		
		tr1 = RTLN(225);
		tr2 = RTLN(205);
		*(EIF_INTEGER_32 *)tr2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + loc5);
		
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4143, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4570, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(23,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(24);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4464, "keep_tail", loc6))(loc6, ui4_1x);
		
		RTHOOK(25);
		RTDBGAL(Current, 2, 0xF80004B9, 0, 0); /* loc2 */
		
		tr1 = RTLN(1209);
		RTCOMS(tr2,12406,0,"#",1,35);
		ur1 = RTCCL(loc6);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(25,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(26);
		up1 = Result;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9516, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(26,1);
		tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
		
		up2 = tp1;
		tp2 = *(EIF_POINTER *)(loc2 + RTVA(8307, "item", loc2));
		
		up3 = tp2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5915, 866))(Current, up1x, up2x, up3x);
	}
	RTHOOK(27);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11180, "background_color", arg1));
	
	if (tb1) {
		RTHOOK(28);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
		ui4_1 = ((EIF_INTEGER_32) 255L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_1 = eif_bit_shift_left((ti4_2),ui4_1);
		
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(29);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
		ui4_1 = ((EIF_INTEGER_32) 65280L);
		ti4_2 = eif_bit_and(ti4_1,ui4_1);
		
		loc4 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(30);
		RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9525, dtype));
		ui4_1 = ((EIF_INTEGER_32) 16L);
		ti4_2 = eif_bit_shift_right(ti4_1,ui4_1);
		
		loc5 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(31);
		RTDBGAL(Current, 6, 0xF80000E1, 0, 0); /* loc6 */
		
		tr1 = RTLN(225);
		tr2 = RTLN(205);
		*(EIF_INTEGER_32 *)tr2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc4) + loc5);
		
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4143, "to_hex_string", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4570, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(31,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(32);
		ui4_1 = ((EIF_INTEGER_32) 6L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4464, "keep_tail", loc6))(loc6, ui4_1x);
		
		RTHOOK(33);
		RTDBGAL(Current, 2, 0xF80004B9, 0, 0); /* loc2 */
		
		tr1 = RTLN(1209);
		RTCOMS(tr2,12406,1,"#",1,35);
		ur1 = RTCCL(loc6);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(33,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(34);
		up1 = Result;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9517, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(34,1);
		tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
		
		up2 = tp1;
		tp2 = *(EIF_POINTER *)(loc2 + RTVA(8307, "item", loc2));
		
		up3 = tp2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5915, 866))(Current, up1x, up2x, up3x);
	}
	RTHOOK(35);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = *(EIF_BOOLEAN *)(arg1 + RTVA(11181, "effects_striked_out", arg1));
	
	if (!tb3) {
		tb3 = *(EIF_BOOLEAN *)(arg1 + RTVA(11182, "effects_underlined", arg1));
		
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(arg1 + RTVA(11183, "effects_vertical_offset", arg1));
		
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(36);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11181, "effects_striked_out", arg1));
		
		if (tb1) {
			RTHOOK(37);
			up1 = Result;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9521, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(37,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9528, dtype));
			ub1 = tb1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5920, 866))(Current, up1x, up2x, ub1x);
		}
		RTHOOK(38);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11182, "effects_underlined", arg1));
		
		if (tb1) {
			RTHOOK(39);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9529, dtype));
			if (tb1) {
				RTHOOK(40);
				up1 = Result;
				tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9520, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(40,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
				
				up2 = tp1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5812, 866))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			} else {
				RTHOOK(41);
				up1 = Result;
				tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9520, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(41,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
				
				up2 = tp1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5811, 866))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
			}
		}
		RTHOOK(42);
		tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11183, "effects_vertical_offset", arg1));
		
		if (tb1) {
			RTHOOK(43);
			up1 = Result;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9522, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(43,1);
			tp1 = *(EIF_POINTER *)(tr1 + RTVA(8307, "item", tr1));
			
			up2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9527, dtype));
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5918, 866))(Current, up1x, up2x, ui4_1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_CHARACTER_FORMAT_IMP}.family_string */
RTOID (F1331_12408)
EIF_TYPED_VALUE F1331_12408 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "family_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12408);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18255);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18255);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("family",6,2036910713);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.size_string */
RTOID (F1331_12409)
EIF_TYPED_VALUE F1331_12409 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "size_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12409);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18256);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18256);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("size",4,1936292453);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.style_string */
RTOID (F1331_12410)
EIF_TYPED_VALUE F1331_12410 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "style_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12410);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18257);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18257);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("style",5,1954997861);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.weight_string */
RTOID (F1331_12411)
EIF_TYPED_VALUE F1331_12411 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "weight_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12411);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18258);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18258);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("weight",6,2003123828);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.foreground_string */
RTOID (F1331_12412)
EIF_TYPED_VALUE F1331_12412 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "foreground_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12412);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18259);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18259);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("foreground",10,1905076836);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.background_string */
RTOID (F1331_12413)
EIF_TYPED_VALUE F1331_12413 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "background_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12413);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18260);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18260);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("background",10,1679743332);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.foreground_gdk_string */
RTOID (F1331_12414)
EIF_TYPED_VALUE F1331_12414 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "foreground_gdk_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12414);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18261);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18261);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("foreground-gdk",14,971919211);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.background_gdk_string */
RTOID (F1331_12415)
EIF_TYPED_VALUE F1331_12415 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "background_gdk_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12415);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18262);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18262);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("background-gdk",14,1279333739);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.underline_string */
RTOID (F1331_12416)
EIF_TYPED_VALUE F1331_12416 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "underline_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12416);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18263);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18263);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("underline",9,1294276453);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.strikethrough_string */
RTOID (F1331_12417)
EIF_TYPED_VALUE F1331_12417 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "strikethrough_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12417);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18264);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18264);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("strikethrough",13,408507496);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.rise_string */
RTOID (F1331_12418)
EIF_TYPED_VALUE F1331_12418 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rise_string";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12418);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18265);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18265);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80004B9, 0,0); /* Result */
	
	tr1 = RTLN(1209);
	tr2 = RTMS_EX_H("rise",4,1919513445);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8310, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.app_implementation */
RTOID (F1331_12419)
EIF_TYPED_VALUE F1331_12419 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "app_implementation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1331_12419);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1330, Current, 1, 0, 18266);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1330, Current, 18266);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000540, 0, 0); /* loc1 */
	
	tr1 = RTLN(1230);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8459, "implementation", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(1,2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9679, "application_i", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(1344), loc1);
	RTHOOK(2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000540, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef Result
}

/* {EV_CHARACTER_FORMAT_IMP}.name */
EIF_TYPED_VALUE F1331_12420 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9535,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.family */
EIF_TYPED_VALUE F1331_12421 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9534,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.height */
EIF_TYPED_VALUE F1331_12422 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18269);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9523, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9533, dtype));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8365, "pixel_value_from_point_value", tr1))(tr1, ui4_1x)).it_i4);
	
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {EV_CHARACTER_FORMAT_IMP}.height_in_points */
EIF_TYPED_VALUE F1331_12423 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9533,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.weight */
EIF_TYPED_VALUE F1331_12424 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9532,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.is_bold */
EIF_TYPED_VALUE F1331_12425 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_bold";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18228);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18228);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9532, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7344, 1068))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_CHARACTER_FORMAT_IMP}.shape */
EIF_TYPED_VALUE F1331_12426 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9531,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.char_set */
EIF_TYPED_VALUE F1331_12427 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9530,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.is_underlined */
EIF_TYPED_VALUE F1331_12428 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9529,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.is_striked_out */
EIF_TYPED_VALUE F1331_12429 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9528,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.vertical_offset */
EIF_TYPED_VALUE F1331_12430 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9527,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.fcolor */
EIF_TYPED_VALUE F1331_12431 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9526,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.bcolor */
EIF_TYPED_VALUE F1331_12432 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9525,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.bcolor_set */
EIF_TYPED_VALUE F1331_12433 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9524,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_IMP}.destroy */
void F1331_12434 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1330, Current, 0, 0, 18237);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1330, Current, 18237);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9404, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9402, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_destroyed_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9388, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ub1
}

void EIF_Minit1331 (void)
{
	GTCX
	RTOTS (12405,F1331_12405)
	RTOTS (12408,F1331_12408)
	RTOTS (12409,F1331_12409)
	RTOTS (12410,F1331_12410)
	RTOTS (12411,F1331_12411)
	RTOTS (12412,F1331_12412)
	RTOTS (12413,F1331_12413)
	RTOTS (12414,F1331_12414)
	RTOTS (12415,F1331_12415)
	RTOTS (12416,F1331_12416)
	RTOTS (12417,F1331_12417)
	RTOTS (12418,F1331_12418)
	RTOTS (12419,F1331_12419)
}


#ifdef __cplusplus
}
#endif
