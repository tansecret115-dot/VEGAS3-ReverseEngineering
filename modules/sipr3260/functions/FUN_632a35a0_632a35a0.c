/* Module: sipr3260.dll
   Function: FUN_632a35a0
   Address: 632a35a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632a35a0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(param_3 * param_2 + 0xc);
  puVar1[1] = param_2;
  puVar1[2] = 0;
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}


