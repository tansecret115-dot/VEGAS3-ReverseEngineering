/* Module: vegas30k.dll
   Function: FUN_01197e00
   Address: 01197e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01197e00(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x454) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x454));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x454));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  return 0;
}


