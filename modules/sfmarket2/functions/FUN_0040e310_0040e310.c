/* Module: sfmarket2.dll
   Function: FUN_0040e310
   Address: 0040e310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040e310(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    EndDialog(*(HWND *)(param_1 + 4),1);
    return 0;
  }
  EndDialog(*(HWND *)(param_1 + 4),2);
  return 0;
}


