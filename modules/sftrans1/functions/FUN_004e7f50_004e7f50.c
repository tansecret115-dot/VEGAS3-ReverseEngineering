/* Module: sftrans1.dll
   Function: FUN_004e7f50
   Address: 004e7f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004e7f50(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_1 + 0x126bc);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x126bc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x126bc) = 0;
  return;
}


