/* Module: sfxpfx1.dll
   Function: FUN_5c947f90
   Address: 5c947f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c947f90(int param_1,undefined4 *param_2)

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
  int iVar10;
  undefined4 *puVar11;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  puVar11 = (undefined4 *)(param_1 + 0x1c);
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *param_2;
    param_2 = param_2 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  EnterCriticalSection(lpCriticalSection);
  iVar10 = FUN_5c948080(param_1);
  iVar1 = FUN_5c9480b0(param_1);
  iVar2 = FUN_5c9480e0(param_1);
  iVar3 = FUN_5c948110(param_1);
  iVar4 = FUN_5c948140(param_1);
  iVar5 = FUN_5c948170(param_1);
  iVar6 = FUN_5c9481a0(param_1);
  iVar7 = FUN_5c9481d0(param_1);
  iVar8 = FUN_5c948200(param_1);
  iVar9 = FUN_5c948230(param_1);
  LeaveCriticalSection(lpCriticalSection);
  if (((((((((10 - (uint)(iVar10 != 0)) - (uint)(iVar1 != 0)) - (uint)(iVar2 != 0)) -
          (uint)(iVar3 != 0)) - (uint)(iVar4 != 0)) - (uint)(iVar5 != 0)) - (uint)(iVar6 != 0)) -
      (uint)(iVar7 != 0)) - (uint)(iVar8 != 0) != (uint)(iVar9 != 0)) {
    LeaveCriticalSection(lpCriticalSection);
    return 0x80004005;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


