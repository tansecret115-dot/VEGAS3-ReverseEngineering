/* Module: vegas30k.dll
   Function: FUN_011654e0
   Address: 011654e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_011654e0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *pMem;
  undefined1 *puVar3;
  undefined4 *unaff_ESI;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = 0;
    pvVar1 = GlobalAlloc(0x40,0x28);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 != (LPVOID)0x0) {
      pMem = (int *)FUN_01164f80();
      if (pMem != (int *)0x0) {
        puVar3 = (undefined1 *)(**(code **)(*pMem + 0x38))(pMem,param_1,param_2,0,param_3,0);
        if (-1 < (int)puVar3) {
          *unaff_ESI = pMem;
          return puVar3;
        }
        FUN_01164fb0();
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


