/* Module: vidcap30.exe
   Function: FUN_004a2df0
   Address: 004a2df0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a2df0(LPCVOID param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  int iVar3;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 8));
  if (LVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_004a00e0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    return 0;
  }
  iVar3 = *(LONG *)((int)param_1 + 8);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}


