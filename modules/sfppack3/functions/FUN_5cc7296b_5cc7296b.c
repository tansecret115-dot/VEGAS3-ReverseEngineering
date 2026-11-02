/* Module: sfppack3.dll
   Function: FUN_5cc7296b
   Address: 5cc7296b
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc7296b(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
    EnterCriticalSection(lpCriticalSection);
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0;
  }
  return uVar2;
}


