/* Module: vegas30k.dll
   Function: FUN_01161ac0
   Address: 01161ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_01161ac0(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x20));
  if (LVar1 == 0) {
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return *(LONG *)((int)param_1 + 0x20);
}


