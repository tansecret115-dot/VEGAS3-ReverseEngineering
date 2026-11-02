/* Module: sfppack1.dll
   Function: FUN_5cdb9f70
   Address: 5cdb9f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb9f70(int param_1,int *param_2)

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
  int *piVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)(param_1 + 0x20);
  piVar9 = piVar1;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar9 = *param_2;
    param_2 = param_2 + 1;
    piVar9 = piVar9 + 1;
  }
  bVar2 = true;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x58) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (*piVar1 < -0x32) {
    *piVar1 = -0x32;
    bVar3 = false;
  }
  else if (*piVar1 < 0x33) {
    bVar3 = true;
  }
  else {
    *piVar1 = 0x32;
    bVar3 = false;
  }
  if (*(int *)(param_1 + 0x24) < -1000) {
    *(undefined4 *)(param_1 + 0x24) = 0xfffffc18;
  }
  else {
    if (*(int *)(param_1 + 0x24) < 0x3e9) goto LAB_5cdba000;
    *(undefined4 *)(param_1 + 0x24) = 1000;
  }
  bVar2 = false;
LAB_5cdba000:
  iVar8 = FUN_5cdba090();
  iVar4 = FUN_5cdba0a0();
  iVar5 = FUN_5cdba0b0();
  iVar6 = FUN_5cdba0c0();
  iVar7 = FUN_5cdba0d0(param_1);
  LeaveCriticalSection(lpCriticalSection);
  if ((((((uint)!bVar2 + (uint)!bVar3) - (uint)(iVar8 != 0)) + (5 - (uint)(iVar4 != 0))) -
      (uint)(iVar5 != 0)) - (uint)(iVar6 != 0) != (uint)(iVar7 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


