/* Module: sfcdi.dll
   Function: FUN_5bf1a100
   Address: 5bf1a100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1a100(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


