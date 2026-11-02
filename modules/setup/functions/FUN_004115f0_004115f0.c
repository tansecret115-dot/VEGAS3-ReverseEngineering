/* Module: Setup.exe
   Function: FUN_004115f0
   Address: 004115f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004115f0(int param_1)

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


