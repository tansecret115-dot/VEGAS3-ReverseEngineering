/* Module: vegas30k.dll
   Function: FUN_0114e760
   Address: 0114e760
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0114e760(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  param_2 = param_2 - *(int *)(param_1 + 0x70);
  if (param_2 < 1) {
    return 0xffff;
  }
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x60) != 0) {
    do {
      if ((uVar2 == *(uint *)(param_1 + 100)) &&
         (*(uint *)(param_1 + 100) < *(uint *)(param_1 + 0xb8))) {
        uVar2 = *(uint *)(param_1 + 0xb8);
      }
      sVar1 = *(short *)(uVar2 * 0x10 + 2 + *(int *)(param_1 + 0x1c0));
    } while (((sVar1 < 1) || (param_2 = param_2 - sVar1, 0 < param_2)) &&
            (uVar2 = uVar2 + 1, uVar2 < *(uint *)(param_1 + 0x60)));
  }
  return uVar2;
}


