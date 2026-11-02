/* Module: vegas30.exe
   Function: FUN_00467f50
   Address: 00467f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467f50(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int *param_6,uint *param_7,uint *param_8,uint param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  DWORD DVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong local_40;
  undefined4 local_30;
  int iStack_2c;
  double local_28;
  undefined8 local_20;
  longlong local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar2 = param_3;
  uVar4 = param_8[1];
  uVar5 = *param_8;
  local_40 = __alldiv(uVar5 + *param_7,uVar4 + param_7[1] + (uint)CARRY4(uVar5,*param_7),2,0);
  iVar10 = (uVar4 - param_7[1]) - (uint)(uVar5 < *param_7);
  if ((iVar10 < param_10) || ((iVar10 <= param_10 && (uVar5 - *param_7 < param_9)))) {
    if ((((*(uint *)(param_3 + 0x10) & 0x100) != 0) ||
        (((param_7[2] == 0 && (param_7[3] == 0)) || ((param_8[2] == 0 && (param_8[3] == 0)))))) &&
       ((param_7[2] != param_8[2] || (param_7[3] != param_8[3])))) {
      uVar4 = DAT_00647860;
      if ((DAT_00647860 & 0x4000000) != 0) {
        uVar4 = GetSysColor(DAT_00647860 & 0xffffff);
      }
      uVar5 = DAT_00647854;
      if ((DAT_00647854 & 0x4000000) != 0) {
        uVar5 = GetSysColor(DAT_00647854 & 0xffffff);
      }
      uVar8 = (uint)DAT_0064aed4;
      DVar6 = GetSysColor(0xd);
      uVar7 = FUN_004645e0(uVar5,DVar6,uVar8);
      dVar3 = (double)*(int *)(param_2 + 0x40);
      uVar1 = *(undefined4 *)(param_2 + 0x38);
      local_28 = (double)(local_40 - *(longlong *)(param_2 + 0x30)) * dVar3;
      __alldiv(uVar1,*(undefined4 *)(param_2 + 0x3c),2,0);
      iVar10 = ftol();
      iVar2 = *(int *)(param_2 + 0x44);
      iVar10 = iVar10 + iVar2;
      if (iVar10 < -0x4000) {
        param_7 = (uint *)0xffffc000;
      }
      else {
        param_7 = (uint *)0x3fff;
        if (iVar10 < 0x4000) {
          param_7 = (uint *)iVar10;
        }
      }
      if (DAT_0064be5c + 7 < (int)param_7) {
        uVar8 = *(uint *)(param_2 + 0x68);
        local_20._4_4_ = *(int *)(param_2 + 0x6c);
        iStack_2c = *(int *)(param_2 + 0x34);
        local_28 = (double)CONCAT44((local_20._4_4_ - iStack_2c) -
                                    (uint)(uVar8 < *(uint *)(param_2 + 0x30)),
                                    uVar8 - *(uint *)(param_2 + 0x30)) * dVar3;
        __alldiv(uVar1,*(undefined4 *)(param_2 + 0x3c),2,0);
        iVar10 = ftol();
        iVar10 = iVar10 + iVar2;
        if (iVar10 < -0x4000) {
          param_8 = (uint *)0xffffc000;
        }
        else {
          param_8 = (uint *)0x3fff;
          if (iVar10 < 0x4000) {
            param_8 = (uint *)iVar10;
          }
        }
        uVar9 = *(uint *)(param_2 + 0x70) - *(uint *)(param_2 + 0x30);
        local_20 = (double)CONCAT44(((*(int *)(param_2 + 0x74) - iStack_2c) -
                                    (uint)(*(uint *)(param_2 + 0x70) < *(uint *)(param_2 + 0x30))) +
                                    local_20._4_4_ + (uint)CARRY4(uVar9,uVar8),uVar9 + uVar8) *
                   dVar3;
        __alldiv(uVar1,*(undefined4 *)(param_2 + 0x3c),2,0);
        iVar10 = ftol();
        iVar10 = iVar10 + iVar2;
        if (iVar10 < -0x4000) {
          iVar10 = -0x4000;
        }
        else if (0x3fff < iVar10) {
          iVar10 = 0x3fff;
        }
        FUN_00467ab0(param_4,uVar4,uVar5,uVar7,param_5,param_7,param_8,iVar10);
        DAT_0064be5c = (int)param_7;
      }
    }
  }
  else {
    plVar11 = &local_18;
    for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)plVar11 = 0;
      plVar11 = (longlong *)((int)plVar11 + 4);
    }
    local_18 = local_40;
    FUN_005ceab0(param_1,param_3,local_40 - *(longlong *)(param_3 + 0x18),&local_30,0,&local_10,
                 &local_8);
    local_4 = (uint)((double)CONCAT44(iStack_2c,local_30) < _DAT_00610fd8);
    local_40 = local_40 - *(longlong *)(param_2 + 0x30);
    local_28 = (double)local_40 * (double)*(int *)(param_2 + 0x40);
    __alldiv(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),2,0);
    iVar10 = ftol();
    iVar10 = iVar10 + *(int *)(param_2 + 0x44);
    if (iVar10 < -0x4000) {
      param_3 = -0x4000;
    }
    else {
      param_3 = 0x3fff;
      if (iVar10 < 0x4000) {
        param_3 = iVar10;
      }
    }
    if (((((param_7[2] != local_10) || (param_7[3] != local_c)) || (param_7[4] != local_8)) ||
        (param_7[5] != local_4)) && (*param_6 <= param_3)) {
      FUN_00467f50(param_1,param_2,iVar2,param_4,param_5,param_6,param_7,&local_18,param_9,param_10)
      ;
    }
    if ((((local_10 != param_8[2]) || (local_c != param_8[3])) ||
        ((local_8 != param_8[4] || (local_4 != param_8[5])))) && (param_3 <= param_6[2])) {
      FUN_00467f50(param_1,param_2,iVar2,param_4,param_5,param_6,&local_18,param_8,param_9,param_10)
      ;
      return;
    }
  }
  return;
}


