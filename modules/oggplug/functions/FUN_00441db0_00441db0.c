/* Module: oggplug.dll
   Function: FUN_00441db0
   Address: 00441db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00441db0(undefined4 *param_1)

{
  free((void *)param_1[2]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


