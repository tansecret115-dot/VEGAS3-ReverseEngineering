/* Module: sfxpfx2.dll
   Function: FUN_5c893560
   Address: 5c893560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c893560(int param_1,int param_2)

{
  if (param_2 < -800) {
    param_2 = -800;
  }
  else if (0xf0 < param_2) {
    param_2 = 0xf0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x34) != param_2) {
    *(int *)(param_1 + 0x34) = param_2;
    *(undefined4 *)(param_1 + 0x144) = 1;
    *(undefined4 *)(param_1 + 0x14c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


