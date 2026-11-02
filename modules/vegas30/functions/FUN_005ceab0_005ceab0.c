/* Module: vegas30.exe
   Function: FUN_005ceab0
   Address: 005ceab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005ced45) */
/* WARNING: Removing unreachable block (ram,0x005cebf7) */
/* WARNING: Removing unreachable block (ram,0x005ced61) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_005ceab0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     double *param_5,double *param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  float10 extraout_ST0;
  float10 fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_10 [12];
  
  iVar1 = *(int *)(param_2 + 0x50);
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
    param_7[1] = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0xffffffff;
  }
  if (param_5 != (double *)0x0) {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)((int)param_5 + 4) = 0x3ff00000;
  }
  if (param_6 != (double *)0x0) {
    *(undefined4 *)param_6 = 0;
    *(undefined4 *)((int)param_6 + 4) = 0;
  }
  if ((*(int *)(param_2 + 0x24) < 1) &&
     ((*(int *)(param_2 + 0x24) < 0 || (*(int *)(param_2 + 0x20) == 0)))) {
    return -1;
  }
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
      (iVar1 = FUN_005f13f0(*(undefined4 *)(param_2 + 4)), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x30) != 0)) {
    FUN_005cefa0(param_2,param_3,param_4,param_5,param_8);
    ftol();
    if (param_5 != (double *)0x0) {
      *param_5 = *(double *)(param_2 + 0x28) * *param_5;
    }
    uVar5 = ftol();
    FUN_005c9630(param_1,param_2,0,0,local_10,0);
    if (((*(uint *)(param_2 + 0x10) & 0x100) != 0) || (param_8 != (undefined4 *)0x0)) {
      if (param_7 != (int *)0x0) {
        if (*(int *)(iVar1 + 0x20) == 0 && *(int *)(iVar1 + 0x24) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = __alldiv(uVar5,*(int *)(iVar1 + 0x20),*(int *)(iVar1 + 0x24));
        }
        *(undefined8 *)param_7 = uVar6;
      }
      if (*(int *)(iVar1 + 0x20) != 0 || *(int *)(iVar1 + 0x24) != 0) {
        __allrem(uVar5,*(int *)(iVar1 + 0x20),*(int *)(iVar1 + 0x24));
        if (((extraout_EDX < 1) && (extraout_EDX < 0)) && (param_7 != (int *)0x0)) {
          iVar2 = *param_7;
          *param_7 = iVar2 + -1;
          param_7[1] = param_7[1] + -1 + (uint)(iVar2 != 0);
        }
      }
    }
    if ((*(int *)(param_2 + 0x210) == 0) && (*(int *)(param_2 + 0x214) == 0x3ff00000)) {
      lVar7 = ftol();
      if (param_6 != (double *)0x0) {
        fVar4 = (float10)_CIfmod();
        *param_6 = (double)fVar4;
      }
    }
    else {
      ftol();
      lVar7 = ftol();
      if (param_6 != (double *)0x0) {
        *param_6 = (double)(extraout_ST0 - (float10)lVar7);
      }
    }
    iVar2 = *(int *)(iVar1 + 0x7c);
    iVar3 = *(int *)(iVar1 + 0x78);
    if (*(longlong *)(iVar1 + 0x78) <= lVar7) {
      iVar3 = *(int *)(iVar1 + 0x80) + -1;
      iVar2 = *(int *)(iVar1 + 0x84) - (uint)(*(int *)(iVar1 + 0x80) == 0);
      if (lVar7 <= CONCAT44(iVar2,iVar3)) {
        return lVar7;
      }
    }
    return CONCAT44(iVar2,iVar3);
  }
  return 0;
}


