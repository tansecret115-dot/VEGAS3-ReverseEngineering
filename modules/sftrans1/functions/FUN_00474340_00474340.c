/* Module: sftrans1.dll
   Function: FUN_00474340
   Address: 00474340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00474340(uint *param_1)

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
  return (float10)(int)(((uVar4 ^ uVar3) & 0xffff) - 0x8000) * (float10)_DAT_00562450;
}


