/* Module: sfppack2.dll
   Function: FUN_5cd0c290
   Address: 5cd0c290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd0c290(uint param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar5 = param_2;
  uVar1 = param_1;
  param_1 = *(uint *)(param_1 + 0xa0);
  if (param_1 < param_2) {
    if (param_1 != param_2) {
      return 0;
    }
  }
  else {
    param_1 = param_2;
  }
  iVar2 = FUN_5cd0a430(uVar1,param_2,&param_1);
  if (iVar2 != 0) {
    if (param_3 == 0) {
      *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 4 + param_1 * 0x1c) = 1;
      if (param_4 != 0) {
        *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x18 + param_1 * 0x1c) = param_5;
        return 1;
      }
      *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x14 + param_1 * 0x1c) = param_5;
      return 1;
    }
    *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 8 + param_1 * 0x1c) = 1;
    if (param_4 != 0) {
      *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x10 + param_1 * 0x1c) = param_5;
      return 1;
    }
    *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0xc + param_1 * 0x1c) = param_5;
    return 1;
  }
  if (*(uint *)(uVar1 + 0xb0) < *(int *)(uVar1 + 0xac) + 1U) {
    iVar2 = *(uint *)(uVar1 + 0xb0) + 5;
    pvVar3 = GlobalAlloc(0x42,iVar2 * 0x1c);
    puVar4 = GlobalLock(pvVar3);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(undefined4 **)(uVar1 + 0xbc) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(uVar1 + 0xbc);
      puVar8 = puVar4;
      for (uVar5 = (uint)(*(int *)(uVar1 + 0xac) * 0x1c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      pvVar3 = GlobalHandle(*(LPCVOID *)(uVar1 + 0xbc));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(uVar1 + 0xbc));
      GlobalFree(pvVar3);
      uVar5 = param_2;
    }
    *(int *)(uVar1 + 0xb0) = iVar2;
    *(undefined4 **)(uVar1 + 0xbc) = puVar4;
    puVar4[*(int *)(uVar1 + 0xac) * 7 + 1] = 0;
    *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 8 + *(int *)(uVar1 + 0xac) * 0x1c) = 0;
  }
  *(uint *)(*(int *)(uVar1 + 0xbc) + *(int *)(uVar1 + 0xac) * 0x1c) = uVar5;
  if (param_3 != 0) {
    *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 8 + *(int *)(uVar1 + 0xac) * 0x1c) = 1;
    if (param_4 != 0) {
      *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x10 + *(int *)(uVar1 + 0xac) * 0x1c) = param_5;
      *(int *)(uVar1 + 0xac) = *(int *)(uVar1 + 0xac) + 1;
      return 1;
    }
    *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0xc + *(int *)(uVar1 + 0xac) * 0x1c) = param_5;
    *(int *)(uVar1 + 0xac) = *(int *)(uVar1 + 0xac) + 1;
    return 1;
  }
  *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 4 + *(int *)(uVar1 + 0xac) * 0x1c) = 1;
  if (param_4 != 0) {
    *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x18 + *(int *)(uVar1 + 0xac) * 0x1c) = param_5;
    *(int *)(uVar1 + 0xac) = *(int *)(uVar1 + 0xac) + 1;
    return 1;
  }
  *(undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x14 + *(int *)(uVar1 + 0xac) * 0x1c) = param_5;
  *(int *)(uVar1 + 0xac) = *(int *)(uVar1 + 0xac) + 1;
  return 1;
}


