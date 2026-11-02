/* Module: rmto3260.dll
   Function: FUN_662c5d80
   Address: 662c5d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c5d80(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  ushort uVar8;
  bool bVar9;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  bVar9 = false;
  local_8 = 0;
  if (*(int *)(param_1 + 0x36) == 0) {
    local_8 = -0x7ffbfc3d;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    local_8 = -0x7ffbfc3c;
  }
  if (-1 < local_8) {
    piVar3 = FUN_662f0880(0);
    if (piVar3 == (int *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      local_8 = (**(code **)(*piVar3 + 0x14))(*(undefined4 *)(param_1 + 0x10),0x8002,0x20,0);
      if (local_8 < 0) {
        local_8 = (**(code **)(*piVar3 + 0x14))(*(undefined4 *)(param_1 + 0x10),0x8102,0x20,0);
        if (-1 < local_8) {
          bVar9 = true;
        }
      }
      if (local_8 < 0) {
        local_8 = -0x7ffbfc2a;
      }
      else {
        (**(code **)(*piVar3 + 0x18))();
      }
      if (bVar9) {
        (**(code **)(*piVar3 + 0x44))(*(undefined4 *)(param_1 + 0x10));
      }
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
    }
  }
  uVar8 = 0;
  if ((*(uint *)(param_1 + 0x18) != 0) && (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x14)))
  {
    local_8 = -0x7ffbfc3e;
  }
  iVar6 = *(int *)(param_1 + 0x36);
  if (iVar6 == 0) {
    param_1._0_2_ = 0;
  }
  else {
    param_1._0_2_ = (ushort)*(undefined4 *)(iVar6 + 0x10);
  }
  local_c = *(int *)(iVar6 + 4);
  if ((ushort)param_1 != 0) {
    do {
      if (local_8 < 0) goto LAB_662c5f06;
      puVar4 = (undefined4 *)FUN_662ed930(&local_c);
      pbVar5 = (byte *)*puVar4;
      if (pbVar5 != (byte *)0x0) {
        pbVar7 = *(byte **)(iVar2 + 0x10);
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_662c5eb1:
            iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_662c5eb6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_662c5eb1;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_662c5eb6:
        if (iVar6 == 0) {
          local_8 = -0x7ffbfc3b;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ushort)param_1);
  }
  if (-1 < local_8) {
    puVar4 = FUN_662eda80(*(void **)(iVar2 + 0x36),0);
    iVar6 = *(int *)(iVar2 + -0x10);
    puVar4 = (undefined4 *)FUN_662ed950((int)puVar4);
    local_8 = (**(code **)(iVar6 + 0x28))(iVar2 + -0x10,*puVar4);
    if (-1 < local_8) {
      local_8 = (**(code **)(**(int **)(iVar2 + 0x20) + 0xc))(*(int **)(iVar2 + 0x20),&local_10);
    }
  }
LAB_662c5f06:
  piVar3 = *(int **)(iVar2 + 0x20);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  if (-1 < local_8) {
    local_8 = (**(code **)(*(int *)(iVar2 + -0x10) + 0x2c))(iVar2 + -0x10,local_10);
  }
  return local_8;
}


