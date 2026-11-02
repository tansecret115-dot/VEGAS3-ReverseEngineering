/* Module: sftrkfx1.dll
   Function: FUN_5cba8080
   Address: 5cba8080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba8080(int param_1,int param_2)

{
  if (param_2 < -0x96) {
    param_2 = -0x96;
  }
  else if (0x96 < param_2) {
    param_2 = 0x96;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x40) != param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


