/* Module: mcmpgdec.dll
   Function: FUN_1000ddfc
   Address: 1000ddfc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1000ddfc(int param_1,int *param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint *param_8,uint *param_9,int *param_10,int param_11)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  uint local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  piVar1 = (int *)(param_1 + 0x90);
  piVar2 = (int *)(param_1 + 0x80);
  if (DAT_10031b6c == 0) {
    FUN_1000671c();
    DAT_10031b6c = 1;
  }
  iVar3 = *(int *)(param_1 + 0x590);
  local_24 = param_11 / 3;
  uVar8 = param_11 % 3;
  uVar7 = param_6 & 8;
  iVar6 = param_5 >> 1;
  if ((uVar7 != 0) || (*(int *)(param_1 + 0x5c0) == 2)) {
    piVar9 = piVar1;
    iVar5 = param_5;
    if (*(int *)(param_1 + 0x5f0) == 3) {
      if ((param_7 == 2) || (uVar7 == 0)) {
        if ((int)uVar8 < 2) {
          local_10 = param_8[1];
          local_14 = *param_8;
          iVar14 = 0x10;
          iVar13 = *(int *)(param_1 + 0xfc);
          iVar12 = 0;
          iVar10 = 0;
          iVar11 = param_3;
          goto LAB_1000e3b5;
        }
      }
      else {
        iVar10 = param_3;
        iVar5 = iVar6;
        if (param_7 == 1) {
          if ((int)uVar8 < 2) {
            iVar13 = 0;
            if (*param_9 != 0) {
              iVar13 = *(int *)(param_1 + 0xfc);
            }
            FUN_100051dc(param_2,0,param_3 * 2,piVar1,iVar13,*(int *)(param_1 + 0xfc) * 2,8,param_4,
                         iVar6,*param_8,(int)param_8[1] >> 1,uVar8,iVar3);
          }
          if ((int)local_24 < 2) {
            local_10 = (int)param_8[5] >> 1;
            local_14 = param_8[4];
            iVar14 = 8;
            iVar13 = *(int *)(param_1 + 0xfc) * 2;
            iVar12 = 0;
            if (param_9[2] != 0) {
              iVar12 = *(int *)(param_1 + 0xfc);
            }
            iVar11 = param_3 * 2;
            uVar8 = local_24;
            goto LAB_1000e3b5;
          }
        }
        else if (param_7 == 3) {
          FUN_1000b4c8(param_1,(int *)&local_1c,param_10,*param_8,(int)param_8[1] >> 1);
          if ((int)uVar8 < 2) {
            FUN_100051dc(param_2,0,param_3 * 2,piVar1,0,*(int *)(param_1 + 0xfc) * 2,8,param_4,iVar6
                         ,*param_8,(int)param_8[1] >> 1,0,iVar3);
            FUN_100051dc(param_2,0,param_3 * 2,piVar1,*(int *)(param_1 + 0xfc),
                         *(int *)(param_1 + 0xfc) * 2,8,param_4,iVar6,local_1c,local_18,1,iVar3);
          }
          if ((int)local_24 < 2) {
            iVar11 = param_3 * 2;
            FUN_100051dc(param_2,param_3,iVar11,piVar1,*(int *)(param_1 + 0xfc),
                         *(int *)(param_1 + 0xfc) * 2,8,param_4,iVar6,*param_8,(int)param_8[1] >> 1,
                         0,iVar3);
            uVar8 = 1;
            iVar14 = 8;
            iVar13 = *(int *)(param_1 + 0xfc) * 2;
            iVar12 = 0;
            goto LAB_1000e3b5;
          }
        }
        else if (*(int *)(param_1 + 0x60) == 0) {
          pcVar15 = "invalid motion_type";
LAB_1000e3ce:
          FUN_1000bb3c(param_1,pcVar15);
        }
      }
    }
    else {
      uVar4 = (uint)(*(int *)(param_1 + 0x5f0) == 2);
      if (((*(int *)(param_1 + 0x5c0) == 2) && (*(int *)(param_1 + 0x110) != 0)) &&
         (uVar4 != *param_9)) {
        piVar9 = piVar2;
      }
      if ((param_7 == 1) || (uVar7 == 0)) {
        if ((int)uVar8 < 2) {
          local_10 = param_8[1];
          local_14 = *param_8;
          iVar14 = 0x10;
          iVar13 = *(int *)(param_1 + 0xfc) * 2;
          iVar12 = 0;
          if (*param_9 != 0) {
            iVar12 = *(int *)(param_1 + 0xfc);
          }
          iVar11 = param_3 * 2;
          iVar10 = 0;
          goto LAB_1000e3b5;
        }
      }
      else if (param_7 == 2) {
        if ((int)uVar8 < 2) {
          iVar5 = 0;
          if (*param_9 != 0) {
            iVar5 = *(int *)(param_1 + 0xfc);
          }
          iVar11 = param_3 * 2;
          FUN_100051dc(param_2,0,iVar11,piVar9,iVar5,*(int *)(param_1 + 0xfc) * 2,8,param_4,param_5,
                       *param_8,param_8[1],uVar8,iVar3);
          piVar9 = piVar1;
          if (((*(int *)(param_1 + 0x5c0) == 2) && (*(int *)(param_1 + 0x110) != 0)) &&
             (uVar4 != param_9[2])) {
            piVar9 = piVar2;
          }
          local_10 = param_8[5];
          local_14 = param_8[4];
          iVar14 = 8;
          iVar13 = *(int *)(param_1 + 0xfc) * 2;
          iVar12 = 0;
          if (param_9[2] != 0) {
            iVar12 = *(int *)(param_1 + 0xfc);
          }
          iVar10 = 0;
          iVar5 = param_5 + 8;
LAB_1000e3b5:
          FUN_100051dc(param_2,iVar10,iVar11,piVar9,iVar12,iVar13,iVar14,param_4,iVar5,local_14,
                       local_10,uVar8,iVar3);
        }
      }
      else {
        if (param_7 == 3) {
          piVar9 = piVar1;
          if (*(int *)(param_1 + 0x110) != 0) {
            piVar9 = piVar2;
          }
          FUN_1000b4c8(param_1,(int *)&local_1c,param_10,*param_8,param_8[1]);
          iVar13 = 0;
          if (uVar4 != 0) {
            iVar13 = *(int *)(param_1 + 0xfc);
          }
          iVar11 = param_3 * 2;
          FUN_100051dc(param_2,0,iVar11,piVar1,iVar13,*(int *)(param_1 + 0xfc) * 2,0x10,param_4,
                       param_5,*param_8,param_8[1],0,iVar3);
          uVar8 = 1;
          iVar14 = 0x10;
          iVar13 = *(int *)(param_1 + 0xfc) * 2;
          iVar12 = 0;
          if (uVar4 == 0) {
            iVar12 = *(int *)(param_1 + 0xfc);
          }
          iVar10 = 0;
          local_14 = local_1c;
          local_10 = local_18;
          goto LAB_1000e3b5;
        }
        if (*(int *)(param_1 + 0x60) == 0) {
          pcVar15 = "invalid motion type";
          goto LAB_1000e3ce;
        }
      }
    }
    local_24 = 1;
    uVar8 = 1;
  }
  if ((param_6 & 4) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x5f0) == 3) {
    if (param_7 == 2) {
      if (1 < (int)uVar8) {
        return;
      }
      uVar7 = param_8[3];
      uVar4 = param_8[2];
      iVar14 = 0x10;
      iVar5 = *(int *)(param_1 + 0xfc);
      iVar13 = 0;
      iVar12 = 0;
      goto LAB_1000e65b;
    }
    if ((int)uVar8 < 2) {
      iVar5 = 0;
      if (param_9[1] != 0) {
        iVar5 = *(int *)(param_1 + 0xfc);
      }
      FUN_100051dc(param_2,0,param_3 * 2,piVar2,iVar5,*(int *)(param_1 + 0xfc) * 2,8,param_4,iVar6,
                   param_8[2],(int)param_8[3] >> 1,uVar8,iVar3);
    }
    if (1 < (int)local_24) {
      return;
    }
    uVar7 = (int)param_8[7] >> 1;
    uVar4 = param_8[6];
    iVar5 = *(int *)(param_1 + 0xfc);
    iVar12 = param_3;
    iVar13 = 0;
    if (param_9[3] != 0) {
      iVar13 = iVar5;
    }
  }
  else {
    if (param_7 == 1) {
      uVar7 = param_8[3];
      uVar4 = param_8[2];
      iVar14 = 0x10;
      iVar5 = *(int *)(param_1 + 0xfc) * 2;
      iVar13 = 0;
      if (param_9[1] != 0) {
        iVar13 = *(int *)(param_1 + 0xfc);
      }
      param_3 = param_3 * 2;
      iVar12 = 0;
      goto LAB_1000e65b;
    }
    if (param_7 != 2) {
      if (*(int *)(param_1 + 0x60) != 0) {
        return;
      }
      FUN_1000bb3c(param_1,"invalid motion_type");
      return;
    }
    iVar6 = 0;
    if (param_9[1] != 0) {
      iVar6 = *(int *)(param_1 + 0xfc);
    }
    FUN_100051dc(param_2,0,param_3 * 2,piVar2,iVar6,*(int *)(param_1 + 0xfc) * 2,8,param_4,param_5,
                 param_8[2],param_8[3],uVar8,iVar3);
    uVar7 = param_8[7];
    uVar4 = param_8[6];
    iVar6 = param_5 + 8;
    iVar5 = *(int *)(param_1 + 0xfc);
    iVar13 = 0;
    if (param_9[3] != 0) {
      iVar13 = iVar5;
    }
    iVar12 = 0;
    local_24 = uVar8;
  }
  iVar5 = iVar5 * 2;
  param_3 = param_3 * 2;
  iVar14 = 8;
  param_5 = iVar6;
  uVar8 = local_24;
LAB_1000e65b:
  FUN_100051dc(param_2,iVar12,param_3,piVar2,iVar13,iVar5,iVar14,param_4,param_5,uVar4,uVar7,uVar8,
               iVar3);
  return;
}


