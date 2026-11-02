/* Module: aviplug.dll
   Function: FUN_5f952070
   Address: 5f952070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f952070(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if ((param_1 != (LPCVOID)0x0) && (param_1 != (LPCVOID)0xffffffff)) {
    if (*(int *)((int)param_1 + 0x28) != 0) {
      FUN_5f951ac0((int *)((int)param_1 + 0x10));
    }
    if (*(int *)((int)param_1 + 0x44) != 0) {
      FUN_5f951ac0((int *)((int)param_1 + 0x2c));
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    InterlockedDecrement((LONG *)&DAT_5f9f419c);
    return 1;
  }
  return 1;
}


