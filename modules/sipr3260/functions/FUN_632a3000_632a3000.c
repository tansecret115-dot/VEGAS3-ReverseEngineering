/* Module: sipr3260.dll
   Function: FUN_632a3000
   Address: 632a3000
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_632a3000(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int local_10 [3];
  
  FUN_632a2c90(local_10);
  FUN_632a2fb0(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,
               ((undefined4 *)*param_3)[-2],(undefined4 *)*param_3);
  FUN_632a2cb0(param_1,local_10);
  FUN_632a2db0(local_10);
  return param_1;
}


