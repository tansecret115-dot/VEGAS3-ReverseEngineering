/* Module: vidcap30.exe
   Function: FUN_0042db80
   Address: 0042db80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0042db80(int param_1)

{
  LPCVOID pMem;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  
  if (*(int *)(*(int *)(param_1 + 0x2c) + 8) == 0) {
    return 0;
  }
  do {
    iVar1 = FUN_0057b7d0();
    iVar2 = *(int *)(iVar1 + 0x24) + 1;
    iVar4 = iVar1;
    if (0 < iVar2) {
      do {
        (**(code **)(**(int **)(iVar4 + 0x18) + 8))(*(int **)(iVar4 + 0x18));
        iVar2 = iVar2 + -1;
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar2 != 0);
    }
    if ((iVar1 != 0) && (pMem = (LPCVOID)(iVar1 + -4), pMem != (LPCVOID)0x0)) {
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
  } while (*(int *)(*(int *)(param_1 + 0x2c) + 8) != 0);
  return 0;
}


