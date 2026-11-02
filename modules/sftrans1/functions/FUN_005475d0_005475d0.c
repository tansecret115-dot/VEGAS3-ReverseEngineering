/* Module: sftrans1.dll
   Function: FUN_005475d0
   Address: 005475d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005475d0(int param_1)

{
  tagRECT local_10;
  
  if (*(int *)(param_1 + 8) != 0) {
    GetClientRect(*(HWND *)(param_1 + 4),&local_10);
    SetWindowPos(*(HWND *)(param_1 + 8),(HWND)0x0,local_10.left,local_10.top,
                 local_10.right - local_10.left,local_10.bottom - local_10.top,0x44);
  }
  return;
}


