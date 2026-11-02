/* Module: aifplug.dll
   Function: FUN_5fbe0a40
   Address: 5fbe0a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbe0a40(uint *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        pMem = *(LPCVOID *)(param_1[1] + 4 + uVar2 * 8);
        if (pMem != (LPCVOID)0x0) {
          pvVar1 = GlobalHandle(pMem);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle(*(LPCVOID *)(param_1[1] + 4 + uVar2 * 8));
          GlobalFree(pvVar1);
          *(undefined4 *)(param_1[1] + 4 + uVar2 * 8) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *param_1);
    }
    pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalFree(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    return 0;
  }
  return 0;
}


