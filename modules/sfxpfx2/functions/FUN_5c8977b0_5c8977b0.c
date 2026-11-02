/* Module: sfxpfx2.dll
   Function: FUN_5c8977b0
   Address: 5c8977b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8977b0(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  else if (3 < param_2) {
    param_2 = 3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x1c) != param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


