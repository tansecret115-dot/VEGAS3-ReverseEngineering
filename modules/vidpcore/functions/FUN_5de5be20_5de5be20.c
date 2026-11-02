/* Module: vidpcore.dll
   Function: FUN_5de5be20
   Address: 5de5be20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de5be20(undefined4 *param_1)

{
  int *piVar1;
  LPCVOID pMem;
  HGLOBAL pvVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1[1] + -1;
  param_1[1] = iVar3;
  if ((iVar3 == 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = &PTR_FUN_5df1b580;
    param_1[1] = 1;
    InterlockedDecrement(&DAT_5df42794);
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
  }
  return iVar3;
}


