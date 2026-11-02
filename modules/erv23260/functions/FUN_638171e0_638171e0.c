/* Module: erv23260.dll
   Function: FUN_638171e0
   Address: 638171e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638171e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (int)uVar1 >> 0x1f;
  if (((uVar1 ^ uVar2) - uVar2 & 1 ^ uVar2) != uVar2) {
    uVar2 = 0x7ff;
    if ((int)uVar1 < 0x800) {
      uVar2 = uVar1;
    }
    if ((int)uVar2 < 0) {
      *param_1 = 0;
      return;
    }
    if (0x7ff < (int)uVar1) {
      uVar1 = 0x7ff;
    }
    *param_1 = uVar1;
    return;
  }
  uVar1 = uVar1 + 1;
  uVar2 = 0x7ff;
  if ((int)uVar1 < 0x800) {
    uVar2 = uVar1;
  }
  if ((int)uVar2 < 0) {
    *param_1 = 0;
    return;
  }
  if (0x7ff < (int)uVar1) {
    uVar1 = 0x7ff;
  }
  *param_1 = uVar1;
  return;
}


