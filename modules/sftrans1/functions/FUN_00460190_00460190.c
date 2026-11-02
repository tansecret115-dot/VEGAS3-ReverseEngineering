/* Module: sftrans1.dll
   Function: FUN_00460190
   Address: 00460190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00460190(void)

{
  int *piVar1;
  bool bVar2;
  double dVar3;
  LPCVOID pMem;
  int iVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int *piVar7;
  uint uVar8;
  int extraout_ECX;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *in_stack_00000018;
  LPCVOID in_stack_00000028;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_00000048;
  undefined4 in_stack_0000054c;
  undefined4 in_stack_00000550;
  undefined4 in_stack_00000554;
  undefined4 in_stack_00000558;
  int local_8;
  
  FUN_00551640();
  FUN_0052f210();
  FUN_0052f210();
  FUN_0052f210();
  local_8 = FUN_0052ea70();
  if (local_8 < 0) goto LAB_00460b6a;
  iVar4 = FUN_0052f290();
  if (((iVar4 == 0) || (iVar4 = FUN_0052f290(), iVar4 == 0)) || (iVar4 = FUN_0052f290(), iVar4 == 0)
     ) {
LAB_00460b96:
    FUN_0052f260();
    FUN_0052f260();
    FUN_0052f260();
    return -0x7fffbffb;
  }
  if ((*(int *)(extraout_ECX + 0x1d8) != 0) || (*(int *)(extraout_ECX + 0x260) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
    if (*(int *)(extraout_ECX + 0x260) == 0) {
      puVar9 = (undefined4 *)(extraout_ECX + 0x158);
      puVar10 = (undefined4 *)(extraout_ECX + 0x198);
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    else {
      dVar3 = *(double *)(extraout_ECX + 0x268);
      *(undefined4 *)(extraout_ECX + 0x198) = *(undefined4 *)(extraout_ECX + 0x1e0);
      *(float *)(extraout_ECX + 0x19c) =
           (*(float *)(extraout_ECX + 0x224) - *(float *)(extraout_ECX + 0x1e4)) * (float)dVar3 +
           *(float *)(extraout_ECX + 0x1e4);
      *(undefined4 *)(extraout_ECX + 0x1d0) = *(undefined4 *)(extraout_ECX + 0x218);
      iVar4 = FUN_00460c20();
      if (-1 < iVar4) {
        *(double *)(extraout_ECX + 0x1b8) =
             (*(double *)(extraout_ECX + 0x240) - *(double *)(extraout_ECX + 0x200)) * dVar3 +
             *(double *)(extraout_ECX + 0x200);
        *(double *)(extraout_ECX + 0x1c0) =
             (*(double *)(extraout_ECX + 0x248) - *(double *)(extraout_ECX + 0x208)) * dVar3 +
             *(double *)(extraout_ECX + 0x208);
        FUN_00460c80();
      }
    }
    *(undefined4 *)(extraout_ECX + 0x1d8) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
  }
  iVar4 = *(int *)(extraout_ECX + 0x198);
  if ((iVar4 < 0) || (3 < iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((iVar4 == 0) || (!bVar2)) {
    FUN_004cded0();
    local_8 = FUN_004ceb60();
  }
  else {
    puVar9 = &stack0x00000018;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    pvVar5 = GlobalAlloc(0x40,0x578);
    pvVar6 = GlobalLock(pvVar5);
    if ((pvVar6 != (LPVOID)0x0) &&
       (in_stack_00000028 = (LPCVOID)FUN_0052f210(), in_stack_00000028 != (LPCVOID)0x0)) {
      iVar4 = (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x18))();
      if ((iVar4 < 0) || (iVar4 = FUN_0052eb00(), iVar4 < 0)) {
        FUN_0052f260();
        FUN_0052f260();
        FUN_0052f260();
        return iVar4;
      }
      iVar4 = FUN_0052f2e0();
      if (iVar4 == 0) goto LAB_00460b96;
      FUN_0052f280();
      local_8 = -0x7ff8fff2;
      *(undefined4 *)((int)in_stack_00000028 + 0x4f0) = in_stack_0000054c;
      *(undefined4 *)((int)in_stack_00000028 + 0x4f4) = in_stack_00000550;
      *(undefined4 *)((int)in_stack_00000028 + 0x4f8) = in_stack_00000554;
      *(undefined4 *)((int)in_stack_00000028 + 0x4fc) = in_stack_00000558;
      piVar7 = (int *)(*(code *)(&DAT_0055e700)[*(int *)(extraout_ECX + 0x198)])();
      if (piVar7 != (int *)0x0) {
        piVar1 = *(int **)(extraout_ECX + 0x3c);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        if ((int *)piVar7[2] != (int *)0x0) {
          (**(code **)(*(int *)piVar7[2] + 8))();
        }
        piVar7[2] = (int)piVar1;
        piVar7[3] = in_stack_0000003c;
        piVar7[4] = in_stack_00000040;
        piVar7[5] = in_stack_00000044;
        piVar7[6] = in_stack_00000048;
        piVar7[7] = in_stack_00000038;
        uVar8 = (**(code **)(*piVar7 + 0x10))();
        iVar4 = *(int *)(extraout_ECX + 0x1d0);
        if ((uVar8 & 1) == 0) {
          local_8 = (**(code **)(*piVar7 + 8))();
          if (-1 < local_8) {
            local_8 = (**(code **)(*piVar7 + 8))();
joined_r0x004609f7:
            if (-1 < local_8) {
              local_8 = FUN_004ceb60();
            }
          }
        }
        else if (iVar4 == 0) {
          local_8 = (**(code **)(*piVar7 + 8))();
          if (-1 < local_8) {
            local_8 = FUN_004cded0();
            goto joined_r0x004609f7;
          }
        }
        else if (iVar4 == 1) {
          local_8 = FUN_004cded0();
          if (-1 < local_8) {
            local_8 = (**(code **)(*piVar7 + 8))();
            goto joined_r0x004609f7;
          }
        }
        else if (((iVar4 == 2) && (local_8 = FUN_004cded0(), -1 < local_8)) &&
                (local_8 = FUN_004ceb60(), -1 < local_8)) {
          local_8 = (**(code **)(*piVar7 + 8))();
        }
        (**(code **)*piVar7)();
      }
      if (((in_stack_00000018 != (int *)0x0) &&
          ((**(code **)(*in_stack_00000018 + 8))(), in_stack_00000028 != (LPCVOID)0x0)) &&
         (FUN_0052ebe0(), pMem = in_stack_00000028, in_stack_00000028 != (LPCVOID)0x0)) {
        FUN_0052f260();
        pvVar5 = GlobalHandle(pMem);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem);
        GlobalFree(pvVar5);
      }
    }
  }
  if (-1 < local_8) {
    FUN_0052f200();
  }
LAB_00460b6a:
  FUN_0052f260();
  FUN_0052f260();
  FUN_0052f260();
  return local_8;
}


