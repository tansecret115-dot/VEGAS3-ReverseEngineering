/* Module: rmto3260.dll
   Function: FUN_662cab50
   Address: 662cab50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cab50(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  piVar5 = param_1;
  iVar6 = 0;
  local_8 = 0;
  iVar1 = param_1[0x12];
  local_28 = 0;
  local_34 = *(int *)(iVar1 + 4);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(uint *)(iVar1 + 0x10);
  }
  if (param_1[0x13] == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(uint *)(param_1[0x13] + 0x10);
  }
  local_2c = 0;
  uVar3 = local_18 & 0xffff;
  if (uVar3 != 0) {
    do {
      if (iVar6 < 0) break;
      puVar4 = (undefined4 *)FUN_662ed930(&local_34);
      piVar8 = (int *)*puVar4;
      local_c = *(int *)(piVar5[0x13] + 4);
      local_24 = piVar8;
      iVar6 = (**(code **)(*piVar5 + 0x38))(piVar5,piVar5[0x10],piVar8);
      if (((local_2c != 0) && (1 < (ushort)local_18)) && (local_28 == local_8)) {
        local_8 = local_8 + 1;
      }
      param_1 = (int *)0x0;
      local_10 = (int *)(local_30 & 0xffff);
      if (local_10 != (int *)0x0) {
        do {
          if (iVar6 < 0) break;
          local_20 = (int *)FUN_662ed930(&local_c);
          local_20 = (int *)*local_20;
          iVar6 = (**(code **)(*piVar5 + 0x30))
                            (piVar5,CONCAT22((short)((uint)local_20[5] >> 0x10),
                                             *(undefined2 *)(local_20[5] + 4)),&local_38);
          local_1c = iVar6;
          if ((-1 < iVar6) &&
             (iVar6 = (**(code **)(*piVar8 + 0x3c))(piVar8,local_38,&local_3c), local_1c = iVar6,
             -1 < iVar6)) {
            local_14 = piVar5[0xc];
            if (local_14 == 0) {
              iVar6 = (**(code **)(*piVar8 + 0x68))(piVar8,&local_14);
              piVar5[0x24] = 1;
            }
            if (piVar5[0x24] != 0) {
              local_14 = local_14 + 1;
            }
            piVar7 = (int *)0x0;
            local_1c = iVar6;
            if (piVar5[0x29] != 0) {
              puVar4 = operator_new(0x30);
              if (puVar4 == (undefined4 *)0x0) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7 = FUN_662dde00(puVar4);
              }
              (**(code **)(*piVar7 + 4))(piVar7);
              uVar2 = piVar5[0x29];
              if (uVar2 < (uint)piVar5[0x2a]) {
                (**(code **)(*piVar7 + 0x18))(piVar7,piVar5 + 0x25,0x32,0x32,0);
              }
              else {
                (**(code **)(*piVar7 + 0x18))
                          (piVar7,piVar5 + 0x25,(uint)(piVar5[0x2a] * 0x32) / uVar2,
                           ((piVar5[0x2a] + 1U) * 0x32) / uVar2,0);
                iVar6 = local_1c;
              }
              if (-1 < iVar6) {
                iVar6 = (**(code **)*local_20)(local_20,piVar7);
              }
              piVar5[0x2a] = piVar5[0x2a] + 1;
            }
            if (-1 < iVar6) {
              iVar6 = FUN_662daf40(local_20,local_3c,local_24,piVar5[0xd],local_14,local_8);
            }
            piVar8 = local_24;
            if (piVar7 != (int *)0x0) {
              (**(code **)(*local_20 + 4))(local_20,piVar7);
              (**(code **)(*piVar7 + 8))(piVar7);
              piVar8 = local_24;
            }
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < local_10);
      }
      param_1 = (int *)0x0;
      local_c = *(int *)(piVar5[0x13] + 4);
      if (local_10 != (int *)0x0) {
        do {
          if (iVar6 < 0) break;
          puVar4 = (undefined4 *)FUN_662ed930(&local_c);
          this = (void *)*puVar4;
          iVar6 = FUN_662daa30(this,(int *)&local_40);
          if ((-1 < iVar6) && (local_8 < local_40)) {
            local_8 = local_40;
          }
          if (((-1 < iVar6) && (local_28 < local_40)) && (*(int *)((int)this + 0x18) == 1)) {
            local_28 = local_40;
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < local_10);
      }
      local_2c = local_2c + 1;
    } while (local_2c < uVar3);
  }
  uVar3 = 0;
  local_10 = (int *)(local_30 & 0xffff);
  local_c = *(int *)(piVar5[0x13] + 4);
  if (local_10 != (int *)0x0) {
    do {
      if (iVar6 < 0) {
        return iVar6;
      }
      piVar5 = (int *)FUN_662ed930(&local_c);
      iVar6 = FUN_662dac30(*piVar5);
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_10);
  }
  return iVar6;
}


