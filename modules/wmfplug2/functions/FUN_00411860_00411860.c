/* Module: wmfplug2.dll
   Function: FUN_00411860
   Address: 00411860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411860(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x18);
  if (iVar1 == 0x318) {
    FUN_00412fb0(param_1,*(HWND *)((int)param_1 + 0x10));
    return 0;
  }
  if (iVar1 != 0x319) {
    if (iVar1 != 0x31a) {
      FUN_00411f80(param_1,*(HWND *)((int)param_1 + 0x10));
      return 0;
    }
    FUN_00412710(param_1,*(HWND *)((int)param_1 + 0x10));
    return 0;
  }
  FUN_00413af0(param_1,*(HWND *)((int)param_1 + 0x10));
  return 0;
}


