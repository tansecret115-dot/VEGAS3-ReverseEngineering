/* Module: vegas30k.dll
   Function: FUN_0117f950
   Address: 0117f950
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0117f950(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 2) {
    uVar2 = *(int *)(param_1 + 0x48) + param_2;
    *(uint *)(param_1 + 0x48) = uVar2;
    if (0x1d < uVar2) {
      *(uint *)(param_1 + 0x48) = uVar2 - 0x1e;
      uVar2 = *(int *)(param_1 + 0x44) + 1;
      *(uint *)(param_1 + 0x44) = uVar2;
    }
    if (*(uint *)(param_1 + 0x44) < 0x3c) {
      return uVar2;
    }
    uVar2 = *(int *)(param_1 + 0x40) + 1;
    *(uint *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (uVar2 % 10 != 0) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
    }
    if (uVar2 < 0x3c) {
      return uVar2 / 10;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar2 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar2;
    if (uVar2 < 0x18) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return uVar2;
  }
  if (iVar1 == 3) {
    uVar2 = *(int *)(param_1 + 0x48) + param_2;
    *(uint *)(param_1 + 0x48) = uVar2;
    if (uVar2 < 0x19) goto LAB_0117f9b8;
    iVar1 = uVar2 - 0x19;
  }
  else if (iVar1 == 4) {
    uVar2 = *(int *)(param_1 + 0x48) + param_2;
    *(uint *)(param_1 + 0x48) = uVar2;
    if (uVar2 < 0x18) goto LAB_0117f9b8;
    iVar1 = uVar2 - 0x18;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x48) + param_2;
    *(uint *)(param_1 + 0x48) = uVar2;
    if (uVar2 < 0x1e) goto LAB_0117f9b8;
    iVar1 = uVar2 - 0x1e;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  uVar2 = *(int *)(param_1 + 0x44) + 1;
  *(uint *)(param_1 + 0x44) = uVar2;
LAB_0117f9b8:
  if (0x3b < *(uint *)(param_1 + 0x44)) {
    uVar2 = *(int *)(param_1 + 0x40) + 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(uint *)(param_1 + 0x40) = uVar2;
    if (0x3b < uVar2) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar2 = *(int *)(param_1 + 0x3c) + 1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      if (0x17 < uVar2) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        return uVar2;
      }
    }
  }
  return uVar2;
}


