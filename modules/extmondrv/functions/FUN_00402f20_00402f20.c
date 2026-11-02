/* Module: extmondrv.dll
   Function: FUN_00402f20
   Address: 00402f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402f20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar2 = 0x80040209;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    uVar2 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return uVar2;
}


