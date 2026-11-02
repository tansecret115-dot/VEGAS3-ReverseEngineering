/* Module: vegas30k.dll
   Function: FUN_01165450
   Address: 01165450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01165450(int param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pMem;
  undefined1 *puVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    pvVar1 = GlobalAlloc(0x40,0x20);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 != (LPVOID)0x0) {
      pMem = (LPCVOID)FUN_01164b80();
      if (pMem != (LPCVOID)0x0) {
        puVar3 = (undefined1 *)FUN_01164bc0(param_1);
        if (-1 < (int)puVar3) {
          *param_2 = pMem;
          return puVar3;
        }
        FUN_01164bb0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        return puVar3;
      }
    }
    return (undefined1 *)0x8007000e;
  }
  return &DAT_80070057;
}


