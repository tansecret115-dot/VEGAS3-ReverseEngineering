/* Module: rv103260.dll
   Function: FUN_636a6310
   Address: 636a6310
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_636a6310(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_636a5fa0(local_10);
  FUN_636a62c0(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_636a5fc0(param_1,local_10);
  FUN_636a60c0(local_10);
  return param_1;
}


