/* Module: vegas30.exe
   Function: FUN_00458c00
   Address: 00458c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00458cb9) */

undefined4 FUN_00458c00(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  uVar5 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x60c);
    if (param_2 == -0x7fffffff) {
LAB_00458c59:
      param_2 = iVar4;
    }
    else if (param_2 == 0x7fffffff) {
      param_2 = 0;
    }
    else if (param_2 == -0x80000000) {
      param_2 = DAT_006477c0;
      if (iVar4 <= DAT_006477c0) goto LAB_00458c59;
    }
    else {
      param_2 = *(int *)(param_1 + 0x608) + param_2;
      if (param_2 < 0) {
        param_2 = 0;
      }
      else if (iVar4 < param_2) goto LAB_00458c59;
    }
    if (param_2 != *(int *)(param_1 + 0x608)) {
      *(int *)(param_1 + 0x608) = param_2;
      if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
        uVar6 = *(uint *)(param_1 + 0xb70);
        iVar4 = *(int *)(param_1 + 0xb74);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0xb30);
        iVar4 = *(int *)(param_1 + 0xb34);
      }
      lVar8 = FUN_00454220(param_1,param_2);
      if (lVar8 <= *(int *)(param_1 + 0xad0)) {
        lVar8 = (longlong)*(int *)(param_1 + 0xad0);
      }
      uVar9 = __alldiv(lVar8,2,0);
      uVar7 = uVar6 - (uint)uVar9;
      iVar4 = (iVar4 - (int)((ulonglong)uVar9 >> 0x20)) - (uint)(uVar6 < (uint)uVar9);
      if ((iVar4 < 1) && (iVar4 < 0)) {
        iVar4 = 0;
        uVar7 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x604);
        if ((iVar1 <= iVar4) && ((iVar1 < iVar4 || (*(uint *)(param_1 + 0x600) < uVar7)))) {
          iVar4 = iVar1;
          uVar7 = *(uint *)(param_1 + 0x600);
        }
      }
      FUN_004543c0(param_1,uVar7,iVar4,lVar8,1);
      uVar5 = 1;
    }
  }
  if (param_3 == 0) {
    return uVar5;
  }
  if (param_3 == -0x7fffffff) {
    param_3 = 0;
    goto LAB_00458d5f;
  }
  if (param_3 != 0x7fffffff) {
    if (param_3 == -0x80000000) {
      param_3 = *(int *)(param_1 + 0x680);
      goto LAB_00458d5f;
    }
    param_3 = *(int *)(param_1 + 0x678) - param_3;
    if (param_3 < 0) {
      param_3 = 0;
      goto LAB_00458d5f;
    }
    if (param_3 <= *(int *)(param_1 + 0x67c)) goto LAB_00458d5f;
  }
  param_3 = *(int *)(param_1 + 0x67c);
LAB_00458d5f:
  if (param_3 != *(int *)(param_1 + 0x678)) {
    uVar5 = 1;
    *(int *)(param_1 + 0x678) = param_3;
    if ((*(byte *)(param_1 + 0x654) & 0x40) != 0) {
      FUN_004530a0(param_1,0x800);
      return 1;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xba8);
    uVar3 = FUN_00454300(param_1,param_3);
    FUN_004549b0(param_1,uVar2,uVar3,5);
  }
  return uVar5;
}


