/* Module: extmondrv.dll
   Function: FUN_00403e50
   Address: 00403e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403e50(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return 0;
}


