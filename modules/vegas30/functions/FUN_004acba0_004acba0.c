/* Module: vegas30.exe
   Function: FUN_004acba0
   Address: 004acba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004acba0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_004aa750(param_1,param_2,param_4,param_5);
  iVar1 = FUN_004aaa50(param_1,param_3);
  local_10 = *(int *)(param_1 + 0xce4);
  local_2c = *(int *)(param_2 + 8);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_48 = (int *)0x0;
  }
  else {
    local_48 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  local_44 = *(int *)(param_2 + 0x48);
  local_3c = 0;
  local_8 = *local_48;
  local_40 = 0;
  do {
    local_30 = 0;
    iVar2 = FUN_004a9cd0(local_40);
    iVar3 = FUN_004aa2f0(param_2,iVar2,0,&local_30);
    if (iVar3 != 0) {
      local_38 = FUN_004aa470(param_2,iVar2);
      local_34 = FUN_004aa490(param_2,iVar2);
      param_3 = -1;
      param_4 = -1;
      local_4 = iVar1;
      local_4c = FUN_004aa940(local_48,iVar1);
      local_c = 1;
      if (iVar2 == 3) {
        if (DAT_0064b4e4 == 0) {
          iVar3 = FUN_00601ab0(&local_24,&local_28,1);
          if (iVar3 < 0) {
            DAT_0064b4f0 = 1;
          }
          else {
            uVar4 = (local_28 & 0xffff) >> 8;
            if ((int)DAT_0064b4e4 <= (int)uVar4) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = local_24;
              DAT_0064b4e4 = uVar4;
            }
          }
        }
        if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
          if (DAT_0064b4e4 == 0) {
            iVar3 = FUN_00601ab0(&local_1c,&local_20,1);
            if (iVar3 < 0) {
              DAT_0064b4f0 = 1;
            }
            else {
              uVar4 = (local_20 & 0xffff) >> 8;
              if ((int)DAT_0064b4e4 <= (int)uVar4) {
                DAT_0064b4f0 = 0;
                _DAT_0064b4f4 = local_1c;
                DAT_0064b4e4 = uVar4;
              }
            }
          }
          if (0x20 < (int)DAT_0064b4e4) {
            if (DAT_0064b4e0 == 0) {
              iVar3 = FUN_00601ab0(&local_14,&local_18,1);
              if (iVar3 < 0) {
                DAT_0064b4f0 = 1;
              }
              else if ((int)DAT_0064b4e0 <= (int)(local_18 & 0xff)) {
                DAT_0064b4f0 = 0;
                _DAT_0064b4f4 = local_14;
                DAT_0064b4e0 = local_18 & 0xff;
              }
            }
            if (0x20 < (int)DAT_0064b4e0) goto LAB_004ace0a;
          }
          if (local_38 != local_34) goto LAB_004ace0a;
        }
        if (0 < local_38) {
          if ((local_10 == 0) || (*(int *)(local_10 + 4) != 3)) {
            iVar3 = 0;
          }
          else {
            local_4c = local_10;
            iVar3 = local_c;
          }
          if (((local_10 == 0) && (local_34 <= local_38)) || (iVar3 == 0)) {
            FUN_004aa840(param_2,0,0,3,0xffffffff,0,0);
            goto LAB_004acfc7;
          }
        }
      }
LAB_004ace0a:
      if ((local_4c == 0) || (iVar3 = FUN_004a9c80(iVar2,*(undefined4 *)(local_4c + 4)), iVar3 == 0)
         ) {
        local_4c = FUN_004ac750(param_1,iVar1,&param_3,&param_4);
        param_3 = param_3 + 3;
        param_4 = param_4 + -4;
      }
      else {
        iVar3 = iVar3 + iVar1;
        if (((0 < local_30) && (0 < local_40)) && (iVar8 = local_40 + -1, -1 < iVar8)) {
          do {
            uVar10 = 0;
            uVar9 = 0;
            uVar5 = FUN_004a9cd0(iVar8);
            iVar6 = FUN_004aa2f0(param_2,uVar5,uVar9,uVar10);
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
          if (iVar6 != 0) {
            iVar3 = *(int *)(iVar6 + 0x48) + 1;
          }
        }
        iVar8 = local_8;
        if (iVar3 < 0) {
          param_4 = local_44 * 2;
          local_4c = 0;
          param_3 = *(int *)(param_1 + 0xac4);
        }
        else if (iVar3 < local_8) {
          iVar8 = FUN_004aa940(local_48,iVar3);
          iVar6 = FUN_004a9c80(iVar2,*(undefined4 *)(iVar8 + 4));
          if (iVar6 == 0) {
            local_4c = FUN_004ac750(param_1,iVar3,&param_3,&param_4);
            param_3 = param_3 + 3;
            param_4 = param_4 + -4;
            iVar1 = iVar3;
          }
          else if (iVar6 < 0) {
            piVar7 = (int *)(local_4c + 0x69c);
            local_4c = 0;
            param_3 = *(int *)(*piVar7 + 0x1c) - local_44;
            param_4 = local_44 * 2;
          }
          else if (0 < iVar6) {
            param_3 = *(int *)(*(int *)(iVar8 + 0x69c) + 0x1c) - local_44;
            param_4 = local_44 * 2;
            local_4c = 0;
            iVar1 = iVar3;
          }
        }
        else {
          local_4c = FUN_004ac750(param_1,local_8,&param_3,&param_4);
          param_3 = param_3 + 3;
          param_4 = param_4 + -4;
          iVar1 = iVar8;
        }
      }
      FUN_004aa840(param_2,param_3,param_4,iVar2,iVar1,&local_4c,0);
      if ((iVar1 == local_4) && (iVar2 = FUN_004aa940(local_48,iVar1), local_4c == iVar2)) {
        iVar1 = iVar1 + 1;
      }
    }
LAB_004acfc7:
    local_40 = local_40 + 1;
    if (5 < local_40) {
      uVar4 = 0;
      if (0 < local_2c) {
        piVar7 = (int *)(param_2 + 200);
        do {
          if ((uVar4 < *(uint *)(param_2 + 8)) && (piVar7 != (int *)0x58)) {
            if (((*(byte *)(piVar7 + -0x16) & 0x40) == 0) &&
               ((piVar7[2] != *piVar7 && -1 < piVar7[2] - *piVar7 && (piVar7[-4] != -1)))) {
              piVar7[3] = (int)&LAB_004a9de0;
              local_3c = local_3c + 1;
            }
            else {
              FUN_004aa620(piVar7 + -0x16);
            }
          }
          uVar4 = uVar4 + 1;
          piVar7 = piVar7 + 0x1a;
        } while ((int)uVar4 < local_2c);
      }
      return 0 < local_3c;
    }
  } while( true );
}


