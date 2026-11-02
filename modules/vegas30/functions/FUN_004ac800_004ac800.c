/* Module: vegas30.exe
   Function: FUN_004ac800
   Address: 004ac800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004ac800(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [6];
  
  FUN_004aa700(param_1,param_2,param_4,param_5);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_44 = (int *)0x0;
  }
  else {
    local_44 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  piVar3 = local_44;
  local_20 = *local_44;
  iVar4 = FUN_004aaa50(param_1,param_3);
  local_24 = *(int *)(param_1 + 0xce4);
  local_3c = iVar4;
  local_48 = FUN_004aa940(piVar3,iVar4);
  local_18[1] = 0;
  local_30 = *(int *)(param_2 + 8);
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_4c = 0;
  local_18[0] = 0;
  local_18[5] = 0;
  local_34 = 0;
  if (0 < local_30) {
    local_38 = param_2 + 0x70;
    do {
      param_4 = 0;
      pbVar9 = (byte *)(-(uint)(local_34 < *(uint *)(param_2 + 8)) & local_38);
      param_3 = 0;
      if ((*pbVar9 & 0x40) != 0) goto LAB_004acabc;
      iVar1 = *(int *)(pbVar9 + 8);
      if (iVar1 == 3) {
        if (DAT_0064b4e4 == 0) {
          iVar5 = FUN_00601ab0(&local_28,&local_2c,1);
          if (iVar5 < 0) {
            DAT_0064b4f0 = 1;
          }
          else {
            uVar6 = (local_2c & 0xffff) >> 8;
            if ((int)DAT_0064b4e4 <= (int)uVar6) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = local_28;
              DAT_0064b4e4 = uVar6;
            }
          }
        }
        if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) goto LAB_004ac980;
        iVar5 = FUN_004aa470(param_2,3);
        if (iVar5 < 1) {
          if (local_18[3] < 1) goto LAB_004ac980;
          FUN_004aa620(pbVar9);
        }
        else {
          if ((local_24 != 0) && (*(int *)(local_24 + 4) == 3)) goto LAB_004ac980;
          FUN_004aa620(pbVar9);
        }
      }
      else {
LAB_004ac980:
        if ((iVar4 < 0) || (local_20 <= iVar4)) {
          local_48 = 0;
        }
        else {
          local_48 = FUN_004aa940(local_44,iVar4);
        }
        local_40 = 0;
        if (local_48 == 0) {
          local_48 = FUN_004ac750(param_1,iVar4,&param_4,&param_3);
LAB_004ac9f8:
          param_4 = param_4 + 3;
          param_3 = param_3 + -4;
          local_40 = 1;
        }
        else {
          if ((*(int *)(local_48 + 4) == iVar1) || (*(int *)(local_48 + 4) == 0)) {
            FUN_004ac750(param_1,iVar4,&param_4,&param_3);
            goto LAB_004ac9f8;
          }
          param_3 = 5;
          param_4 = *(int *)(*(int *)(local_48 + 0x69c) + 0x1c) + -3;
          local_48 = 0;
        }
        FUN_004aa640(pbVar9,param_4,param_3,iVar4,&local_48,0);
        if (*(int *)(pbVar9 + 0x4c) == 0) {
          iVar5 = local_18[iVar1];
          local_1c = FUN_004aa470(param_2,iVar1);
          local_1c = local_1c + iVar5;
          iVar7 = FUN_004aa490(param_2,iVar1);
          iVar4 = local_3c;
          if (local_1c < iVar7) {
            *(undefined1 **)(pbVar9 + 100) = &LAB_004a9de0;
            local_4c = local_4c + 1;
            local_18[iVar1] = iVar5 + 1;
          }
          else {
            pbVar9[100] = 0;
            pbVar9[0x65] = 0;
            pbVar9[0x66] = 0;
            pbVar9[0x67] = 0;
            pbVar9[0x48] = 0xff;
            pbVar9[0x49] = 0xff;
            pbVar9[0x4a] = 0xff;
            pbVar9[0x4b] = 0xff;
          }
        }
        else {
          *(undefined1 **)(pbVar9 + 100) = &LAB_004a9de0;
          local_4c = local_4c + 1;
        }
        if ((*(int *)(pbVar9 + 100) != 0) && (local_40 != 0)) {
          iVar4 = iVar4 + 1;
          local_3c = iVar4;
        }
      }
LAB_004acabc:
      local_34 = local_34 + 1;
      local_38 = local_38 + 0x68;
    } while ((int)local_34 < local_30);
  }
  uVar6 = 0;
  if (0 < local_30) {
    uVar11 = param_2 + 0x70;
    do {
      pbVar9 = (byte *)(-(uint)(uVar6 < *(uint *)(param_2 + 8)) & uVar11);
      if ((((*pbVar9 & 0x40) == 0) && (*(int *)(pbVar9 + 100) != 0)) &&
         (uVar10 = uVar11, uVar2 = uVar6, *(int *)(pbVar9 + 0x48) != -1)) {
        while (uVar2 = uVar2 + 1, (int)uVar2 < local_30) {
          uVar10 = uVar10 + 0x68;
          pbVar8 = (byte *)(-(uint)(uVar2 < *(uint *)(param_2 + 8)) & uVar10);
          if ((((*pbVar8 & 0x40) == 0) && (*(int *)(pbVar8 + 100) != 0)) &&
             ((*(int *)(pbVar8 + 0x48) != -1 &&
              ((*(int *)(pbVar9 + 0x4c) == 0 && (*(int *)(pbVar9 + 0x48) == *(int *)(pbVar8 + 0x48))
               ))))) {
            pbVar8[100] = 0;
            pbVar8[0x65] = 0;
            pbVar8[0x66] = 0;
            pbVar8[0x67] = 0;
            local_4c = local_4c + -1;
            *(undefined1 **)(pbVar9 + 100) = &LAB_004a9e40;
            iVar4 = *(int *)(pbVar9 + 0x5c);
            if (iVar4 <= *(int *)(pbVar8 + 0x5c)) {
              iVar4 = *(int *)(pbVar8 + 0x5c);
            }
            *(int *)(pbVar9 + 0x5c) = iVar4;
          }
        }
      }
      uVar6 = uVar6 + 1;
      uVar11 = uVar11 + 0x68;
    } while ((int)uVar6 < local_30);
  }
  return 0 < local_4c;
}


