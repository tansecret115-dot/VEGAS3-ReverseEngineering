/* Module: qt4plug.dll
   Function: FUN_5f525c30
   Address: 5f525c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f525c30(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x28) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x28));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x28));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


