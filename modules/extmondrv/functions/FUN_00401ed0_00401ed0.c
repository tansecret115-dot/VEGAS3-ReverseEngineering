/* Module: extmondrv.dll
   Function: FUN_00401ed0
   Address: 00401ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401ed0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return 0;
}


