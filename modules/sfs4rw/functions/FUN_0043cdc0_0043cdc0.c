/* Module: sfs4rw.dll
   Function: FUN_0043cdc0
   Address: 0043cdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0043cdc0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x938) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x938));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x938));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x938) = 0;
  }
  return;
}


