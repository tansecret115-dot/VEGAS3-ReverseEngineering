/* Module: mp3plug.dll
   Function: FUN_5f695920
   Address: 5f695920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f695920(void *param_1)

{
  if (*(int *)((int)param_1 + 0x18) != 0x3f5) {
    FUN_5f696140(param_1,*(HWND *)((int)param_1 + 0x10));
    return 0;
  }
  FUN_5f696ac0(param_1,*(HWND *)((int)param_1 + 0x10));
  return 0;
}


