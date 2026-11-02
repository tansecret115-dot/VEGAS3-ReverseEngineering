/* Module: sfxpfx1.dll
   Function: FUN_5c94e840
   Address: 5c94e840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c94e840(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x1ffc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1ffc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1ffc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1ffc) = 0;
    return 0;
  }
  return 0;
}


