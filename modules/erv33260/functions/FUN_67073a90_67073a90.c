/* Module: erv33260.dll
   Function: FUN_67073a90
   Address: 67073a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67073a90(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int local_1e4 [21];
  int local_190 [21];
  undefined1 local_13c [20];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_118;
  undefined4 local_114;
  int local_e8 [5];
  undefined1 local_d4 [28];
  undefined4 local_b8;
  int local_b4 [4];
  undefined4 local_a4;
  int local_a0;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  void *local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  local_14 = this;
  FUN_67077c30(local_b4);
  FUN_67077b20(local_190);
  local_1e4[2] = 0;
  local_1e4[1] = 0;
  if ((((param_1 == (int *)0x0) || (param_2 < 0xa0)) || (*param_1 != 0x8c)) ||
     (((param_1[1] != 0xa8 || (param_1[2] != 0x34)) || (param_1[3] != 0x54)))) {
LAB_67073ee2:
    iVar3 = 1;
  }
  else {
    piVar5 = param_1 + 4;
    piVar2 = local_b4;
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar2 = piVar2 + 1;
    }
    uVar1 = param_1[0x27];
    if (uVar1 == 0) {
      if ((param_2 != 0x17c) || (*(int *)((int)this + 0x220) == 0)) goto LAB_67073ee2;
      piVar5 = param_1 + 0x28;
      piVar2 = local_e8;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
      piVar5 = param_1 + 0x35;
      piVar2 = local_190;
      for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar2 = piVar2 + 1;
      }
    }
    else {
      if ((1 < uVar1) || (param_2 != uVar1 * 0xa8 + 0xa0)) goto LAB_67073ee2;
      if (0 < (int)uVar1) {
        piVar5 = local_1e4;
        piVar2 = local_190;
        piVar4 = param_1 + 0x28;
        param_2 = uVar1;
        do {
          piVar6 = piVar4;
          piVar8 = piVar2;
          for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
          piVar6 = piVar2;
          piVar8 = piVar5;
          for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
          piVar5 = piVar5 + 0x15;
          param_2 = param_2 - 1;
          piVar2 = piVar2 + 0x2a;
          piVar4 = piVar4 + 0x2a;
          this = local_14;
        } while (param_2 != 0);
      }
    }
    if (local_8c != 0) {
      *(undefined4 *)((int)this + 0x24c) = 1;
    }
    if ((*(int *)((int)this + 0x24c) != 0) && (local_88 != 0)) {
      *(undefined4 *)((int)this + 0x250) = 1;
    }
    if ((local_b4[0] == 0) ||
       (iVar3 = (**(code **)(*(int *)((int)this + -0x68) + 0x50))(&local_28), iVar3 == 0)) {
      piVar5 = (int *)((int)this + -0x68);
      local_c = local_a0;
      local_10 = 0x10;
      local_8 = 0;
      iVar3 = (**(code **)(*(int *)((int)this + -0x68) + 0x40))(&local_10);
      iVar7 = 0;
      if (iVar3 == 0) {
        if (local_b4[2] != 0) {
          local_1c = local_b4[3];
          local_24 = 8;
          local_20 = 1;
          local_18 = (int *)local_a4;
          iVar3 = (**(code **)(*piVar5 + 0x40))(&local_24);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        iVar3 = (**(code **)(*(int *)((int)local_14 + 4) + 8))(local_90);
        if (iVar3 == 0) {
          if (uVar1 == 0) {
            iVar3 = (**(code **)(*piVar5 + 0x28))(local_e8);
            if (((iVar3 == 0) && (iVar3 = (**(code **)(*piVar5 + 0x2c))(local_d4), iVar3 == 0)) &&
               (iVar3 = (**(code **)(*piVar5 + 0x34))(local_b8), iVar3 == 0)) {
              local_18 = (int *)local_13c;
              local_24 = 0x21;
              local_20 = 3;
              local_1c = 0;
              iVar3 = (**(code **)(*piVar5 + 0x40))(&local_24);
              if (iVar3 == 0) {
                local_c = (uint)(local_128 != 0);
                local_10 = 4;
                local_8 = 0;
                iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                if (iVar3 == 0) {
                  local_c = local_120;
                  local_10 = 0x13;
                  local_8 = 0;
                  iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                  if ((iVar3 == 0) &&
                     ((local_b4[0] == 0 ||
                      (iVar3 = (**(code **)(*local_28 + 4))(0,local_124), iVar3 == 0)))) {
                    piVar5 = (int *)((int)local_14 + 8);
                    iVar3 = (*(code *)**(undefined4 **)((int)local_14 + 8))(0,local_118);
                    if (iVar3 == 0) {
                      if (local_118 == 0) {
                        return 0;
                      }
                      iVar3 = (**(code **)(*piVar5 + 8))(0,local_114);
                      if (iVar3 == 0) {
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            iVar3 = (*(code *)**(undefined4 **)((int)local_14 + -4))(uVar1,local_1e4);
            if (iVar3 == 0) {
              if (0 < (int)uVar1) {
                piVar2 = &local_128;
                do {
                  local_18 = piVar2 + -5;
                  local_24 = 0x21;
                  local_20 = 3;
                  local_1c = iVar7;
                  iVar3 = (**(code **)(*piVar5 + 0x40))(&local_24);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  local_c = (uint)(*piVar2 != 0);
                  local_10 = 4;
                  local_8 = iVar7;
                  iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  local_c = piVar2[2];
                  local_10 = 0x13;
                  local_8 = iVar7;
                  iVar3 = (**(code **)(*piVar5 + 0x40))(&local_10);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  if ((local_b4[0] != 0) &&
                     (iVar3 = (**(code **)(*local_28 + 4))(iVar7,piVar2[1]), iVar3 != 0)) {
                    return iVar3;
                  }
                  piVar4 = (int *)((int)local_14 + 8);
                  iVar3 = (**(code **)*piVar4)(iVar7,piVar2[4]);
                  if (iVar3 != 0) {
                    return iVar3;
                  }
                  if ((piVar2[4] != 0) &&
                     (iVar3 = (**(code **)(*piVar4 + 8))(iVar7,piVar2[5]), iVar3 != 0)) {
                    return iVar3;
                  }
                  iVar7 = iVar7 + 1;
                  piVar2 = piVar2 + 0x2a;
                } while (iVar7 < (int)uVar1);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return iVar3;
}


