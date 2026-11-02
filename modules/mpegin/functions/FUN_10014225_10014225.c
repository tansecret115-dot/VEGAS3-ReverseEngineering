/* Module: mpegin.dll
   Function: FUN_10014225
   Address: 10014225
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10014225(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}


