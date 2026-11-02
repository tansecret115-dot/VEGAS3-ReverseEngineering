/* Module: vidcap30.exe
   Function: FUN_00465d30
   Address: 00465d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00465d30(int param_1,undefined4 param_2,undefined4 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0xc0) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_0057c690(param_1,param_2,param_3);
  return;
}


