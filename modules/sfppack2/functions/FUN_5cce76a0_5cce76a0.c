/* Module: sfppack2.dll
   Function: FUN_5cce76a0
   Address: 5cce76a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce76a0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x69c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x69c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x69c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x69c) = 0;
    return 0;
  }
  return 0;
}


