/* Module: gifplug.dll
   Function: FUN_5f6c2810
   Address: 5f6c2810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6c2810(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 100),0xffffffff);
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  pMem = *(LPCVOID *)(param_1 + 0xc);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 100));
  return 0;
}


