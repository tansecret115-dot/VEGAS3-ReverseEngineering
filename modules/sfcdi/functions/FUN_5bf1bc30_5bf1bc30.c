/* Module: sfcdi.dll
   Function: FUN_5bf1bc30
   Address: 5bf1bc30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1bc30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  if (param_1[1] <= uVar1 + 1) {
    *param_1 = param_1[1] - 1;
  }
  return;
}


