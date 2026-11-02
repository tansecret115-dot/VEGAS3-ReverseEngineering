/* Module: vegas30.exe
   Function: FUN_00479160
   Address: 00479160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00479261) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479160(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar6 = *(int *)(*(int *)(param_2 + 0x30) + 8);
  iVar5 = *(int *)(*(int *)(param_2 + 0x30) + 4) * param_3;
  iVar4 = *(int *)(iVar5 + 4 + iVar6);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x24);
  uVar7 = *(uint *)(iVar5 + iVar6);
  if (param_5 != 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    if ((iVar6 <= iVar4) && ((iVar6 < iVar4 || (*(uint *)(param_1 + 0x10) <= uVar7)))) {
      uVar7 = *(uint *)(param_1 + 0x10);
      iVar4 = iVar6;
    }
  }
  lVar8 = ftol();
  puVar1 = (uint *)(param_1 + 0x30);
  iVar6 = (int)((ulonglong)lVar8 >> 0x20) + *(int *)(param_1 + 0x34) +
          (uint)CARRY4((uint)lVar8,*puVar1);
  if ((iVar6 < iVar4) ||
     ((lVar9 = lVar8 + *(longlong *)puVar1, iVar6 <= iVar4 &&
      (lVar9 = lVar8 + *(longlong *)puVar1, (uint)lVar8 + *puVar1 <= uVar7)))) {
    lVar9 = ftol();
    lVar9 = lVar9 + *(longlong *)(param_1 + 0x30);
    if ((CONCAT44(iVar4,uVar7) <= lVar9) || (param_3 == 0)) goto LAB_00479283;
    param_3 = param_3 + -1;
  }
  FUN_00478190(param_2,param_3,lVar9);
LAB_00479283:
  iVar6 = *(int *)(param_1 + 0x20);
  *param_4 = iVar6;
  if (*(int *)(param_1 + 0x38) != 0 || *(int *)(param_1 + 0x3c) != 0) {
    __alldiv(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),2,0);
    iVar4 = ftol();
    *param_4 = iVar4 + iVar6;
  }
  param_4[1] = *(int *)(param_1 + 0x24);
  if ((0 < (iVar2 - iVar3) + -2) &&
     (*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x20) != _DAT_00610f20)) {
    iVar6 = ftol();
    param_4[1] = (*(int *)(param_1 + 0x2c) - iVar6) + -1;
    return;
  }
  return;
}


