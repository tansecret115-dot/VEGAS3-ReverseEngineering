/* Module: vegas30.exe
   Function: FUN_0053b000
   Address: 0053b000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0053b078) */
/* WARNING: Removing unreachable block (ram,0x0053b154) */

int FUN_0053b000(int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_2c [4];
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar1 = param_1 + 0xe80;
  iVar4 = FUN_0053ae40(iVar1,0xffffffff);
  lVar8 = FUN_00538780(iVar1);
  local_28._0_4_ = 0;
  iVar5 = -1;
  param_1 = -1;
  local_18 = 0xffffffff;
  local_14 = 0x7fffffff;
  local_20 = 0;
  local_1c = 0;
  local_10 = 0;
  local_c = 0;
  if (((int)param_4[1] < 1) && ((int)param_4[1] < 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)param_4;
    if (lVar8 < *(longlong *)param_4) {
      lVar3 = lVar8;
    }
  }
  *(longlong *)param_4 = lVar3;
  iVar6 = 0;
  if (iVar4 < 1) {
LAB_0053b1b0:
    *param_4 = (uint)local_28;
    param_4[1] = local_1c;
    return iVar5;
  }
  do {
    iVar5 = iVar6;
    local_28 = lVar8;
    FUN_005387c0(iVar1,0xffffffff,iVar5,local_2c,&local_8,0,0);
    uVar2 = *param_4;
    local_10 = local_8;
    uVar7 = uVar2 - local_8;
    iVar6 = (param_4[1] - local_4) - (uint)(uVar2 < local_8);
    if ((iVar6 < 1) && (iVar6 < 0)) {
      uVar7 = local_8 - uVar2;
      iVar6 = (local_4 - param_4[1]) - (uint)(local_8 < uVar2);
    }
    if ((local_14 < iVar6) ||
       ((((local_14 <= iVar6 && (local_18 <= uVar7)) || (param_3 < iVar6)) ||
        ((param_3 <= iVar6 && (param_2 <= uVar7)))))) {
      if ((uVar2 == 0 && param_4[1] == 0) &&
         ((((int)local_c < 1 && ((int)local_c < 0)) &&
          ((0 < (int)local_4 || ((-1 < (int)local_4 && (local_8 != 0)))))))) {
        *param_4 = 0;
        param_4[1] = 0;
        return iVar5 + -1;
      }
      if ((local_28 == CONCAT44(param_4[1],uVar2)) && (local_28 < CONCAT44(local_4,local_8))) {
        local_1c = local_28._4_4_;
        goto LAB_0053b1b0;
      }
    }
    else {
      local_20 = local_8;
      local_1c = local_4;
      param_1 = iVar5;
      local_18 = uVar7;
      local_14 = iVar6;
    }
    iVar6 = iVar5 + 1;
    local_c = local_4;
    lVar8 = local_28;
    if (iVar4 <= iVar5 + 1) {
      *param_4 = local_20;
      param_4[1] = local_1c;
      return param_1;
    }
  } while( true );
}


