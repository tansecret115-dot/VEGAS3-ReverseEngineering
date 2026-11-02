/* Module: vegas30.exe
   Function: FUN_004a5900
   Address: 004a5900
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a5900(int param_1,int *param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  int local_30;
  undefined **local_2c;
  
  iVar9 = *(int *)(param_1 + 0xbc8);
  iVar7 = 0;
  local_3c = iVar9;
  if (iVar9 == 0) {
    local_5c = (int *)0x0;
  }
  else {
    local_5c = (int *)FUN_005b87b0(iVar9);
  }
  iVar8 = *param_2;
  iVar3 = *local_5c;
  if (iVar8 < 1) {
    return 0;
  }
  local_40 = iVar8;
  local_38 = iVar3;
  FUN_004e9f70(iVar9,(iVar8 != 1) + '\x18',0);
  local_50 = 0;
  if (DAT_0064778c != 0) {
    FUN_0047f570(iVar9,&local_50);
  }
  iVar9 = param_5;
  if (((param_4 < 1) && (param_4 < 0)) && (0 < iVar8)) {
    piVar5 = (int *)param_2[2];
    do {
      iVar2 = *(int *)(*piVar5 + 0x18);
      uVar4 = -iVar2;
      iVar2 = -(*(int *)(*piVar5 + 0x1c) + (uint)(iVar2 != 0));
      if ((param_4 <= iVar2) && ((param_4 < iVar2 || (param_3 <= uVar4)))) {
        param_3 = uVar4;
        param_4 = iVar2;
      }
      piVar5 = piVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_5 < -1) {
    local_58 = -1;
  }
  else {
    local_58 = 1;
    if (param_5 < 2) {
      local_58 = param_5;
    }
  }
  param_5 = -1;
  if (*(int *)(param_1 + 0xcec) != 0) {
    param_5 = *(int *)(*(int *)(*(int *)(param_1 + 0xcec) + 8) + 0x18);
  }
  local_2c = &PTR_FUN_00612980;
  iVar8 = *(int *)param_2[2];
  iVar2 = *(int *)(*(int *)(iVar8 + 8) + 0x18);
  FUN_0046ac60(*(undefined4 *)(param_1 + 0xbc8),iVar2);
  iVar1 = *(int *)(param_1 + 0xcec);
  if (iVar1 == 0) {
    uVar6 = *(undefined4 *)(iVar8 + 4);
    uVar4 = *(uint *)(iVar8 + 0x18);
    iVar8 = *(int *)(iVar8 + 0x1c);
  }
  else {
    uVar6 = *(undefined4 *)(iVar1 + 4);
    uVar4 = *(uint *)(iVar1 + 0x18);
    iVar8 = *(int *)(iVar1 + 0x1c);
    iVar2 = param_5;
  }
  FUN_0046ac80(iVar3,iVar9 + iVar2,uVar6,uVar4 + param_3,
               iVar8 + param_4 + (uint)CARRY4(uVar4,param_3),iVar2);
  local_4c = -1;
  local_44 = 0;
  iVar9 = local_3c;
  if (0 < local_40) {
    local_54 = iVar3 + -1;
    local_60 = iVar3;
    do {
      iVar8 = *(int *)(param_2[2] + local_44 * 4);
      uVar4 = *(uint *)(iVar8 + 0x10);
      if (((uVar4 & 8) == 0) && ((uVar4 & 0x100000) == 0)) {
        iVar7 = *(int *)(*(int *)(iVar8 + 8) + 0x18);
        iVar2 = iVar7;
        local_48 = iVar7;
        if ((uVar4 & 0x1000400) == 0) {
          iVar9 = iVar7;
          if (param_6 == 0) {
            FUN_0046ad60(iVar7,*(undefined4 *)(iVar8 + 4),iVar3,*(undefined4 *)(iVar8 + 0x18),
                         *(undefined4 *)(iVar8 + 0x1c),*(int *)(param_1 + 0xcec) == iVar8,local_34);
            iVar2 = local_30;
          }
          else {
            do {
              iVar9 = local_58 + iVar9;
              iVar2 = iVar7;
              if ((iVar9 < 0) || (iVar3 <= iVar9)) break;
              iVar2 = iVar9;
            } while (*(int *)(*(int *)(local_5c[2] + iVar9 * 4) + 4) != *(int *)(iVar8 + 4));
          }
        }
        iVar9 = local_3c;
        FUN_004ea250(local_3c,*(undefined4 *)(iVar8 + 8),1,0);
        if (DAT_0064778c != 0) {
          FUN_004ea250(iVar9,*(undefined4 *)(iVar8 + 8),0xf,0);
          FUN_0047f5c0(iVar9,local_50,*(undefined4 *)(iVar8 + 8),iVar7,iVar2,param_3,param_4);
        }
        *(uint *)(iVar8 + 0x58) = *(uint *)(iVar8 + 0x58) | 0x60;
        if (iVar2 == iVar7) {
          iVar7 = FUN_005c97b0(*(undefined4 *)(param_1 + 0xbc8),iVar8,
                               *(uint *)(iVar8 + 0x18) + param_3,
                               *(int *)(iVar8 + 0x1c) + param_4 +
                               (uint)CARRY4(*(uint *)(iVar8 + 0x18),param_3),0);
          iVar3 = local_60;
          if (iVar7 < 0) break;
        }
        else {
          if (local_5c == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *local_5c;
          }
          if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
            param_5 = 0;
          }
          else {
            param_5 = *(int *)(local_5c[2] + iVar2 * 4);
          }
          if (param_5 == 0) {
            if (local_4c == iVar7) {
              if (local_5c == (int *)0x0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *local_5c;
              }
              iVar2 = local_54;
              if ((local_54 < 0) || (iVar7 + -1 < local_54)) {
                param_5 = 0;
              }
              else {
                param_5 = *(int *)(local_5c[2] + local_54 * 4);
              }
            }
            else {
              iVar7 = FUN_005ce780(&param_5,iVar9,*(undefined4 *)(iVar8 + 4),local_60,0);
              if (iVar7 < 0) break;
              FUN_004cb540(param_1,*(undefined4 *)(param_5 + 0x18),0,1);
              FUN_004ea250(iVar9,param_5,0xb,0);
              local_54 = local_54 + 1;
              local_4c = local_48;
              iVar2 = local_60;
              local_60 = local_60 + 1;
            }
          }
          if ((iVar2 < local_38) && (FUN_004ea250(iVar9,param_5,1,0), DAT_0064778c != 0)) {
            FUN_004ea250(iVar9,param_5,0xf,0);
          }
          iVar7 = FUN_005c9520(iVar9,param_5,iVar8,*(uint *)(iVar8 + 0x18) + param_3,
                               *(int *)(iVar8 + 0x1c) + param_4 +
                               (uint)CARRY4(*(uint *)(iVar8 + 0x18),param_3),1);
          if (iVar7 < 0) break;
          *(int *)(*(int *)(iVar8 + 0x218) + 0xa8) = iVar2 - local_48;
          iVar3 = local_60;
        }
      }
      local_44 = local_44 + 1;
      iVar9 = local_3c;
    } while (local_44 < local_40);
  }
  if (DAT_0064778c != 0) {
    FUN_0047f630(iVar9,local_50,iVar7 < 0);
  }
  if (-1 < iVar7) {
    FUN_004eb2b0(iVar9);
  }
  FUN_004ea040(iVar9,0);
  FUN_0046aed0();
  return iVar7;
}


