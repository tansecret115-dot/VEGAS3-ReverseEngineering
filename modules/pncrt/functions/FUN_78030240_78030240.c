/* Module: pncrt.dll
   Function: FUN_78030240
   Address: 78030240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78030240(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}


