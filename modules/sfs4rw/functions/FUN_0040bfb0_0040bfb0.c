/* Module: sfs4rw.dll
   Function: FUN_0040bfb0
   Address: 0040bfb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040bfb0(int *param_1,void *param_2)

{
  int *this;
  undefined4 uVar1;
  int iVar2;
  CHAR *pCVar3;
  int iVar4;
  int local_528;
  int local_524 [3];
  CHAR local_518 [128];
  CHAR local_498 [128];
  CHAR local_418 [61];
  CHAR local_3db [24];
  undefined1 local_3c3;
  int local_3a8;
  int local_3a4;
  undefined4 local_39c;
  undefined4 local_348;
  undefined4 local_344;
  int local_330;
  int local_318;
  int local_308;
  int local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  int local_2c4;
  int **local_1b8;
  void *local_1a4;
  int *local_1a0 [100];
  CHAR *local_10;
  undefined4 local_8;
  int local_4;
  
  this = DAT_004a8128;
  pCVar3 = local_518;
  for (iVar2 = 0xde; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3[0] = '\0';
    pCVar3[1] = '\0';
    pCVar3[2] = '\0';
    pCVar3[3] = '\0';
    pCVar3 = pCVar3 + 4;
  }
  local_330 = param_1[0xc];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = -0x7fffbffb;
  local_1a4 = param_2;
  FUN_00402880(param_2);
  local_2c4 = *(int *)((int)param_2 + 0x590);
  local_2f4 = param_1[0xb];
  if (local_2c4 != 0) {
    lstrcpynA(local_3db,(LPCSTR)((int)param_2 + 0x25),0x19);
    local_3c3 = 0;
  }
  local_39c = 0x1b7e;
  local_2d4 = 1;
  local_2d0 = 1;
  FUN_00410160(this,local_418,0xb);
  FUN_00415f50(local_518,0x80);
  FUN_004162e0(local_498,0x80);
  local_348 = *(undefined4 *)((int)param_2 + 0x570);
  local_344 = *(undefined4 *)((int)param_2 + 0x574);
  local_2f0 = 1;
  local_2ec = 1;
  local_2e8 = 1;
  local_10 = local_3db;
  local_4 = local_2c4;
  local_1b8 = local_1a0;
  local_2dc = 0;
  local_2d8 = 0;
  local_2e4 = 0;
  local_2e0 = 0;
  local_8 = 0;
  local_1a0[0] = this;
  local_528 = 0;
  local_524[0] = 0;
  local_524[1] = 0;
  FUN_00416b40(this,&local_528,local_524);
  iVar2 = FUN_004061d0(local_528,local_524[0]);
  if (iVar2 == 0) {
    local_528 = 0;
    local_524[0] = 0;
  }
  FUN_00412c70(this,(HKEY)0x0,(HKEY)0x0);
  FUN_00412f10(this,local_524 + 1,local_524 + 2,1);
  FUN_00410880(this);
  iVar2 = FUN_0040bf10((int)local_518);
  if (local_2c4 == 0) {
    if (iVar2 == 0) {
      local_2d8 = 3;
      FUN_004063d0((int)local_518);
      goto LAB_0040c20d;
    }
    local_2d8 = 2;
    FUN_004063d0((int)local_518);
    local_39c = 0x1b7d;
  }
  else {
    local_2d8 = 3;
    local_3a8 = DAT_004a84f4;
    local_3a4 = 0;
    FUN_004063d0((int)local_518);
    FUN_00405f60(local_3a8,local_3a4);
LAB_0040c20d:
    local_39c = 0x1b7e;
  }
  uVar1 = FUN_0040b9d0((int)local_518);
  param_1[8] = local_318;
  if (local_318 == 0) {
    param_1[1] = local_3a4;
    *param_1 = local_3a8;
    if (local_2c4 != 0) goto LAB_0040c27b;
    iVar2 = 0;
    iVar4 = 0;
  }
  else {
    param_1[2] = local_3a8;
    param_1[3] = local_3a4;
    iVar2 = local_3a8;
    iVar4 = local_3a4;
    if (local_2c4 != 0) goto LAB_0040c27b;
  }
  FUN_00416d50(this,iVar2,iVar4);
LAB_0040c27b:
  param_1[9] = local_308;
  iVar2 = FUN_00412f10(this,local_524 + 1,local_524 + 2,2);
  param_1[6] = iVar2;
  return uVar1;
}


