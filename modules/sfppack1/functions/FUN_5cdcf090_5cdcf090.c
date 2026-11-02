/* Module: sfppack1.dll
   Function: FUN_5cdcf090
   Address: 5cdcf090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdcf090(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar10 = (undefined4 *)(param_1 + 0x1c);
  for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *param_2;
    param_2 = param_2 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  EnterCriticalSection(lpCriticalSection);
  iVar9 = FUN_5cdcf180(param_1);
  iVar1 = FUN_5cdcf1b0(param_1);
  iVar2 = FUN_5cdcf1e0(param_1);
  iVar3 = FUN_5cdcf210(param_1);
  iVar4 = FUN_5cdcf240(param_1);
  iVar5 = FUN_5cdcf270(param_1);
  iVar6 = FUN_5cdcf2a0(param_1);
  iVar7 = FUN_5cdcf2d0(param_1);
  iVar8 = FUN_5cdcf300(param_1);
  LeaveCriticalSection(lpCriticalSection);
  if (((((((-(uint)(iVar1 != 0) - (uint)(iVar9 != 0)) - (uint)(iVar2 != 0)) - (uint)(iVar3 != 0)) -
        (uint)(iVar4 != 0)) + (9 - (uint)(iVar5 != 0))) - (uint)(iVar6 != 0)) - (uint)(iVar7 != 0)
      != (uint)(iVar8 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


