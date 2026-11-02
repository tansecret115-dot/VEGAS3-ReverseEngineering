/* Module: qt4plug.dll
   Function: FUN_5f51cc80
   Address: 5f51cc80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f51cc80(int param_1,uint param_2,int param_3,undefined4 *param_4,uint param_5,uint *param_6
                )

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  int local_7c;
  int local_78;
  uint local_58;
  uint local_50;
  int local_4c;
  uint local_3c;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f596768;
  puStack_10 = &DAT_5f594586;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  if (*(int *)(param_1 + 0x40) == 0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 8));
    ExceptionList = local_14;
    return -0x7ffb1ff9;
  }
  local_34 = 0;
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if ((*(int *)(param_1 + 0x3c) <= param_3) &&
     ((*(int *)(param_1 + 0x3c) < param_3 || (*(uint *)(param_1 + 0x38) <= param_2)))) {
    ReleaseMutex(*(HANDLE *)(param_1 + 8));
    ExceptionList = local_14;
    return 1;
  }
  uVar2 = *(int *)(param_1 + 0x38) - param_2;
  if (uVar2 <= param_5) {
    param_5 = uVar2;
  }
  bVar9 = 0xfffffffe < param_2;
  param_2 = param_2 + 1;
  param_3 = param_3 + (uint)bVar9;
  FUN_5f576770();
  local_30 = param_4;
  local_28 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    if (*(int *)(param_1 + 0x6c) == 0) {
      iVar4 = FUN_5f57aed0();
      *(int *)(param_1 + 0x6c) = iVar4;
      if (iVar4 == 0) {
        ExceptionList = local_14;
        return -0x7ff8fff2;
      }
    }
    do {
      local_8 = 1;
      sVar1 = FUN_5f5767f0();
      if (sVar1 != 0) goto LAB_5f51d1a1;
      uVar7 = (uint)*(ushort *)(param_1 + 100) * local_2c;
      FUN_5f57b0b0();
      puVar5 = (undefined4 *)**(undefined4 **)(param_1 + 0x6c);
      puVar8 = local_30;
      for (uVar2 = uVar7 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar2 = uVar7 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_5f57b0d0();
      local_30 = (undefined4 *)((int)local_30 + uVar7);
      local_34 = local_34 + local_2c;
      param_5 = param_5 - local_2c;
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + local_7c * local_2c;
    } while (param_5 != 0);
  }
  else {
    if (*(int *)(param_1 + 0x8c) == 0) {
      uVar3 = FUN_5f57aed0();
      *(undefined4 *)(param_1 + 0x8c) = uVar3;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x78);
      if ((*(int *)(param_1 + 0x7c) <= param_3) &&
         ((*(int *)(param_1 + 0x7c) < param_3 || (uVar2 <= param_2)))) {
        uVar7 = *(uint *)(param_1 + 0x80);
        uVar6 = uVar7 + uVar2;
        iVar4 = ((int)uVar7 >> 0x1f) + *(int *)(param_1 + 0x7c) + (uint)CARRY4(uVar7,uVar2);
        if ((param_3 <= iVar4) && ((param_3 < iVar4 || (param_2 < uVar6)))) {
          local_3c = uVar6 - param_2;
          uVar2 = (iVar4 - param_3) - (uint)(uVar6 < param_2);
          if ((uVar2 < 0x80000000) && ((0 < (int)uVar2 || (param_5 < local_3c)))) {
            local_3c = param_5;
          }
          uVar7 = *(ushort *)(param_1 + 100) * local_3c;
          FUN_5f57b0b0();
          puVar5 = (undefined4 *)
                   ((param_2 - *(int *)(param_1 + 0x78)) * (uint)*(ushort *)(param_1 + 100) +
                    *(int *)(param_1 + 0x70) + **(int **)(param_1 + 0x8c));
          puVar8 = param_4;
          for (uVar2 = uVar7 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar2 = uVar7 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          FUN_5f57b0d0();
          local_34 = local_3c;
          param_5 = param_5 - local_3c;
          bVar9 = CARRY4(param_2,local_3c);
          param_2 = param_2 + local_3c;
          param_3 = param_3 + (uint)bVar9;
          local_30 = (undefined4 *)(uVar7 + (int)param_4);
          if (param_5 == 0) {
            if (param_6 != (uint *)0x0) {
              *param_6 = local_3c;
            }
            ReleaseMutex(*(HANDLE *)(param_1 + 8));
            ExceptionList = local_14;
            return 0;
          }
        }
      }
    }
    local_8 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x5c);
      ftol();
      iVar4 = ftol();
      if (iVar4 == 0) {
        iVar4 = param_3 + (uint)CARRY4(uVar2,param_2);
        if ((iVar4 < *(int *)(param_1 + 0x3c)) ||
           ((iVar4 <= *(int *)(param_1 + 0x3c) && (uVar2 + param_2 <= *(uint *)(param_1 + 0x38)))))
        goto LAB_5f51cf64;
        ftol();
        bVar9 = true;
        local_50 = uVar2 - param_5;
        local_4c = 0;
      }
      else {
LAB_5f51cf64:
        bVar9 = false;
      }
      sVar1 = FUN_5f58d330();
      if (sVar1 != 0) goto LAB_5f51d1a1;
      local_28 = 0;
      FUN_5f57e730();
      if (local_58 == 0) {
        sVar1 = FUN_5f58d330();
        if (sVar1 != 0) goto LAB_5f51d1a7;
        FUN_5f57e730();
      }
      *(int *)(param_1 + 0x70) = local_78;
      *(uint *)(param_1 + 0x78) = param_2;
      *(int *)(param_1 + 0x7c) = param_3;
      *(uint *)(param_1 + 0x80) = local_58;
      if (bVar9) {
        *(uint *)(param_1 + 0x78) = param_2 - local_50;
        *(uint *)(param_1 + 0x7c) = (param_3 - local_4c) - (uint)(param_2 < local_50);
        if ((0 < local_4c) || ((-1 < local_4c && (local_58 < local_50)))) break;
      }
      uVar2 = param_5;
      if (local_58 <= param_5) {
        uVar2 = local_58;
      }
      uVar7 = *(ushort *)(param_1 + 100) * uVar2;
      if ((int)uVar7 < 1) goto LAB_5f51d1a7;
      FUN_5f57b0b0();
      puVar5 = (undefined4 *)(**(int **)(param_1 + 0x8c) + local_78);
      if (bVar9) {
        puVar5 = (undefined4 *)((int)puVar5 + *(ushort *)(param_1 + 100) * local_50);
      }
      puVar8 = local_30;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_5f57b0d0();
      param_5 = param_5 - uVar2;
      bVar9 = CARRY4(param_2,uVar2);
      param_2 = param_2 + uVar2;
      param_3 = param_3 + (uint)bVar9;
      local_30 = (undefined4 *)((int)local_30 + uVar7);
      local_34 = local_34 + uVar2;
      local_58 = uVar2;
    } while (param_5 != 0);
  }
LAB_5f51d240:
  local_8 = 0xffffffff;
  if (param_6 != (uint *)0x0) {
    *param_6 = local_34;
  }
  if ((local_28 == 0) && (local_34 == 0)) {
    local_28 = 1;
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 8));
  ExceptionList = local_14;
  return local_28;
LAB_5f51d1a1:
  local_28 = 0;
  if (sVar1 != -0x7df) {
LAB_5f51d1a7:
    local_28 = -0x7ffb1fc8;
  }
  goto LAB_5f51d240;
}


