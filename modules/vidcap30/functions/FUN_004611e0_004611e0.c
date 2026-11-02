/* Module: vidcap30.exe
   Function: FUN_004611e0
   Address: 004611e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004611e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  if ((*(byte *)(param_1 + 0x44) & 0x10) != 0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


