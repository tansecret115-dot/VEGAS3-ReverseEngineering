/* Module: sfcdi.dll
   Function: FUN_5bf1a1f0
   Address: 5bf1a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1a1f0(uint *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  uint uVar2;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      pMem = *(LPCVOID *)(param_1[1] + uVar2 * 4);
      if (pMem != (LPCVOID)0x0) {
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(*(LPCVOID *)(param_1[1] + uVar2 * 4));
        GlobalFree(pvVar1);
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)((param_1[1] - 4) + uVar2 * 4) = 0;
    } while (uVar2 < *param_1);
  }
  pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
  GlobalFree(pvVar1);
  return 0;
}


