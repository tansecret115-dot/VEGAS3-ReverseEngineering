/* Module: mcplugrw.dll
   Function: FUN_0043ce40
   Address: 0043ce40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0043ce40(int param_1)

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


