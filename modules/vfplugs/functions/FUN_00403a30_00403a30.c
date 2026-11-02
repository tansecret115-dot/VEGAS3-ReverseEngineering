/* Module: vfplugs.dll
   Function: FUN_00403a30
   Address: 00403a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403a30(int param_1,undefined4 *param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
  FUN_0040be00((undefined4 *)(param_1 + 0x214));
  puVar7 = param_2;
  puVar8 = (undefined4 *)(param_1 + 0x214);
  for (iVar4 = 0xae; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar6 = param_2[0xae];
  if (*(LPCVOID *)(param_1 + 0x4d0) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4d0));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4d0));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  if (0 < (int)uVar6) {
    pvVar2 = GlobalAlloc(2,uVar6 * 2);
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)(param_1 + 0x4d0) = pvVar3;
  }
  *(uint *)(param_1 + 0x4cc) = uVar6;
  if ((0 < (int)uVar6) && (*(undefined4 **)(param_1 + 0x4d0) != (undefined4 *)0x0)) {
    puVar7 = (undefined4 *)param_2[0xaf];
    puVar8 = *(undefined4 **)(param_1 + 0x4d0);
    for (uVar5 = (uVar6 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  *(undefined4 *)(param_1 + 0x794) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
  piVar1 = *(int **)(param_1 + 0xd28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}


