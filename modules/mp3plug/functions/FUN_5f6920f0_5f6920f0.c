/* Module: mp3plug.dll
   Function: FUN_5f6920f0
   Address: 5f6920f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6920f0(int *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  InterlockedDecrement(param_1 + 0x89);
  iVar2 = param_1[0x89];
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_5f691fd0(param_1);
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


