/* Module: vegas30k.dll
   Function: FUN_01040e20
   Address: 01040e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01040e20(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_01041030();
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x74));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x74));
    GlobalFree(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 0;
}


