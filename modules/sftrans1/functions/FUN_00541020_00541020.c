/* Module: sftrans1.dll
   Function: FUN_00541020
   Address: 00541020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00541020(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_1 + 0x28);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


