/* Module: sfppack1.dll
   Function: FUN_5cdcbd20
   Address: 5cdcbd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdcbd20(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x294) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x294));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x294));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x100) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x100));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x100));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 1;
  return 0;
}


