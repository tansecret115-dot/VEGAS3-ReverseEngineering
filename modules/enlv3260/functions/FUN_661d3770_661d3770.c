/* Module: enlv3260.dll
   Function: FUN_661d3770
   Address: 661d3770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_661d3770(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(param_3 * param_2 + 0xc);
  puVar1[1] = param_2;
  puVar1[2] = 0;
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}


