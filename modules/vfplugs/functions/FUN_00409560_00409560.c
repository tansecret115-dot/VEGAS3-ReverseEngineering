/* Module: vfplugs.dll
   Function: FUN_00409560
   Address: 00409560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00409560(undefined4 *param_1)

{
  int *piVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  int iVar3;
  int extraout_EDX;
  uint uVar4;
  
  iVar3 = param_1[1] + -1;
  param_1[1] = iVar3;
  if ((iVar3 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_004870e8;
    param_1[1] = 1;
    InterlockedDecrement(&DAT_0049453c);
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    uVar4 = 0;
    if (param_1[5] != 0) {
      do {
        piVar1 = *(int **)(param_1[4] + uVar4 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[5]);
    }
    pMem = (LPCVOID)param_1[4];
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    iVar3 = extraout_EDX;
  }
  return iVar3;
}


