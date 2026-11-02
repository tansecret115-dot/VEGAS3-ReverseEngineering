/* Module: qt4plug.dll
   Function: FUN_5f51e9f0
   Address: 5f51e9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f51e9f0(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  short sVar3;
  HANDLE pvVar4;
  HGLOBAL pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_5c;
  uint local_58;
  int local_40;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f5967d8;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)((int)param_1 + 0x14) == 0) {
    ExceptionList = &local_14;
    pvVar4 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)((int)param_1 + 0x14) = pvVar4;
    if (pvVar4 == (HANDLE)0x0) {
      ExceptionList = local_14;
      return -0x7ff8fff2;
    }
  }
  if (*(LPCVOID *)((int)param_1 + 0x1c4) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c4));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c4));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0x1c4) = 0;
  if (*(LPCVOID *)((int)param_1 + 0x1c8) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c8));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x1c8));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)param_1 + 0x1c8) = 0;
  piVar1 = (int *)((int)param_1 + 4);
  if ((*piVar1 == 0) &&
     (puVar2 = *(undefined4 **)(*(int *)((int)param_1 + 8) + 0x13c), puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(puVar2,&DAT_5f595cb0,piVar1);
  }
  piVar1 = (int *)*piVar1;
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)((int)param_1 + 0x1d0) = 0;
  }
  else {
    uVar6 = (**(code **)(*piVar1 + 0x18))(piVar1,0x2715,0);
    *(undefined4 *)((int)param_1 + 0x1d0) = uVar6;
  }
  *(undefined4 *)((int)param_1 + 0x1cc) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = param_2;
  *(undefined4 *)((int)param_1 + 0x18) = param_3;
  *(undefined4 *)((int)param_1 + 0x1c) = param_4;
  local_8 = 0;
  uVar6 = FUN_5f5773f0();
  *(undefined4 *)((int)param_1 + 0x38) = uVar6;
  uVar6 = FUN_5f576510();
  *(undefined4 *)((int)param_1 + 0x3c) = uVar6;
  sVar3 = FUN_5f577b10();
  if (sVar3 == 0) {
    for (iVar9 = 0; iVar9 < 0; iVar9 = iVar9 + 1) {
      sVar3 = FUN_5f577ad0();
      if ((sVar3 == 0) && (local_5c == 0x616c6973)) {
        *(uint *)((int)param_1 + 0x184) = ~local_58 & 1;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_5f575ff0();
  FUN_5f575fb0();
  FUN_5f576330();
  FUN_5f576350();
  iVar9 = FUN_5f5765b0();
  local_40 = FUN_5f576570();
  if (local_40 == 0) {
    local_40 = 1;
  }
  *(int *)((int)param_1 + 0x1dc) = local_40;
  FUN_5f5769b0();
  iVar7 = FUN_5f576750();
  iVar8 = iVar7 >> 0x1f;
  *(int *)((int)param_1 + 0x1b0) = iVar7;
  *(int *)((int)param_1 + 0x1b4) = iVar8;
  if ((iVar8 < 0) || ((-1 < iVar7 && (*(uint *)((int)param_1 + 0x1b0) < 2)))) {
    *(undefined4 *)((int)param_1 + 0x1b8) = 0;
    *(undefined4 *)((int)param_1 + 0x1bc) = 0;
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
  }
  else {
    *(double *)((int)param_1 + 0x1b8) =
         (double)CONCAT44(iVar8,*(uint *)((int)param_1 + 0x1b0)) /
         ((double)iVar9 / (double)local_40);
    uVar10 = ftol();
    *(undefined8 *)((int)param_1 + 0x20) = uVar10;
    uVar10 = ftol();
    *(undefined8 *)((int)param_1 + 0x28) = uVar10;
  }
  iVar9 = FUN_5f51e520(param_1,(int *)((int)param_1 + 0x40));
  if (iVar9 < 0) {
    ExceptionList = local_14;
    return iVar9;
  }
  *(undefined4 *)((int)param_1 + 0x1cc) = 1;
  ExceptionList = local_14;
  return iVar9;
}


