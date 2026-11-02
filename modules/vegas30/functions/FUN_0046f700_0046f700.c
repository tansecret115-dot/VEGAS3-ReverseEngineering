/* Module: vegas30.exe
   Function: FUN_0046f700
   Address: 0046f700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0046f700(int *param_1,uint *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int local_60;
  HCURSOR local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined **local_2c [11];
  
  iVar2 = (int)param_1;
  if (param_2 == (uint *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = *param_2;
  }
  local_3c = 0;
  local_38 = 0;
  iVar10 = *(int *)((int)param_1 + 0xbc8);
  local_44 = iVar10;
  if ((iVar10 == 0) || (iVar5 = FUN_005b87b0(iVar10), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = _DAT_00000000;
    if (*(int *)(iVar2 + 0xbc8) != 0) {
      piVar6 = (int *)FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
      iVar5 = *piVar6;
    }
  }
  local_60 = 0;
  param_1 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_40 = 0;
  local_4c = 0;
  iVar7 = _SfList_CreateExZ_32(&param_1,4,local_54,0x10,2,0,0,0);
  if (-1 < iVar7) {
    uVar8 = _SfGetMillisec_0();
    local_58 = (HCURSOR)0x0;
    local_48 = uVar8;
    FUN_005b83b0(iVar10,0);
    puVar3 = param_2;
    if (local_54 == 0) {
      if (*(int *)(iVar2 + 0xbc8) == 0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
      }
      local_54 = 0;
      if (0 < iVar5) {
        while( true ) {
          iVar9 = *(int *)(*(int *)(local_50 + 8) + local_54 * 4);
          iVar7 = FUN_00469d70(iVar10,*(undefined4 *)(iVar9 + 0x24),param_1,0,0,0,0x20000000,
                               local_48,&local_58);
          if (iVar7 < 0) break;
          if (((DAT_0064778c != 0) &&
              (iVar7 = FUN_0046a5a0(iVar10,iVar9,param_1,0,0,0,0x20000000,0xffffffff), iVar7 < 0))
             || (local_54 = local_54 + 1, iVar5 <= (int)local_54)) break;
        }
      }
    }
    else {
      iVar7 = FUN_00469d70(iVar10,param_2,param_1,0,0,0,0x20000000,uVar8,&local_58);
      if ((-1 < iVar7) && (DAT_0064778c != 0)) {
        FUN_0046ba30(iVar2,puVar3);
        iVar9 = FUN_0046be00(iVar10,param_1,0,0,0,0x20000000,0);
        if (iVar9 != 1) {
          iVar7 = iVar9;
        }
      }
    }
    FUN_005b84d0(iVar10,0);
    if (((-1 < iVar7) && (iVar7 != 1)) &&
       ((iVar7 = FUN_0046dae0(param_1,0,0,0,0,0x20000000), -1 < iVar7 &&
        (iVar9 = FUN_0046e4a0(iVar2,param_1,&local_4c), iVar9 != 0)))) {
      if (*param_1 < 1) {
        iVar7 = -0x7fff0001;
      }
      else {
        FUN_004694a0(param_1,&local_3c,&local_60,&local_34,0,0,&local_40);
        uVar4 = param_3;
        bVar13 = CARRY4(local_3c,param_3);
        local_3c = local_3c + param_3;
        local_38 = local_38 + param_4 + (uint)bVar13;
        local_60 = local_60 + param_5;
        FUN_0049d860(iVar2);
        FUN_004e9f70(iVar10,0x17,0);
        if (local_60 < 0) {
          bVar13 = local_60 < iVar5;
          local_60 = iVar5;
          if (bVar13) {
            local_60 = 0;
          }
        }
        else if (iVar5 <= local_60) {
          local_60 = iVar5;
        }
        local_54 = 0;
        FUN_004694a0(param_1,0,&local_54,0,0,0,0);
        local_2c[0] = &PTR_FUN_00612980;
        iVar7 = FUN_0046ac60(iVar10,local_54);
        iVar9 = local_60;
        if (-1 < iVar7) {
          iVar10 = *(int *)(iVar2 + 0xcec);
          if (iVar10 == 0) {
            if (*(int *)(iVar2 + 0xbc8) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
            }
            param_2 = (uint *)0xffffffff;
            iVar10 = *(int *)(*(int *)(*(int *)(iVar10 + 8) + local_54 * 4) + 4);
            uVar11 = local_54;
            uVar12 = local_3c;
            iVar7 = local_38;
          }
          else {
            uVar1 = *(uint *)(iVar10 + 0x18);
            param_3 = *(uint *)(iVar2 + 0xce0);
            iVar9 = *(int *)(*(int *)(iVar10 + 8) + 0x18) + param_5;
            param_5 = *(int *)(iVar10 + 4);
            iVar7 = *(int *)(iVar10 + 0x1c) + param_4;
            param_2 = (uint *)_SfList_FindSpecificItemRange_16(param_2,0,0xffffffff,iVar10);
            uVar11 = param_3;
            iVar10 = param_5;
            uVar12 = uVar1 + uVar4;
            iVar7 = iVar7 + (uint)CARRY4(uVar1,uVar4);
          }
          iVar7 = FUN_0046ac80(iVar5,iVar9,iVar10,uVar12,iVar7,uVar11);
          iVar10 = local_44;
          if (-1 < iVar7) {
            iVar7 = FUN_0046af80(iVar2,param_1,*(undefined4 *)(iVar2 + 0xcd0),local_3c,local_38,0,
                                 local_60,param_2,local_2c,local_48,&local_58,local_4c);
            iVar10 = local_44;
          }
        }
        FUN_0046aed0();
        if (-1 < iVar7) {
          FUN_004eb2b0(iVar10);
          FUN_004ea040(iVar10,0);
          FUN_005c9070(iVar10,*(undefined4 *)(iVar2 + 0xcd0),0xffffffff,0x10);
          FUN_0048f940(*(undefined4 *)(iVar2 + 0xbc8),*(undefined4 *)(iVar2 + 0xcd0),2);
          FUN_005da080(*(undefined4 *)(iVar2 + 0xbc8),*(undefined4 *)(iVar2 + 0xcd0));
          FUN_00456c20(iVar2);
          DAT_0064767c = DAT_0064767c | 4;
        }
      }
    }
    if (param_1 != (int *)0x0) {
      FUN_004693b0(param_1);
      _SfList_Destroy_4(param_1);
      param_1 = (int *)0x0;
    }
    if (iVar7 < 0) {
      _SfErrorHandler_MsgBox_24(0,0x30,8,iVar7,0,0);
    }
    if (local_58 != (HCURSOR)0x0) {
      SetCursor(local_58);
    }
  }
  return iVar7;
}


