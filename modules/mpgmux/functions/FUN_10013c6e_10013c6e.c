/* Module: mpgmux.dll
   Function: FUN_10013c6e
   Address: 10013c6e
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10013c6e(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


