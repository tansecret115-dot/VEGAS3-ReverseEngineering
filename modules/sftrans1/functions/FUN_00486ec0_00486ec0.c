/* Module: sftrans1.dll
   Function: FUN_00486ec0
   Address: 00486ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486ec0(int param_1,int param_2,int param_3)

{
  undefined4 *pMem;
  LPCVOID pvVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  
  if ((-1 < param_2) && (param_2 < **(int **)(param_1 + 0xa4))) {
    pMem = *(undefined4 **)((*(int **)(param_1 + 0xa4))[2] + param_2 * 4);
    FUN_0048c830(param_2,0,0);
    iVar2 = FUN_00486940(*pMem);
    if ((param_3 != 0) || (iVar2 != 0)) {
      FUN_004dc400(*(undefined4 *)(param_1 + 0xa4),param_2,1,1);
      if (iVar2 != 0) {
        iVar4 = 0;
        if (0 < *(int *)(iVar2 + 0xc)) {
          do {
            pvVar1 = *(LPCVOID *)(pMem[1] + iVar4 * 4);
            if (pvVar1 != (LPCVOID)0x0) {
              pvVar3 = GlobalHandle(pvVar1);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(pvVar1);
              GlobalFree(pvVar3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar2 + 0xc));
        }
        pvVar1 = (LPCVOID)pMem[1];
        if (pvVar1 != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pvVar1);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pvVar1);
          GlobalFree(pvVar3);
        }
        pvVar1 = (LPCVOID)pMem[2];
        if (pvVar1 != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle(pvVar1);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pvVar1);
          GlobalFree(pvVar3);
        }
      }
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      FUN_0048c310(5,param_2,1);
      return 1;
    }
  }
  return 0;
}


