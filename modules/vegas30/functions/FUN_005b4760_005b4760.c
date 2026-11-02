/* Module: vegas30.exe
   Function: FUN_005b4760
   Address: 005b4760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005b4760(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  
  pvVar1 = GlobalAlloc(0x40,0x1c);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005eac90();
  }
  *(int *)(param_1 + 0x3a8) = iVar3;
  if (iVar3 != 0) {
    pvVar1 = GlobalAlloc(2,0x1000);
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)(param_1 + 0x3ac) = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      *(undefined4 *)(param_1 + 0x3b0) = 0x1000;
      return 0;
    }
    pMem = *(LPCVOID *)(param_1 + 0x3a8);
    if (pMem != (LPCVOID)0x0) {
      FUN_005ead00();
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  return 0x8007000e;
}


