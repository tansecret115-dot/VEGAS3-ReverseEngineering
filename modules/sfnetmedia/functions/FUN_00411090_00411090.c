/* Module: sfnetmedia.dll
   Function: FUN_00411090
   Address: 00411090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411090(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    EndDialog(*(HWND *)(param_1 + 4),1);
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00427930(*(int *)(param_1 + 0x28));
  }
  EndDialog(*(HWND *)(param_1 + 4),2);
  return 0;
}


