/* Module: sfppack3.dll
   Function: FUN_5cc46750
   Address: 5cc46750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc46750(int param_1,uint param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 2;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = 0;
  puVar2 = (uint *)(param_1 + 0x150);
  do {
    uVar4 = uVar1;
    if (param_2 == *puVar2) break;
    if (*puVar2 == 0) {
      uVar3 = uVar1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 2;
    uVar4 = uVar3;
  } while (uVar1 < 2);
  if (uVar4 < 2) {
    *(int *)(param_1 + 0x154 + uVar4 * 8) = param_3;
    *(uint *)(param_1 + 0x150 + uVar4 * 8) = -(uint)(param_3 != 0) & param_2;
  }
  else if (param_3 != 0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x8007000e;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


