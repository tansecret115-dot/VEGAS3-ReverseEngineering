/* Module: mp3plug.dll
   Function: FUN_5f69a4e0
   Address: 5f69a4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f69a4e0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0xc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc));
    GlobalFree(pvVar1);
  }
  return;
}


