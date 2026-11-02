/* Module: vidcap30.exe
   Function: FUN_00421b10
   Address: 00421b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421b10(int param_1,WPARAM param_2,int param_3)

{
  *(WPARAM *)(param_1 + 0x134) = param_2;
  if (((*(uint *)(param_1 + 0x138) & 1) != 0) || ((*(uint *)(param_1 + 0x138) & 2) != 0)) {
    SendMessageA(*(HWND *)(param_1 + 8),0x30,param_2,param_3);
  }
  if (((*(uint *)(param_1 + 0x138) & 4) != 0) && (param_3 != 0)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x14),0);
  }
  return;
}


