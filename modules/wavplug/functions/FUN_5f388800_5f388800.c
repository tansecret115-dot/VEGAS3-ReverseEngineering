/* Module: wavplug.dll
   Function: FUN_5f388800
   Address: 5f388800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f388800(int param_1,short *param_2,undefined4 *param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  SIZE_T dwBytes;
  LPVOID pvVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint local_18;
  short local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  ushort local_8;
  undefined2 uStack_6;
  undefined2 local_4;
  
  local_18 = 0;
  if ((*(int *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_5f388520(param_1 + -0xa8);
  }
  psVar7 = param_2;
  if (param_2 == (short *)0x0) {
    psVar7 = *(short **)(param_1 + 0x28);
  }
  iVar1 = FUN_5f388420(param_1 + -0xa8);
  if (iVar1 != 0) {
    local_14 = 1;
    local_4 = 0;
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x28) + 2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 4);
    local_12 = *(undefined2 *)puVar10;
    uStack_10 = (undefined2)iVar1;
    uStack_e = (undefined2)((uint)iVar1 >> 0x10);
    psVar7 = &local_14;
    uVar4 = (short)*puVar10 * 2;
    _local_8 = CONCAT22(0x10,uVar4);
    local_c = (uint)uVar4 * iVar1;
  }
  if (psVar7 == (short *)0x0) {
    return 0x80070057;
  }
  if ((*psVar7 == 3) || (*psVar7 == 1)) {
    uVar6 = 0x10;
  }
  else {
    uVar6 = (ushort)psVar7[8] + 0x12;
  }
  psVar8 = *(short **)(param_1 + 0x30);
  if (psVar8 != (short *)0x0) {
    if ((*psVar8 == 3) || (*psVar8 == 1)) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = (ushort)psVar8[8] + 0x12;
    }
    if (uVar6 <= uVar5) goto LAB_5f388924;
    if (psVar8 != (short *)0x0) {
      pvVar2 = GlobalHandle(psVar8);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x30));
      GlobalFree(pvVar2);
    }
  }
  dwBytes = 0x12;
  if (0x11 < uVar6) {
    dwBytes = uVar6;
  }
  pvVar2 = GlobalAlloc(0x42,dwBytes);
  pvVar3 = GlobalLock(pvVar2);
  *(LPVOID *)(param_1 + 0x30) = pvVar3;
LAB_5f388924:
  if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
    local_18 = 0x8007000e;
  }
  else {
    puVar10 = *(undefined4 **)(param_1 + 0x30);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *(undefined4 *)psVar7;
      psVar7 = psVar7 + 2;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar10 = (char)*psVar7;
      psVar7 = (short *)((int)psVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar1 = FUN_5f388420(param_1 + -0xa8);
    if (iVar1 != 0) {
      local_18 = FUN_5f3886c0((void *)(param_1 + -0xa8));
      if ((-1 < (int)local_18) && (param_2 != (short *)0x0)) {
        psVar7 = *(short **)(param_1 + 0x30);
        iVar1 = 7;
        bVar11 = true;
        psVar8 = psVar7;
        psVar9 = param_2;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar11 = *psVar8 == *psVar9;
          psVar8 = psVar8 + 1;
          psVar9 = psVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          local_18 = 1;
          *(undefined4 *)param_2 = *(undefined4 *)psVar7;
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(psVar7 + 2);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(psVar7 + 4);
          *(undefined4 *)(param_2 + 6) = *(undefined4 *)(psVar7 + 6);
          param_2[8] = psVar7[8];
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)(param_1 + 0x34);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar10 = *param_3;
        param_3 = param_3 + 1;
        puVar10 = puVar10 + 1;
      }
      return local_18;
    }
  }
  return local_18;
}


