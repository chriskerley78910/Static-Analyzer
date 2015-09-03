/*
 * Code for class TEST_NIL_EXPRESSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1050_9467(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1050_9468(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1050_9469(EIF_REFERENCE);
extern void EIF_Minit1050(void);
extern EIF_REFERENCE _A1050_76();
extern EIF_REFERENCE _A1050_77();

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

/* {TEST_NIL_EXPRESSION}.make */
void F1050_9467 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1049, Current, 0, 0, 14964);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1049, Current, 14964);
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,173,0xFF11,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF11,273,0xFF11,0,0xFF11,0xFFF9,0,173,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A1050_76, (EIF_POINTER)(0),7251, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7226, dtype))(Current, ur1x);
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,173,0xFF11,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF11,273,0xFF11,0,0xFF11,0xFFF9,0,173,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNRW(typres0, 0, (EIF_POINTER) _A1050_77, (EIF_POINTER)(0),7252, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7226, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {TEST_NIL_EXPRESSION}.test_nil_expression_creation */
EIF_TYPED_VALUE F1050_9468 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_nil_expression_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1049, Current, 2, 0, 14965);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1049, Current, 14965);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t1: test that nil expression can be created.",44,289979694);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7231, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003B1, 0, 0); /* loc1 */
	
	tr1 = RTLN(946);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6669, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_non_attached_type(946),loc2);
	Result = (EIF_BOOLEAN) EIF_TEST(loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
}

/* {TEST_NIL_EXPRESSION}.test_nil_expression_is_equal */
EIF_TYPED_VALUE F1050_9469 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_nil_expression_is_equal";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1049, Current, 2, 0, 14966);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1049, Current, 14966);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("t2: test is_equal feature of NIL_EXPRESSION.",44,2044598318);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7231, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003B1, 0, 0); /* loc1 */
	
	tr1 = RTLN(946);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6669, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF80003B1, 0, 0); /* loc2 */
	
	tr1 = RTLN(946);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6669, Dtype(tr1)))(tr1);
	
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) RTEQ(loc1, loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
}

void EIF_Minit1050 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
