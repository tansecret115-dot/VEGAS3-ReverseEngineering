/* Module: vidcap30.exe
   Function: FUN_005830e0
   Address: 005830e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005832ac) */

undefined8 FUN_005830e0(uint param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint local_14;
  uint local_10;
  
  iVar7 = param_2;
  iVar3 = param_2;
  if (param_2 < 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    iVar3 = -(param_2 + (uint)bVar10);
  }
  if (param_3 < 0) {
    param_2 = -param_3;
  }
  else {
    param_2 = param_3;
  }
  uVar4 = param_4;
  if ((int)param_4 < 0) {
    uVar4 = -param_4;
  }
  if ((iVar7 < 1) && (iVar7 < 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  bVar10 = (bool)(param_3 < 0 ^ bVar1);
  uVar11 = __allmul(param_1,0,param_2,0);
  uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
  local_14 = (uint)uVar11;
  if (iVar3 == 0) {
    uVar2 = (ulonglong)uVar5;
  }
  else {
    lVar12 = __allmul(iVar3,0,param_2,0);
    uVar2 = lVar12 + (ulonglong)uVar5;
  }
  if (param_5 != 0) {
    uVar5 = (int)param_5 >> 0x1f;
    if (bVar10) {
      param_1 = -param_5;
      uVar5 = -(uVar5 + (param_5 != 0));
      bVar9 = (int)param_5 < 1;
    }
    else {
      param_1 = param_5;
      bVar9 = -1 < (int)param_5;
    }
    param_5 = bVar9 - 1;
    bVar9 = CARRY4(local_14,param_1);
    local_14 = local_14 + param_1;
    uVar6 = uVar5 + (uint)uVar2;
    uVar8 = bVar9 + uVar6;
    uVar5 = (int)(uVar2 >> 0x20) +
            (uint)CARRY4(uVar5,(uint)uVar2) + (uint)CARRY4((uint)bVar9,uVar6) + param_5;
    uVar2 = CONCAT44(uVar5,uVar8);
    if ((int)uVar5 < 0) {
      bVar10 = !bVar10;
      uVar6 = ~local_14;
      local_14 = uVar6 + 1;
      iVar7 = ~uVar8 + (uint)(0xfffffffe < uVar6);
      uVar2 = CONCAT44(~uVar5 + (uint)(local_14 == 0 && iVar7 == 0),iVar7);
    }
  }
  uVar5 = (uint)(uVar2 >> 0x20);
  local_10 = (uint)uVar2;
  if ((int)param_4 < 0) {
    bVar10 = !bVar10;
  }
  if (uVar4 <= uVar5) {
    if (bVar10) {
      return 0x8000000000000000;
    }
    return 0x7fffffffffffffff;
  }
  if ((uVar5 == 0) && (local_10 < uVar4)) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)(uVar2 / uVar4);
    if (&stack0x00000000 != (undefined1 *)0x10) {
      local_10 = (uint)(uVar2 % (ulonglong)uVar4);
    }
  }
  iVar3 = (int)(CONCAT44(local_10,local_14) / (ulonglong)uVar4);
  if (bVar10) {
    bVar10 = iVar3 != 0;
    iVar3 = -iVar3;
    iVar7 = -(iVar7 + (uint)bVar10);
  }
  return CONCAT44(iVar7,iVar3);
}


