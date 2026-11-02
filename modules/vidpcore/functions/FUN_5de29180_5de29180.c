/* Module: vidpcore.dll
   Function: FUN_5de29180
   Address: 5de29180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de29180(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x80) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x80));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x80));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}


