/* Module: sfppack1.dll
   Function: FUN_5cdfd01c
   Address: 5cdfd01c
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdfd01c(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  iVar2 = param_1;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)(param_1 + -0xc);
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    param_1 = 0;
    if (0 < iVar3) {
      do {
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(param_1);
        if (((piVar4[6] != 0) && (iVar5 = (**(code **)(*piVar4 + 0x18))(), iVar5 < 0)) &&
           (-1 < local_8)) {
          local_8 = iVar5;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar3);
    }
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  LeaveCriticalSection(lpCriticalSection);
  return local_8;
}


