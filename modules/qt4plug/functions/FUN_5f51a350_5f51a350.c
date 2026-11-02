/* Module: qt4plug.dll
   Function: FUN_5f51a350
   Address: 5f51a350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f51a350(int *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  
  InterlockedDecrement(param_1 + 0xd2);
  iVar2 = param_1[0xd2];
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_5f51a230(param_1);
      pvVar1 = GlobalHandle(param_1);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(param_1);
      GlobalFree(pvVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}


