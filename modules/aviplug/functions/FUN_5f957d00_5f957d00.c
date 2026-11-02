/* Module: aviplug.dll
   Function: FUN_5f957d00
   Address: 5f957d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f957d00(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  if (param_2 == 0) {
    return 0xfffffffa;
  }
  if ((*(int *)(param_2 + 4) != 0x2d0) && (*(int *)(param_2 + 4) != 0x168)) {
    return 0xfffffffe;
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if ((((iVar3 != 0x64737664) && (iVar3 != 0x6e76645f)) && (iVar3 != 0x6e766477)) &&
     ((iVar3 != 0x7076645f && (iVar3 != 0x70766477)))) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 0x6e766478) {
    if (uVar1 != 0x6e766477) {
      if (uVar1 == 0x64737664) {
        iVar3 = *(int *)(param_2 + 8);
        if (iVar3 == 0x240) {
          bVar2 = 1;
        }
        else if (iVar3 != 0x1e0) {
          return 0xfffffffe;
        }
        if (iVar3 == -1) {
          return 0xfffffffe;
        }
        goto LAB_5f957da4;
      }
      if (uVar1 != 0x6e76645f) {
        return 0xfffffffe;
      }
    }
    iVar3 = 0x1e0;
  }
  else {
    if ((uVar1 != 0x7076645f) && (uVar1 != 0x70766477)) {
      return 0xfffffffe;
    }
    iVar3 = 0x240;
    bVar2 = 1;
  }
LAB_5f957da4:
  if (iVar3 == *(int *)(param_2 + 8)) {
    if (param_3 == 0) {
      return 0;
    }
    if (((*(short *)(param_3 + 0xe) == 0x18) ||
        ((*(short *)(param_3 + 0xe) == 0x20 && (DAT_5f9f2bf8 != 0)))) &&
       (*(int *)(param_3 + 0x10) == 0)) {
      if (*(int *)(param_3 + 4) == 0x168) {
        iVar3 = (-(uint)bVar2 & 0x30) + 0xf0;
      }
      else {
        if (*(int *)(param_3 + 4) != 0x2d0) {
          return 0xfffffffe;
        }
        iVar3 = (-(uint)bVar2 & 0x60) + 0x1e0;
      }
      if ((iVar3 != -1) && (iVar3 == *(int *)(param_3 + 8))) {
        return 0;
      }
    }
  }
  return 0xfffffffe;
}


