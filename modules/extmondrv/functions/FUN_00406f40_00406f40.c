/* Module: extmondrv.dll
   Function: FUN_00406f40
   Address: 00406f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406f40(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  uVar1 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_2 + 0x10) != 0) {
    if ((*(int *)(param_1 + 0x20) != *(int *)(param_2 + 4)) ||
       (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x10))) goto LAB_00406fac;
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 8)) {
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      goto LAB_00406fac;
    }
    if ((*(int *)(param_2 + 8) != 0x1e0) && (*(int *)(param_2 + 8) != 0x240)) goto LAB_00406fac;
  }
  uVar1 = 0;
LAB_00406fac:
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}


