/* Module: sfxpfx2.dll
   Function: FUN_5c8a0030
   Address: 5c8a0030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8a0030(int param_1,int param_2)

{
  if (param_2 < 0x14) {
    param_2 = 0x14;
  }
  else if (15000 < param_2) {
    param_2 = 15000;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


