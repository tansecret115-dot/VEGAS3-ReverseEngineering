/* Module: vidcap30.exe
   Function: FUN_005194d0
   Address: 005194d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005194d0(int param_1,int param_2)

{
  *(uint *)(param_1 + 4) =
       ((uint)(param_2 == 0) ^ *(uint *)(param_1 + 4)) & 1 ^ *(uint *)(param_1 + 4);
  InvalidateRect(*(HWND *)(param_1 + 0x3c),(RECT *)(param_1 + 0x48),0);
  UpdateWindow(*(HWND *)(param_1 + 0x3c));
  return;
}


