/* Module: vidpcore.dll
   Function: FUN_5de827b0
   Address: 5de827b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de827b0(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0x168) != 0) || (*(int *)(param_1 + 0x1ac) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
    if (*(int *)(param_1 + 0x1ac) == 0) {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x160);
    }
    else {
      *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x1a4);
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  }
  *param_2 = *(undefined4 *)(param_1 + 0x164);
  return 0;
}


