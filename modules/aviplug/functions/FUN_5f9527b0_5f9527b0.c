/* Module: aviplug.dll
   Function: FUN_5f9527b0
   Address: 5f9527b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9527b0(uint *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = 0xfffffffe;
  if (param_2 == 0) {
    uVar2 = 0xfffffffa;
    goto LAB_5f95290d;
  }
  if ((*(int *)(param_2 + 4) != 0x2d0) ||
     ((((iVar3 = *(int *)(param_2 + 0x10), iVar3 != 0x64737664 && (iVar3 != 0x6e76645f)) &&
       (iVar3 != 0x6e766477)) && ((iVar3 != 0x7076645f && (iVar3 != 0x70766477))))))
  goto LAB_5f95290d;
  uVar1 = *param_1;
  if (uVar1 < 0x6e766478) {
    if (uVar1 != 0x6e766477) {
      if (uVar1 == 0x64737664) {
        iVar3 = *(int *)(param_2 + 8);
        if (iVar3 == 0x240) {
          iVar4 = 1;
        }
        else if (iVar3 != 0x1e0) goto LAB_5f95290d;
        if (iVar3 == -1) goto LAB_5f95290d;
        goto LAB_5f952846;
      }
      if (uVar1 != 0x6e76645f) goto LAB_5f95290d;
    }
    iVar3 = 0x1e0;
  }
  else {
    if ((uVar1 != 0x7076645f) && (uVar1 != 0x70766477)) goto LAB_5f95290d;
    iVar3 = 0x240;
    iVar4 = 1;
  }
LAB_5f952846:
  if (iVar3 != *(int *)(param_2 + 8)) goto LAB_5f95290d;
  if (param_3 != 0) {
    if ((*(short *)(param_3 + 0xe) != 0x18) || (*(int *)(param_3 + 0x10) != 0)) goto LAB_5f95290d;
    iVar3 = *(int *)(param_3 + 4);
    if (iVar3 < 0x169) {
      if (iVar3 == 0x168) {
        iVar3 = (-(uint)(iVar4 != 0) & 0x30) + 0xf0;
      }
      else if (iVar3 == 0x58) {
        iVar3 = (-(uint)(iVar4 != 0) & 0x10) + 0x3c;
      }
      else {
        if (iVar3 != 0xb4) goto LAB_5f95290d;
        iVar3 = (-(uint)(iVar4 != 0) & 0x18) + 0x78;
      }
    }
    else {
      if (iVar3 != 0x2d0) goto LAB_5f95290d;
      iVar3 = (-(uint)(iVar4 != 0) & 0x60) + 0x1e0;
    }
    if ((iVar3 == -1) || (iVar3 != *(int *)(param_3 + 8))) goto LAB_5f95290d;
  }
  uVar2 = 0;
LAB_5f95290d:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  return uVar2;
}


