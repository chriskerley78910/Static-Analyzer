/*
 * Code for class EV_COLOR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1337_12580(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1337_12581(EIF_REFERENCE);
static EIF_TYPED_VALUE F1337_12582_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1337_12582(EIF_REFERENCE);
extern void EIF_Minit1337(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLOR_I}.set_with_other */
void F1337_12580 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_other";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1336, Current, 0, 1, 18361);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1336, Current, 18361);
	RTCC(arg1, 1336, l_feature_name, 1, eif_attached_type(1227));
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8578, "red", arg1))(arg1)).it_r4);
	
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9625, dtype))(Current, ur4_1x);
	RTHOOK(2);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8579, "green", arg1))(arg1)).it_r4);
	
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9626, dtype))(Current, ur4_1x);
	RTHOOK(3);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8580, "blue", arg1))(arg1)).it_r4);
	
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9627, dtype))(Current, ur4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur4_1
#undef arg1
}

/* {EV_COLOR_I}.default_name */
RTOID (F1337_12581)


EIF_TYPED_VALUE F1337_12581 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1337_12581,18363,RTMS32_EX_H("n\000\000\000o\000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000",6,2069000037));
}

/* {EV_COLOR_I}.interface */
static EIF_TYPED_VALUE F1337_12582_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1336, Current, 0, 0, 18363);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1336, Current, 18363);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1337_12582 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9390,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9390, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r.it_r = (F1337_12582_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9390,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1337 (void)
{
	GTCX
	RTOTS (12581,F1337_12581)
}


#ifdef __cplusplus
}
#endif
