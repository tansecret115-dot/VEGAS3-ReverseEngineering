/* Module: sfxpfx2.dll
   Function: FUN_5c89c350
   Address: 5c89c350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c89c350(int param_1,uint param_2)

{
  if (900 < param_2) {
    param_2 = 900;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(uint *)(param_1 + 0x24) != param_2) {
    *(uint *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


