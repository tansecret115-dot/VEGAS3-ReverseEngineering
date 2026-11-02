/* Module: vidcap30.exe
   Function: FUN_004549b0
   Address: 004549b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004549b0(int param_1,LONG *param_2)

{
  ((RECT *)(param_1 + 0x14))->left = *param_2;
  *(LONG *)(param_1 + 0x18) = param_2[1];
  *(LONG *)(param_1 + 0x1c) = param_2[2];
  *(LONG *)(param_1 + 0x20) = param_2[3];
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


