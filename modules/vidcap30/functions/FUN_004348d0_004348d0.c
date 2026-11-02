/* Module: vidcap30.exe
   Function: FUN_004348d0
   Address: 004348d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004348d0(int param_1,int param_2)

{
  if (param_2 != 0) {
    SetTimer(*(HWND *)(param_1 + 8),3,*(UINT *)(param_1 + 0x1c48),(TIMERPROC)0x0);
    return;
  }
  KillTimer(*(HWND *)(param_1 + 8),3);
  return;
}


