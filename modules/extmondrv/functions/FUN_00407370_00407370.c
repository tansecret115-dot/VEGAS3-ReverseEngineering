/* Module: extmondrv.dll
   Function: FUN_00407370
   Address: 00407370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407370(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x8000ffff;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))(piVar1);
    uVar2 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return uVar2;
}


