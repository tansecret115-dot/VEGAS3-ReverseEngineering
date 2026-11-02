/* Module: vegas30.exe
   Function: FUN_004aac70
   Address: 004aac70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aac70(int param_1,HDC param_2)

{
  if (*(int *)(param_1 + 0xe90) == 0) {
    SelectClipRgn(param_2,(HRGN)0x0);
    ReleaseDC(*(HWND *)(param_1 + 4),param_2);
  }
  return;
}


