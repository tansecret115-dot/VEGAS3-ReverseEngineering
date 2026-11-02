/* Module: sfmarket2.dll
   Function: FUN_00413770
   Address: 00413770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00413770(int param_1)

{
  HWND hWnd;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
    DAT_004a9da0 = SendMessageA(hWnd,0xf0,0,0);
    if (DAT_004a9da0 == 1) {
      EndDialog(*(HWND *)(param_1 + 4),1);
      return 0;
    }
  }
  DAT_004a9da0 = 0;
  EndDialog(*(HWND *)(param_1 + 4),0);
  return 0;
}


