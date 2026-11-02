/* Module: qt4plug.dll
   Function: FUN_5f51c4e0
   Address: 5f51c4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f51c74a) */
/* WARNING: Removing unreachable block (ram,0x5f51c752) */
/* WARNING: Removing unreachable block (ram,0x5f51c66f) */
/* WARNING: Removing unreachable block (ram,0x5f51c68b) */
/* WARNING: Removing unreachable block (ram,0x5f51c694) */
/* WARNING: Removing unreachable block (ram,0x5f51c6a2) */

int FUN_5f51c4e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  LPVOID pvVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  code *pcVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596758;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(param_1 + 8) == 0) {
    ExceptionList = &local_14;
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 8) = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      ExceptionList = local_14;
      return -0x7ff8fff2;
    }
  }
  pcVar13 = GlobalUnlock_exref;
  if (*(LPCVOID *)(param_1 + 0x1c0) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c0));
    pcVar13 = GlobalUnlock_exref;
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c0));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(LPCVOID *)(param_1 + 0x1c8) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c8));
    (*pcVar13)(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c8));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(LPCVOID *)(param_1 + 0x1c4) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c4));
    (*pcVar13)(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c4));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  local_8 = 0;
  uVar4 = FUN_5f5773f0();
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  uVar4 = FUN_5f576510();
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  local_8 = 0xffffffff;
  uVar4 = FUN_5f576330();
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  uVar4 = FUN_5f576350();
  *(undefined4 *)(param_1 + 0x1b0) = uVar4;
  FUN_5f5765b0();
  FUN_5f576570();
  uVar5 = FUN_5f5769b0();
  FUN_5f577b10();
  iVar6 = FUN_5f51bf40(param_1);
  if (iVar6 < 0) {
    ExceptionList = local_14;
    return iVar6;
  }
  pvVar3 = GlobalAlloc(0x42,0x12);
  pvVar7 = GlobalLock(pvVar3);
  *(LPVOID *)(param_1 + 0x1c0) = pvVar7;
  if (pvVar7 == (LPVOID)0x0) {
    ExceptionList = local_14;
    return -0x7ff8fff2;
  }
  if (*(int *)(param_1 + 0x1c4) == 0) {
    pvVar3 = GlobalAlloc(0x42,0x20);
    puVar8 = GlobalLock(pvVar3);
    *(undefined4 **)(param_1 + 0x1c4) = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      ExceptionList = local_14;
      return -0x7ff8fff2;
    }
    puVar14 = puVar8;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *puVar8 = 0x20;
    puVar8[1] = puVar8[1] & 0xfffffffe;
  }
  sVar1 = *(short *)(param_1 + 0x58);
  if ((sVar1 == 3) || (sVar1 == 1)) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = *(ushort *)(param_1 + 0x68) + 0x12;
  }
  psVar12 = (short *)(param_1 + 0x58);
  puVar8 = *(undefined4 **)(param_1 + 0x1c0);
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar8 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    puVar8 = puVar8 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)puVar8 = (char)*psVar12;
    psVar12 = (short *)((int)psVar12 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pvVar3 = GlobalAlloc(0x42,0x12);
  puVar8 = GlobalLock(pvVar3);
  *(undefined4 **)(param_1 + 0x1c8) = puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    ExceptionList = local_14;
    return -0x7ff8fff2;
  }
  psVar12 = *(short **)(param_1 + 0x1c0);
  if ((*psVar12 == 3) || (*psVar12 == 1)) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = (ushort)psVar12[8] + 0x12;
  }
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar8 = *(undefined4 *)psVar12;
    psVar12 = psVar12 + 2;
    puVar8 = puVar8 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(char *)puVar8 = (char)*psVar12;
    psVar12 = (short *)((int)psVar12 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(uint *)(param_1 + 0x20) = uVar5 / *(uint *)(*(int *)(param_1 + 0x1c8) + 4);
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar9 = FUN_5f576750();
  *(int *)(param_1 + 0x38) = iVar9;
  *(int *)(param_1 + 0x3c) = iVar9 >> 0x1f;
  iVar9 = *(int *)(param_1 + 0x1c8);
  if (*(int *)(iVar9 + 4) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = ftol();
  }
  *(undefined8 *)(param_1 + 0x30) = uVar15;
  if (*(int *)(iVar9 + 4) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = ftol();
  }
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 1;
  ExceptionList = local_14;
  return iVar6;
}


