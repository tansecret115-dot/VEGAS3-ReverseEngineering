/* Module: g2plug.dll
   Function: FUN_5f811c00
   Address: 5f811c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f811c00(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x18);
  if (iVar1 == 0x3ea) {
    FUN_5f813740(param_1,*(HWND *)((int)param_1 + 0x10));
    return 0;
  }
  if (iVar1 != 0x7533) {
    if (iVar1 != 0x7534) {
      FUN_5f812810(param_1,*(HWND *)((int)param_1 + 0x10));
      return 0;
    }
    FUN_5f813ce0(param_1,*(HWND *)((int)param_1 + 0x10));
    return 0;
  }
  FUN_5f8140d0(param_1,*(HWND *)((int)param_1 + 0x10));
  return 0;
}


