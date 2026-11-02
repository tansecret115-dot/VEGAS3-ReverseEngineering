/* Module: qt4plug.dll
   Function: FUN_5f5192a0
   Address: 5f5192a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f5192a0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[0x45] + -1;
  param_1[0x45] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_5f513b70(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


