/* Module: sfpublish.dll
   Function: FUN_00415510
   Address: 00415510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00415510(int param_1)

{
  FUN_00420760(*(int *)(param_1 + 0x20));
  EndDialog(*(HWND *)(param_1 + 4),2);
  return 0;
}


