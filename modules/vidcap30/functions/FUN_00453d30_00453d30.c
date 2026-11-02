/* Module: vidcap30.exe
   Function: FUN_00453d30
   Address: 00453d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453d30(int param_1,int param_2,int param_3)

{
  RECT *lpRect;
  
  lpRect = (RECT *)(param_1 + 0x14);
  param_2 = param_2 - *(int *)(param_1 + 0x14);
  param_3 = param_3 - *(int *)(param_1 + 0x18);
  lpRect->left = lpRect->left + param_2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),lpRect,1);
  }
  return;
}


