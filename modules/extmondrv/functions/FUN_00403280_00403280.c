/* Module: extmondrv.dll
   Function: FUN_00403280
   Address: 00403280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403280(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x90);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int **)(param_1 + 0xc4);
  if (piVar1 == (int *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x8004020a;
  }
  if (param_2 != 0) {
    uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}


