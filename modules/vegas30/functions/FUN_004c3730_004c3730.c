/* Module: vegas30.exe
   Function: FUN_004c3730
   Address: 004c3730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c3730(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = (LPCVOID)*param_1;
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return;
}


