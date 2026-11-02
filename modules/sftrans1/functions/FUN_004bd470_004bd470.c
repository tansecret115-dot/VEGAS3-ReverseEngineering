/* Module: sftrans1.dll
   Function: FUN_004bd470
   Address: 004bd470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004bd470(int param_1,int param_2)

{
  HWND pHVar1;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    pHVar1 = GetFocus();
    if (*(HWND *)(param_1 + 0x38) == pHVar1) {
      local_10.left = *(int *)(param_1 + 0xac);
      local_10.top = *(int *)(param_1 + 0xb0);
      local_10.right = *(int *)(param_1 + 0xb4);
      local_10.bottom = *(int *)(param_1 + 0xb8);
      InflateRect(&local_10,-2,-2);
      if (param_2 != 0) {
        CreateCaret(*(HWND *)(param_1 + 0x38),(HBITMAP)0x1,local_10.right - local_10.left,
                    local_10.bottom - local_10.top);
      }
      SetCaretPos(local_10.left,local_10.top);
    }
  }
  return;
}


