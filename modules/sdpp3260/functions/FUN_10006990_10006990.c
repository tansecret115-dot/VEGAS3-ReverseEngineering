/* Module: sdpp3260.dll
   Function: FUN_10006990
   Address: 10006990
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_10006990(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_100065e0(local_10);
  FUN_10006940(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_10006600(param_1,local_10);
  FUN_10006700(local_10);
  return param_1;
}


