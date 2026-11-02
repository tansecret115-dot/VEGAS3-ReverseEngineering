/* Module: sfppack1.dll
   Function: FUN_5cdc4f60
   Address: 5cdc4f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc4f60(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0xa4) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xa4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xa4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x78) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return 0;
}


