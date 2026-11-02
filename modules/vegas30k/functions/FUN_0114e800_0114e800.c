/* Module: vegas30k.dll
   Function: FUN_0114e800
   Address: 0114e800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114e800(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0xffff) {
    *param_3 = 0;
    param_3[2] = *(int *)(param_1 + 0x80);
    return 1;
  }
  if ((*(uint *)(param_1 + 100) <= param_2) && (param_2 < *(uint *)(param_1 + 0xb8))) {
    return 0;
  }
  param_3[2] = *(int *)(param_1 + 0x70);
  uVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 100);
    if ((uVar2 == uVar1) && (uVar2 = *(uint *)(param_1 + 0xb8), *(uint *)(param_1 + 0xb8) <= uVar1))
    {
      uVar2 = uVar1;
    }
    iVar3 = param_3[2] + (int)*(short *)(uVar2 * 0x10 + 2 + *(int *)(param_1 + 0x1c0));
    uVar2 = uVar2 + 1;
    param_3[2] = iVar3;
  } while (uVar2 <= param_2);
  *param_3 = (iVar3 - *(short *)(param_2 * 0x10 + 2 + *(int *)(param_1 + 0x1c0))) + 1;
  return 1;
}


