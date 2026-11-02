/* Module: sfppack1.dll
   Function: FUN_5cdb9c80
   Address: 5cdb9c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb9c80(int param_1,undefined4 param_2,undefined4 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(double *)(param_1 + 0x38) != (double)CONCAT44(param_3,param_2)) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


