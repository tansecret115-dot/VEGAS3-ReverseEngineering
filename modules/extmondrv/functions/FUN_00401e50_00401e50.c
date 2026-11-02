/* Module: extmondrv.dll
   Function: FUN_00401e50
   Address: 00401e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401e50(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  int local_4;
  
  uVar2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x90);
  local_4 = 0;
  EnterCriticalSection(lpCriticalSection);
  if (param_2 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*param_2)(param_2,&DAT_00455dec,&local_4);
    if (local_4 == 0) {
      LeaveCriticalSection(lpCriticalSection);
      return 0x8000ffff;
    }
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int *)(param_1 + 0x1c) = local_4;
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}


