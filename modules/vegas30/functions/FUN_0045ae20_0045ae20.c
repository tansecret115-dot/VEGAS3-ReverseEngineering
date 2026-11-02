/* Module: vegas30.exe
   Function: FUN_0045ae20
   Address: 0045ae20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045ae20(int param_1)

{
  if (*(UINT_PTR *)(param_1 + 0x180) != 0) {
    KillTimer(*(HWND *)(param_1 + 4),*(UINT_PTR *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return;
}


