/* Module: sftrkfx1.dll
   Function: FUN_5cbca410
   Address: 5cbca410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbca410(int param_1,int param_2)

{
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    local_10.left = *(int *)(param_1 + 0x68);
    local_10.top = *(int *)(param_1 + 0x6c);
    local_10.right = *(int *)(param_1 + 0x70);
    local_10.bottom = *(int *)(param_1 + 0x74);
    InflateRect(&local_10,-*(int *)(param_1 + 0x7c),-*(int *)(param_1 + 0x80));
    if (param_2 != 0) {
      CreateCaret(*(HWND *)(param_1 + 0x28),(HBITMAP)0x1,local_10.right - local_10.left,
                  local_10.bottom - local_10.top);
    }
    SetCaretPos(local_10.left,local_10.top);
  }
  return;
}


