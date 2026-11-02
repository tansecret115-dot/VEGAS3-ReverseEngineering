/* Module: sftrans1.dll
   Function: FUN_004783b0
   Address: 004783b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004783b0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x1cc) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1cc));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1cc));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  return;
}


