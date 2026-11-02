/* Module: vegas30.exe
   Function: FUN_00574cb0
   Address: 00574cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00574cb0(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 8) + -1;
  *(int *)((int)param_1 + 8) = iVar1;
  if ((iVar1 == 0) && (param_1 != (LPCVOID)0x0)) {
    FUN_00574c90();
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return;
}


