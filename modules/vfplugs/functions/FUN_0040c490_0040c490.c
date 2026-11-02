/* Module: vfplugs.dll
   Function: FUN_0040c490
   Address: 0040c490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c490(int param_1,undefined4 *param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((*(int *)(param_1 + 0x794) != 0) || (*(int *)(param_1 + 0xd18) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
    if (*(int *)(param_1 + 0xd18) == 0) {
      FUN_0040be00((undefined4 *)(param_1 + 0x4d4));
      pMem = *(LPCVOID *)(param_1 + 0x790);
      puVar6 = (undefined4 *)(param_1 + 0x214);
      puVar7 = (undefined4 *)(param_1 + 0x4d4);
      for (iVar5 = 0xae; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uVar4 = *(uint *)(param_1 + 0x4cc);
      if (pMem != (LPCVOID)0x0) {
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x790));
        GlobalFree(pvVar1);
        *(undefined4 *)(param_1 + 0x78c) = 0;
        *(undefined4 *)(param_1 + 0x790) = 0;
      }
      if (0 < (int)uVar4) {
        pvVar1 = GlobalAlloc(2,uVar4 * 2);
        pvVar2 = GlobalLock(pvVar1);
        *(LPVOID *)(param_1 + 0x790) = pvVar2;
      }
      *(uint *)(param_1 + 0x78c) = uVar4;
      if ((0 < (int)uVar4) && (*(undefined4 **)(param_1 + 0x790) != (undefined4 *)0x0)) {
        puVar6 = *(undefined4 **)(param_1 + 0x4d0);
        puVar7 = *(undefined4 **)(param_1 + 0x790);
        for (uVar3 = (uVar4 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
    }
    else {
      FUN_00404180((void *)(param_1 + 0x4d4),(undefined4 *)(param_1 + 0x798),param_1 + 0xa58,
                   *(double *)(param_1 + 0xd20));
    }
    *(undefined4 *)(param_1 + 0x794) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
  }
  FUN_00410950(param_1);
  if (param_2 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(param_1 + 0x148);
    for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_2 = *puVar6;
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
    }
  }
  return 0;
}


