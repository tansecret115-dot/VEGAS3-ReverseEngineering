/* Module: rmbe3260.dll
   Function: FUN_660143a0
   Address: 660143a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_660143a0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  *param_1 = *param_2;
  lVar1 = atol((char *)(param_2 + 1));
  param_1[1] = lVar1;
  return;
}


