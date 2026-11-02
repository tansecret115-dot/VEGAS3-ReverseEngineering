/* Module: dnet3260.dll
   Function: FUN_63053330
   Address: 63053330
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_63053330(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_63052fc0(local_10);
  FUN_630532e0(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_63052fe0(param_1,local_10);
  FUN_630530e0(local_10);
  return param_1;
}


