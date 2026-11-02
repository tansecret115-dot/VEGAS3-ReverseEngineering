/* Module: enlv3260.dll
   Function: FUN_661d2ed0
   Address: 661d2ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_661d2ed0(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_661d2b60(local_10);
  FUN_661d2e80(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_661d2b80(param_1,local_10);
  FUN_661d2c80(local_10);
  return param_1;
}


