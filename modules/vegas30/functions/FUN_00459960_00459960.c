/* Module: vegas30.exe
   Function: FUN_00459960
   Address: 00459960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00459a97) */
/* WARNING: Removing unreachable block (ram,0x00459b05) */
/* WARNING: Removing unreachable block (ram,0x00459bf9) */

void FUN_00459960(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  SHORT SVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 local_20;
  longlong local_18;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar5 = ((int)param_4 < 0) + 1;
  iVar6 = (int)(short)(param_4 >> 0x10);
  iVar7 = iVar6 / 0x78;
  if (iVar7 < 0) {
    iVar6 = (int)((ulonglong)((longlong)iVar6 * 0x77777777) >> 0x20) - iVar6;
    iVar7 = (iVar6 >> 6) - (iVar6 >> 0x1f);
  }
  uVar3 = (param_4 & 0xffff) >> 3 & 1;
  local_20._0_4_ = iVar5;
  if (((param_4 & 0xffff) >> 2 & 1) == 0) {
    if (uVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0xbcc);
      if (iVar5 == 1) {
        iVar6 = -iVar6;
      }
      FUN_00458ac0(param_1,0,0,iVar6 * iVar7);
      return;
    }
    if (iVar5 != 2) {
      iVar7 = -iVar7;
    }
    local_18 = FUN_00454220(param_1,*(int *)(param_1 + 0x608) + iVar7);
    if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
      local_c = *(int *)(param_1 + 0xb74);
      uVar3 = *(uint *)(param_1 + 0xb70);
    }
    else {
      local_c = *(int *)(param_1 + 0xb34);
      uVar3 = *(uint *)(param_1 + 0xb30);
    }
    iVar7 = *(int *)(param_1 + 0xb98);
    uVar8 = *(uint *)(param_1 + 0xb88);
    iVar5 = *(int *)(param_1 + 0xb8c);
    lVar1 = *(longlong *)(param_1 + 0xb88);
    local_4 = iVar7 >> 0x1f;
    if (local_18 <= iVar7) {
      local_18 = (longlong)iVar7;
    }
    lVar13 = __alldiv(local_18,2,0);
    local_8 = (uint)lVar13;
    if (lVar13 + lVar1 != CONCAT44(local_c,uVar3)) {
      uVar10 = (uVar3 - local_8) - uVar8;
      iVar7 = (((local_c - (int)((ulonglong)lVar13 >> 0x20)) - (uint)(uVar3 < local_8)) - iVar5) -
              (uint)(uVar3 - local_8 < uVar8);
      if ((iVar7 < 1) && (iVar7 < 0)) {
        iVar6 = -(iVar7 + (uint)(uVar10 != 0));
        if ((iVar5 <= iVar6) && ((iVar5 < iVar6 || (uVar8 < -uVar10)))) {
          uVar8 = 0;
          iVar5 = 0;
          goto LAB_00459c67;
        }
      }
      bVar11 = CARRY4(uVar8,uVar10);
      uVar8 = uVar8 + uVar10;
      iVar5 = iVar5 + iVar7 + (uint)bVar11;
    }
LAB_00459c67:
    SVar2 = GetKeyState(0x12);
    if (((-1 < SVar2) || ((*(byte *)(param_1 + 0x1c) & 8) != 0)) || ((int)local_20 != 1)) {
      FUN_004543c0(param_1,uVar8,iVar5,local_18,1);
      FUN_00455090(param_1,0);
    }
    return;
  }
  if (uVar3 == 0) {
    iVar6 = *(int *)(param_1 + 0xb94);
    uVar3 = *(uint *)(param_1 + 0xb90);
    uVar12 = __allmul(uVar3,iVar6,9,0);
    uVar12 = __alldiv(uVar12,10,0);
    iVar9 = uVar3 - (uint)uVar12;
    iVar6 = (iVar6 - (int)((ulonglong)uVar12 >> 0x20)) - (uint)(uVar3 < (uint)uVar12);
    if (iVar5 == 1) {
      bVar11 = iVar9 != 0;
      iVar9 = -iVar9;
      iVar6 = -(iVar6 + (uint)bVar11);
    }
    uVar4 = 0;
    uVar12 = __allmul(iVar7,iVar7 >> 0x1f,iVar9,iVar6);
    FUN_00458ac0(param_1,uVar12,uVar4);
    return;
  }
  if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
    local_20._0_4_ = *(undefined4 *)(param_1 + 0xb70);
    local_20._4_4_ = *(undefined4 *)(param_1 + 0xb74);
  }
  else {
    local_20._0_4_ = *(undefined4 *)(param_1 + 0xb30);
    local_20._4_4_ = *(undefined4 *)(param_1 + 0xb34);
  }
  local_18 = __alldiv(*(undefined4 *)(param_1 + 0xb90),*(undefined4 *)(param_1 + 0xb94),
                      *(int *)(param_1 + 0xb98),*(int *)(param_1 + 0xb98) >> 0x1f);
  SVar2 = GetKeyState(0x12);
  if ((SVar2 < 0) || (DAT_006476c0 != 0)) {
    FUN_00456c30(param_1,&local_20,&local_18);
  }
  lVar1 = local_18;
  if (local_18 < 2) {
    lVar1 = 1;
  }
  lVar13 = __allmul(iVar7,0,lVar1);
  lVar1 = lVar13;
  if (iVar5 != 2) {
    lVar1 = CONCAT44(-((int)((ulonglong)lVar13 >> 0x20) + (uint)((int)lVar13 != 0)),-(int)lVar13);
  }
  lVar1 = lVar1 + CONCAT44(local_20._4_4_,(int)local_20);
  if ((lVar1 < 0x100000000) && (lVar1 < 0)) {
    uVar4 = 0;
    local_20._0_4_ = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x604);
    local_20._0_4_ = *(int *)(param_1 + 0x600);
    if (lVar1 <= *(longlong *)(param_1 + 0x600)) goto LAB_00459b15;
  }
  lVar1 = CONCAT44(uVar4,(int)local_20);
LAB_00459b15:
  local_18 = lVar13;
  local_20 = lVar1;
  FUN_00453340(param_1,lVar1,0,0,0);
  FUN_00455090(param_1,0xf);
  return;
}


