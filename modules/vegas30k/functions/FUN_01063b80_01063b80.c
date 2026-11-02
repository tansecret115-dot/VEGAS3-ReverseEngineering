/* Module: vegas30k.dll
   Function: FUN_01063b80
   Address: 01063b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01063b80(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  int iVar3;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 4));
  if (LVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_0105f6a0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  iVar3 = *(LONG *)((int)param_1 + 4);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}


