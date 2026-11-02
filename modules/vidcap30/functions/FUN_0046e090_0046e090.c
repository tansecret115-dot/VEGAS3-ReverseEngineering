/* Module: vidcap30.exe
   Function: FUN_0046e090
   Address: 0046e090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046e090(int param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}


