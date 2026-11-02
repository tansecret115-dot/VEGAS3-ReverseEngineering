/* Module: vegas30k.dll
   Function: FUN_01199570
   Address: 01199570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01199570(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(int *)(param_1 + 0x4c0) != 0) {
    FUN_01199800();
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x4c0));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  return 0;
}


