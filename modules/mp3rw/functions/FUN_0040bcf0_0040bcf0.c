/* Module: mp3rw.dll
   Function: FUN_0040bcf0
   Address: 0040bcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040bcf0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  int *this;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar3;
  int iVar4;
  CHAR *pCVar5;
  int local_520;
  int local_51c;
  CHAR local_518 [128];
  CHAR local_498 [128];
  CHAR local_418 [11];
  CHAR local_40d [50];
  undefined1 local_3db [51];
  int local_3a8;
  uint local_3a4;
  int local_39c;
  int local_33c;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  int **local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  void *local_1a4;
  int *local_1a0 [100];
  undefined1 *local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  this = DAT_004a8128;
  pCVar5 = local_518;
  for (iVar4 = 0xde; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar5[0] = '\0';
    pCVar5[1] = '\0';
    pCVar5[2] = '\0';
    pCVar5[3] = '\0';
    pCVar5 = pCVar5 + 4;
  }
  local_1a4 = param_4;
  FUN_00402880(param_4);
  local_2f4 = param_1;
  local_2d4 = 1;
  local_2d0 = 0;
  local_2e0 = 0;
  FUN_004101e0(this,local_418,0xb);
  FUN_00415fd0(local_518,0x80);
  FUN_00416360(local_498,0x80);
  FUN_00412b40(this,local_40d,0x19);
  iVar4 = FUN_00412f90(this,&local_51c,&local_520,1);
  if (local_520 == 0) {
    return 0x8004e140;
  }
  local_3a8 = local_520;
  local_3a4 = FUN_00410900(this);
  local_3a4 = local_3a4 & 0xffff;
  iVar2 = FUN_00405fc0(local_520,local_3a4);
  if (iVar2 == 0) {
    FUN_00405fc0(local_520,0);
    local_3a4 = 0;
  }
  iVar2 = FUN_0040bf70((int)local_518);
  if ((iVar4 == 0x4e132) || (iVar4 == -0x7ffb1eca)) {
    local_2d8 = 1;
    FUN_00406430((int)local_518);
  }
  else {
    if (iVar2 != 0) {
      local_2d8 = 2;
      FUN_00406430((int)local_518);
      bVar1 = FUN_004117b0(this);
      if (CONCAT31(extraout_var,bVar1) == 1) {
        local_39c = 0x1f60;
      }
      else {
        local_39c = FUN_004066e0((uint)local_518);
      }
      if (iVar4 == -0x7ffb1ed3) {
        local_39c = 0x1b7d;
      }
      goto LAB_0040bec8;
    }
    local_2d8 = 3;
    FUN_00406430((int)local_518);
    bVar1 = FUN_00416ff0(this);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      local_39c = 0x1f5e;
      goto LAB_0040bec8;
    }
  }
  local_39c = FUN_004066e0((uint)local_518);
LAB_0040bec8:
  local_10 = local_3db;
  local_4 = local_2c4;
  local_1b8 = local_1a0;
  local_2f0 = 1;
  local_2ec = 1;
  local_2e8 = 0;
  local_8 = 0;
  local_1a0[0] = this;
  local_33c = local_51c;
  local_1b4 = 0;
  local_1b0 = 0;
  uVar3 = FUN_0040ba30((int)local_518);
  *param_2 = local_2cc;
  *param_3 = local_2c8;
  return uVar3;
}


