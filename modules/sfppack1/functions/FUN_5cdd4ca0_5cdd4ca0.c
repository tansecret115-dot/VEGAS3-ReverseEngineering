/* Module: sfppack1.dll
   Function: FUN_5cdd4ca0
   Address: 5cdd4ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdd4ca0(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + 0x1c);
  piVar14 = piVar1;
  for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
    *piVar14 = *param_2;
    param_2 = param_2 + 1;
    piVar14 = piVar14 + 1;
  }
  bVar2 = true;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x28) < 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    bVar3 = false;
  }
  else if (*(int *)(param_1 + 0x28) < 4) {
    bVar3 = true;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 3;
    bVar3 = false;
  }
  if (*piVar1 < -600) {
    *piVar1 = -600;
  }
  else {
    if (*piVar1 < 1) goto LAB_5cdd4d28;
    *piVar1 = 0;
  }
  bVar2 = false;
LAB_5cdd4d28:
  iVar13 = FUN_5cdd4df0(param_1);
  iVar4 = FUN_5cdd4e20(param_1);
  iVar5 = FUN_5cdd4e50(param_1);
  iVar6 = FUN_5cdd4e80();
  iVar7 = FUN_5cdd4e90(param_1);
  iVar8 = FUN_5cdd4ec0(param_1);
  iVar9 = FUN_5cdd4ef0(param_1);
  iVar10 = FUN_5cdd4f20();
  iVar11 = FUN_5cdd4f30(param_1);
  iVar12 = FUN_5cdd4f60();
  LeaveCriticalSection(lpCriticalSection);
  if (((((((((((uint)!bVar2 + (uint)!bVar3) - (uint)(iVar13 != 0)) - (uint)(iVar4 != 0)) -
           (uint)(iVar5 != 0)) - (uint)(iVar6 != 0)) - (uint)(iVar7 != 0)) - (uint)(iVar8 != 0)) -
       (uint)(iVar9 != 0)) - (uint)(iVar10 != 0)) + (10 - (uint)(iVar11 != 0)) !=
      (uint)(iVar12 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


