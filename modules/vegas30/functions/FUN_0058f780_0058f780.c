/* Module: vegas30.exe
   Function: FUN_0058f780
   Address: 0058f780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058f780(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_0058f2e0(iVar1);
    *param_1 = 0;
    FUN_0058f270(iVar1);
    pvVar2 = GlobalHandle(DAT_0065ab40);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(DAT_0065ab40);
    GlobalFree(pvVar2);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0065ab18);
  }
  return;
}


