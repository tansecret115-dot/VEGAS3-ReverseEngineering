/* Module: vidcap30.exe
   Function: FUN_0042cf90
   Address: 0042cf90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0042cf90(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_1 + 0x24);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return pMem == (LPCVOID)0x0;
}


