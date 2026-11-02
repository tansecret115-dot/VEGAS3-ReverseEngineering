/* Module: vegas30k.dll
   Function: FUN_0100ff40
   Address: 0100ff40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0100ff40(int param_1)

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


