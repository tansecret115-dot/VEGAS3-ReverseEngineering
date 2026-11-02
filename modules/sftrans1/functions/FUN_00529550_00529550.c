/* Module: sftrans1.dll
   Function: FUN_00529550
   Address: 00529550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00529550(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[uVar2 + 0x41];
  uVar4 = param_1[uVar1 + 0x41];
  param_1[uVar1 + 0x41] = uVar4 ^ uVar3;
  *param_1 = (uint)*(byte *)(uVar1 + 8 + (int)param_1);
  param_1[1] = (uint)*(byte *)(uVar2 + 8 + (int)param_1);
  return (float10)((uVar4 ^ uVar3) & 0xffff) * (float10)_DAT_00565198;
}


