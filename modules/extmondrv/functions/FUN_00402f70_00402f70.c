/* Module: extmondrv.dll
   Function: FUN_00402f70
   Address: 00402f70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402f70(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  FUN_00404600(param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x90);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x10) == 0) {
    LeaveCriticalSection(lpCriticalSection);
    return -0x7ffbfdf7;
  }
  puVar2 = (undefined4 *)(param_1 + 0x28);
  puVar3 = param_2;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_00404590(param_1 + 0x28,(int)param_2);
  if (iVar1 < 0) {
    FUN_00404600(param_2);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


