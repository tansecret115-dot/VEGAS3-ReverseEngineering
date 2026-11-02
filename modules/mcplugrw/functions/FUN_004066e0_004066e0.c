/* Module: mcplugrw.dll
   Function: FUN_004066e0
   Address: 004066e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004066e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x240);
  uVar2 = FUN_00406330(*(int *)(param_1 + 0x170),*(int *)(param_1 + 0x174),iVar1);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar3 = 0x3a0;
  }
  else {
    uVar3 = param_1;
    if (iVar1 == 3) {
      uVar3 = 0x3b0;
    }
  }
  uVar3 = uVar3 & uVar2;
  if (uVar3 == 0x100) {
    uVar3 = 0x120;
  }
  if (*(int *)(param_1 + 0x22c) == 0) {
    if ((uVar2 & 0x200) != 0) {
      uVar3 = uVar3 & 0xfffffdff;
    }
  }
  else {
    uVar3 = uVar3 | 0x200;
  }
  if (uVar3 == 0x20) {
    if ((uVar2 & 0x40) == 0) {
      return (-(uint)(iVar1 != 3) & 0x3e6) + 0x1b80;
    }
    return (-(uint)((*(uint *)(param_1 + 0x1d4) & 0x400) != 0) & 0xd) + 0x1f68;
  }
  if (uVar3 == 0x80) {
    return 0x1b5a;
  }
  if (iVar1 != 1) {
    return (-(uint)(iVar1 != 2) & 0xfffffc1f) + 0x1f60;
  }
  return 0x1f67;
}


