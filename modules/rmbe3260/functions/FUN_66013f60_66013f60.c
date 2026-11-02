/* Module: rmbe3260.dll
   Function: FUN_66013f60
   Address: 66013f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66013f60(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  undefined1 local_64 [8];
  uint local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c [3];
  int *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  if (param_1[0x22] != 0) {
    return 0;
  }
  iVar1 = FUN_6603beb0((int)local_64);
  if (iVar1 != 0) {
    local_8 = -0x7ffbfff9;
  }
  local_c = (int *)0x0;
  if (((-1 < local_8) && (local_8 = FUN_660187d0(&local_c), -1 < local_8)) &&
     (local_8 = (**(code **)(*param_1 + 0x2c))(param_1), -1 < local_8)) {
    piVar4 = param_1 + 5;
    local_20 = piVar4;
    FUN_6605cdc0(piVar4,param_1[0xc3],0xffffffff);
    uVar5 = 0;
    if (param_1[0xc3] != 0) {
      uVar2 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)(*piVar4 + uVar2 * 4) = 0;
        uVar2 = uVar5 & 0xffff;
      } while (uVar2 < (uint)param_1[0xc3]);
    }
    local_1c = 0;
    if (local_5c != 0) {
      do {
        piVar3 = (int *)FUN_660134d0();
        if (piVar3 == (int *)0x0) {
          local_8 = -0x7ff8fff2;
          break;
        }
        uVar5 = local_1c & 0xffff;
        local_14 = uVar5 * 4;
        iVar1 = uVar5 * 8;
        (**(code **)(piVar3[4] + 0x20))
                  (piVar3 + 4,*(undefined4 *)(local_58 + iVar1),
                   *(undefined4 *)(local_58 + 4 + iVar1),*(undefined4 *)(local_54 + local_14));
        (**(code **)(*piVar3 + 0x24))(piVar3,*(undefined4 *)(local_4c + local_14));
        iVar7 = uVar5 * 0x10 + local_44;
        (**(code **)(*piVar3 + 0x28))
                  (piVar3,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8),
                   *(undefined4 *)(iVar7 + 0xc));
        piVar4 = piVar3 + 4;
        (**(code **)(piVar3[4] + 0x28))(piVar4,*(undefined4 *)(local_50 + local_14));
        (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(local_48 + local_14));
        local_10 = (int *)0x0;
        iVar7 = (**(code **)(*local_c + 0x14))
                          (local_c,*(undefined4 *)(local_58 + iVar1),
                           *(undefined4 *)(local_58 + 4 + iVar1),&local_10);
        if ((-1 < iVar7) && ((**(code **)(*piVar4 + 0x24))(piVar4,local_10), local_10 != (int *)0x0)
           ) {
          (**(code **)(*local_10 + 8))(local_10);
          local_10 = (int *)0x0;
        }
        local_18 = 0;
        iVar7 = FUN_66014520(param_1,*(int *)(local_58 + iVar1),*(int *)(local_58 + 4 + iVar1),
                             &local_18);
        if ((iVar7 != 0) && (local_18 < (uint)param_1[0xc3])) {
          (**(code **)(*piVar3 + 4))(piVar3);
          *(int **)(*local_20 + local_18 * 4) = piVar3;
        }
        FUN_660143d0(local_2c,*(int *)(local_58 + iVar1),*(undefined4 *)(local_58 + 4 + iVar1));
        (**(code **)(*piVar3 + 4))(piVar3);
        FUN_6605c9a0(param_1 + 0xd,local_2c[0],(int)piVar3);
        FUN_6605b770((int *)local_2c);
        local_1c = local_1c + 1;
        piVar4 = local_20;
      } while ((local_1c & 0xffff) < local_5c);
    }
    uVar6 = 0;
    if ((short)param_1[6] != 0) {
      do {
        if (*(int *)(*piVar4 + (uint)uVar6 * 4) == 0) {
          FUN_6605d000(piVar4,(uint)uVar6,1);
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 6));
    }
  }
  if ((-1 < local_8) && (local_14 = 0, local_40 != 0)) {
    local_20 = (int *)0x0;
    do {
      uVar5 = local_14;
      piVar4 = (int *)FUN_66013860();
      if (piVar4 == (int *)0x0) {
        local_8 = -0x7ff8fff2;
        break;
      }
      piVar3 = piVar4 + 4;
      (**(code **)(piVar4[4] + 0x20))
                (piVar3,*(undefined4 *)(local_3c + uVar5 * 8),
                 *(undefined4 *)(local_3c + 4 + uVar5 * 8),*(undefined4 *)(local_38 + uVar5 * 4));
      FUN_66013ac0(piVar4,local_30 + (int)local_20);
      (**(code **)(*piVar3 + 0x28))(piVar3,*(undefined4 *)(local_34 + uVar5 * 4));
      uVar2 = local_14;
      local_10 = (int *)0x0;
      iVar1 = (**(code **)(*local_c + 0x14))
                        (local_c,*(undefined4 *)(local_3c + local_14 * 8),
                         *(undefined4 *)(local_3c + 4 + uVar5 * 8),&local_10);
      uVar5 = local_14;
      if (iVar1 < 0) {
        (**(code **)(*local_c + 0x18))
                  (local_c,*(undefined4 *)(local_3c + uVar2 * 8),
                   *(undefined4 *)(local_3c + 4 + uVar2 * 8));
        iVar1 = (**(code **)(*local_c + 0x14))
                          (local_c,*(undefined4 *)(local_3c + uVar2 * 8),
                           *(undefined4 *)(local_3c + 4 + uVar2 * 8),&local_10);
        uVar5 = uVar2;
      }
      if (iVar1 < 0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      else {
        (**(code **)(*piVar3 + 0x24))(piVar3,local_10);
        (**(code **)(*piVar4 + 4))(piVar4);
        FUN_6605cf30(param_1 + 9,param_1[10],piVar4);
        FUN_660143d0(local_2c,*(int *)(local_3c + uVar5 * 8),
                     *(undefined4 *)(local_3c + 4 + uVar5 * 8));
        (**(code **)(*piVar4 + 4))(piVar4);
        FUN_6605c9a0(param_1 + 0xd,local_2c[0],(int)piVar4);
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 8))(local_10);
          local_10 = (int *)0x0;
        }
        FUN_6605b770((int *)local_2c);
      }
      local_14 = uVar5 + 1;
      local_20 = local_20 + 8;
    } while (local_14 < local_40);
  }
  if (-1 < local_8) {
    local_8 = FUN_6602db80(param_1 + 0xc4);
  }
  iVar1 = local_8;
  if (-1 < local_8) {
    param_1[0x22] = 1;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return iVar1;
}


