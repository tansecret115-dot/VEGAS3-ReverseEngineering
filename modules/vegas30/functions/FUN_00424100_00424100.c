/* Module: vegas30.exe
   Function: FUN_00424100
   Address: 00424100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00424100(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_10;
  int local_8;
  int local_4;
  
  if ((DAT_0064761c & 0x800) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  local_8 = *(int *)(param_1 + 0x110);
  local_4 = *(int *)(param_1 + 0x114);
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < DAT_0064b158) {
    return 0;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    return 0;
  }
  if (local_8 < 1) {
    return 0;
  }
  if (local_4 < 1) {
    return 0;
  }
  uVar2 = FUN_005ba4b0(iVar1,0);
  iVar3 = FUN_005b9fc0(iVar1,uVar2,0);
  local_10 = *(double *)(iVar3 + 0x34);
  if (DAT_00647e48 == 0) {
    iVar5 = 1;
    goto LAB_00424212;
  }
  FUN_00424050(&local_10,&local_8,*(undefined4 *)(iVar3 + 0x58),*(undefined4 *)(iVar3 + 0x5c));
  if (((int)local_10 != 0) && (local_10._4_4_ != 0)) {
    local_10 = (double)*(int *)(iVar3 + 0x38) / (double)local_10._4_4_ + _DAT_00610560;
    iVar5 = ftol();
    if (iVar5 < 1) {
      iVar5 = 1;
      goto LAB_00424212;
    }
    if ((iVar5 < 5) && (iVar5 != 3)) goto LAB_00424212;
  }
  iVar5 = 4;
LAB_00424212:
  if ((iVar5 == *(int *)(iVar3 + 0x80)) && (param_2 == 0)) {
    iVar5 = 0;
  }
  FUN_005ba030(iVar1,iVar3,0,1);
  if (iVar5 != 0) {
    uVar4 = FUN_005b9fc0(iVar1,uVar2,1);
    local_10 = (double)CONCAT44(iVar5,iVar5);
    FUN_005ba8a0(iVar1,uVar2,&local_10,DAT_00648668,1);
    FUN_005ba030(iVar1,uVar4,1,1);
    FUN_00426760(iVar1,0,0,0,0,0);
    FUN_00427f90(0xffffffff,0xffffffff,0,1);
  }
  return 1;
}


