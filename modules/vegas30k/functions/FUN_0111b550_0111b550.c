/* Module: vegas30k.dll
   Function: FUN_0111b550
   Address: 0111b550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111b550(HWND param_1,byte *param_2,RECT *param_3,BOOL param_4)

{
  InvalidateRect(param_1,param_3,param_4);
  if ((*param_2 & 0x10) == 0) {
    UpdateWindow(param_1);
  }
  return;
}


