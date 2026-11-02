/* Module: erv23260.dll
   Function: FUN_63810a50
   Address: 63810a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63810a50(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = FUN_637f1030(0x4000,1);
  *(undefined4 **)(param_1 + 0x134) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 2;
  }
  puVar2 = FUN_637f1030(0x4000,1);
  *(undefined4 **)(param_1 + 0x13c) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 2;
  }
  *(undefined4 **)(param_1 + 0x140) = puVar2 + 0x800;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x134) + 0x2000;
  iVar3 = -0x800;
  do {
    if (iVar3 < -0x7f) {
      iVar4 = -0x7f;
    }
    else {
      iVar4 = 0x7f;
      if (iVar3 < 0x80) {
        iVar4 = iVar3;
      }
    }
    *(int *)(*(int *)(param_1 + 0x138) + iVar3 * 4) = iVar4;
    if (iVar3 < -0x3ff) {
      iVar4 = -0x3ff;
    }
    else {
      iVar4 = 0x3ff;
      if (iVar3 < 0x400) {
        iVar4 = iVar3;
      }
    }
    iVar3 = iVar3 + 1;
    *(int *)(*(int *)(param_1 + 0x140) + -4 + iVar3 * 4) = iVar4;
  } while (iVar3 < 0x800);
  *(undefined4 *)(param_1 + 0x44) = 0x20000;
  iVar3 = 2;
  puVar2 = (undefined4 *)(param_1 + 0x48);
  do {
    lVar1 = (longlong)iVar3;
    iVar3 = iVar3 + 2;
    *puVar2 = (int)(0x20000 / lVar1);
    puVar2 = puVar2 + 1;
  } while (iVar3 < 0x40);
  return 0;
}


