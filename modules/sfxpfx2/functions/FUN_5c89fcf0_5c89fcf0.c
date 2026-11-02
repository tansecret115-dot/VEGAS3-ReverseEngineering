/* Module: sfxpfx2.dll
   Function: FUN_5c89fcf0
   Address: 5c89fcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c89fcf0(int param_1,int param_2)

{
  if (param_2 < -0xfa) {
    param_2 = -0xfa;
  }
  else if (0xfa < param_2) {
    param_2 = 0xfa;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


