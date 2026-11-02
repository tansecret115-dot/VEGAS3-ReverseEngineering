/* Module: vfplugs.dll
   Function: FUN_00403950
   Address: 00403950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403950(int param_1,undefined4 *param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
  FUN_0040be00(param_2);
  pMem = (LPCVOID)param_2[0xaf];
  puVar6 = (undefined4 *)(param_1 + 0x214);
  puVar7 = param_2;
  for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x4cc);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_2[0xaf]);
    GlobalFree(pvVar1);
    param_2[0xae] = 0;
    param_2[0xaf] = 0;
  }
  if (0 < (int)uVar5) {
    pvVar1 = GlobalAlloc(2,uVar5 * 2);
    pvVar2 = GlobalLock(pvVar1);
    param_2[0xaf] = pvVar2;
  }
  param_2[0xae] = uVar5;
  if ((0 < (int)uVar5) && ((undefined4 *)param_2[0xaf] != (undefined4 *)0x0)) {
    puVar6 = *(undefined4 **)(param_1 + 0x4d0);
    puVar7 = (undefined4 *)param_2[0xaf];
    for (uVar4 = (uVar5 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1fc));
  return 0;
}


