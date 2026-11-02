/* Module: vegas30.exe
   Function: FUN_005c0e90
   Address: 005c0e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c0e90(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int *param_6,
                int *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  uint *puVar7;
  int *piStack_d0;
  uint *puStack_cc;
  int iStack_c8;
  int *piStack_c4;
  int *piStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int **ppiStack_b0;
  int *local_a0;
  undefined4 local_9c;
  uint local_98 [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_1;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  ppiStack_b0 = &local_a0;
  uStack_b4 = 1;
  uStack_b8 = 0;
  uStack_bc = 0;
  piStack_c0 = param_1;
  local_14 = 0;
  piStack_c4 = (int *)0x5c0ecb;
  iVar3 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar3) {
    piStack_c4 = &local_18;
    puStack_cc = (uint *)&local_14;
    iStack_c8 = 4;
    piStack_d0 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    if (-1 < iVar3) {
      if (local_18 != 4) {
        local_14 = 0;
      }
      piStack_c4 = (int *)0x0;
      iStack_c8 = 0;
      puStack_cc = (uint *)local_9c;
      piStack_d0 = local_a0;
      iVar3 = (**(code **)(*piVar2 + 0x14))(piVar2);
      if (iVar3 < 0) {
        return -0x7ffb1f7d;
      }
    }
  }
  if (local_14 == 0x50) {
    piVar1 = *(int **)(param_4 + 0x24);
    if ((((piVar1 != (int *)0x0) && (0 < *piVar1)) && (-1 < param_5)) && (param_5 < *piVar1)) {
      local_10 = 1;
      piStack_c4 = *(int **)(piVar1[2] + param_5 * 4);
      if (piStack_c4 == (int *)0x0) {
        return -0x7fffbffd;
      }
      iStack_c8 = param_4;
      puStack_cc = (uint *)param_3;
      piStack_d0 = (int *)0x5c129b;
      local_8 = (int)piStack_c4;
      FUN_005c8870();
    }
    piStack_c4 = (int *)&param_1;
    puVar7 = local_68;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puStack_cc = local_68;
    iStack_c8 = 0x50;
    piStack_d0 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    if (-1 < iVar3) {
      if (param_1 != (int *)0x50) {
        return -0x7ffb1ff8;
      }
      if ((-1 < local_30) && (local_30 != 2)) {
        ppiVar5 = (int **)(undefined1 *)0x0;
        if (local_44 != 0) {
          FUN_0060ac30();
          iVar3 = FUN_005be000(piVar2,&piStack_d0,local_44);
          ppiVar5 = &piStack_d0;
          if (iVar3 < 0) {
            return iVar3;
          }
        }
        if (local_10 == 0) {
          iVar3 = FUN_005c9cc0(&local_8,param_3,param_4,local_68[2],local_58,local_54,ppiVar5,0,0);
        }
        else {
          iVar3 = FUN_005c9b60(local_8,param_3,param_4,local_68[2],local_58,local_54,ppiVar5);
        }
        iVar4 = param_2;
        if ((-1 < iVar3) && (iVar3 = FUN_005bd660(piVar2,param_2,local_8), -1 < iVar3)) {
          *(uint *)(local_8 + 0x10) = local_68[1] & 0x3e01ffff;
          *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xfffffbff;
          *(undefined4 *)(local_8 + 0x18) = local_58;
          *(undefined4 *)(local_8 + 0x1c) = local_54;
          *(undefined4 *)(local_8 + 0x20) = local_50;
          *(undefined4 *)(local_8 + 0x24) = local_4c;
          *(ulonglong *)(local_8 + 0x28) = CONCAT44(uStack_3c,local_40);
          *(undefined4 *)(local_8 + 0x40) = local_38;
          *(undefined4 *)(local_8 + 0x44) = uStack_34;
          *(undefined4 *)(local_8 + 0x4c) = local_2c;
          *(int *)(local_8 + 0x30) = local_28;
          *(undefined4 *)(local_8 + 0x34) = local_24;
          *(int *)(local_8 + 0x38) = local_20;
          if (local_1c == 0) {
            local_1c = 1;
          }
          *(int *)(local_8 + 0x3c) = local_1c;
          param_4 = local_48;
          if (param_7 != (int *)0x0) {
            *param_7 = local_48;
          }
          if (param_6 != (int *)0x0) {
            *param_6 = local_8;
          }
          if ((iVar4 != 0) &&
             (iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_c,4,&param_1), -1 < iVar3)) {
            if (param_1 != (int *)0x4) {
              return -0x7ffb1ff8;
            }
            iVar3 = 0;
            if (0 < local_c) {
              do {
                iVar6 = FUN_005c1e50(piVar2,iVar4,param_3,local_8,0,param_4 == iVar3);
                if (iVar6 < 0) {
                  return iVar6;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < local_c);
            }
            iVar3 = FUN_005c22f0(piVar2,iVar4,param_3,local_8 + 0x98,local_8);
            if (-1 < iVar3) {
              switch(*(undefined4 *)(local_8 + 4)) {
              case 2:
                goto switchD_005c1232_caseD_2;
              case 3:
                goto switchD_005c1232_caseD_3;
              case 4:
                goto switchD_005c1232_caseD_4;
              case 5:
                goto switchD_005c1232_caseD_5;
              default:
                break;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (local_14 != 0x80) {
      return -0x7ffb1f7d;
    }
    piVar1 = *(int **)(param_4 + 0x24);
    if ((((piVar1 != (int *)0x0) && (0 < *piVar1)) && (-1 < param_5)) && (param_5 < *piVar1)) {
      local_10 = 1;
      piStack_c4 = *(int **)(piVar1[2] + param_5 * 4);
      if (piStack_c4 == (int *)0x0) {
        return -0x7fffbffd;
      }
      iStack_c8 = param_4;
      puStack_cc = (uint *)param_3;
      piStack_d0 = (int *)0x5c0f75;
      local_8 = (int)piStack_c4;
      FUN_005c8870();
    }
    iVar3 = *piVar2;
    puVar7 = local_98;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    piStack_c4 = (int *)&param_1;
    puStack_cc = local_98;
    iStack_c8 = 0x80;
    piStack_d0 = piVar2;
    iVar3 = (**(code **)(iVar3 + 0xc))();
    if (-1 < iVar3) {
      if (param_1 != (int *)0x80) {
        return -0x7ffb1ff8;
      }
      if ((-1 < local_28) && (local_28 != 2)) {
        ppiVar5 = (int **)(undefined1 *)0x0;
        if (local_74 != 0) {
          FUN_0060ac30();
          iVar3 = FUN_005be000(piVar2,&piStack_d0,local_74);
          ppiVar5 = &piStack_d0;
          if (iVar3 < 0) {
            return iVar3;
          }
        }
        if (local_10 == 0) {
          iVar3 = FUN_005c9cc0(&local_8,param_3,param_4,local_98[2],local_88,local_84,ppiVar5,0,0);
        }
        else {
          iVar3 = FUN_005c9b60(local_8,param_3,param_4,local_98[2],local_88,local_84,ppiVar5);
        }
        iVar4 = param_2;
        iVar6 = 0;
        if (-1 < iVar3) {
          *(uint *)(local_8 + 0x10) = local_98[1] & 0xffff;
          *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xfffffbff;
          *(undefined4 *)(local_8 + 0x18) = local_88;
          *(undefined4 *)(local_8 + 0x1c) = local_84;
          *(undefined4 *)(local_8 + 0x20) = local_80;
          *(undefined4 *)(local_8 + 0x24) = local_7c;
          *(ulonglong *)(local_8 + 0x28) = CONCAT44(uStack_34,local_38);
          *(int *)(local_8 + 0x40) = local_30;
          *(undefined4 *)(local_8 + 0x44) = local_2c;
          *(undefined4 *)(local_8 + 0x4c) = local_24;
          *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xefffffff | 0x20000000;
          *(undefined4 *)(local_8 + 0x58) = local_70;
          *(undefined4 *)(local_8 + 0x5c) = local_6c;
          *(uint *)(local_8 + 0x60) = local_68[0];
          *(uint *)(local_8 + 100) = local_68[1];
          *(uint *)(local_8 + 0x68) = local_68[2];
          *(uint *)(local_8 + 0x6c) = local_68[3];
          *(undefined4 *)(local_8 + 0x70) = local_58;
          *(undefined4 *)(local_8 + 0x74) = local_54;
          *(undefined4 *)(local_8 + 0x78) = local_50;
          *(undefined4 *)(local_8 + 0x7c) = local_4c;
          *(int *)(local_8 + 0x80) = local_48;
          *(int *)(local_8 + 0x84) = local_44;
          *(undefined4 *)(local_8 + 0x88) = local_40;
          *(undefined4 *)(local_8 + 0x8c) = uStack_3c;
          if (local_20 == 0) {
            *(undefined4 *)(local_8 + 0x38) = 0;
            *(undefined4 *)(local_8 + 0x30) = 0;
            *(undefined4 *)(local_8 + 0x34) = 0;
          }
          param_4 = local_78;
          if (param_7 != (int *)0x0) {
            *param_7 = local_78;
          }
          if (param_6 != (int *)0x0) {
            *param_6 = local_8;
          }
          if ((param_2 != 0) &&
             (iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_c,4,&param_1), -1 < iVar3)) {
            if (param_1 != (int *)0x4) {
              return -0x7ffb1ff8;
            }
            if (0 < local_c) {
              do {
                iVar3 = FUN_005c1e50(piVar2,iVar4,param_3,local_8,0,param_4 == iVar6);
                if (iVar3 < 0) {
                  return iVar3;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < local_c);
            }
            iVar3 = FUN_005c22f0(piVar2,iVar4,param_3,local_8 + 0x98,local_8);
            if (-1 < iVar3) {
              switch(*(undefined4 *)(local_8 + 4)) {
              case 2:
switchD_005c1232_caseD_2:
                iVar3 = FUN_005c1ea0(piVar2,iVar4,local_8 + 0xf0);
                return iVar3;
              case 3:
switchD_005c1232_caseD_3:
                iVar3 = FUN_005c1f50(piVar2,iVar4,local_8 + 0xf0,local_8);
                return iVar3;
              case 4:
switchD_005c1232_caseD_4:
                iVar3 = FUN_005c22d0(piVar2,iVar4,local_8 + 0xf0);
                return iVar3;
              case 5:
switchD_005c1232_caseD_5:
                iVar3 = FUN_005c22e0(piVar2,iVar4,local_8 + 0xf0);
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


