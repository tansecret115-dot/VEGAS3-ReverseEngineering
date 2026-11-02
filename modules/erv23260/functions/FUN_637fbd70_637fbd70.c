/* Module: erv23260.dll
   Function: FUN_637fbd70
   Address: 637fbd70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fbd70(void *this,int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int local_c;
  uint local_8;
  
  FUN_637fd3d0(this,2);
  if (param_1 == 5) {
    if (param_3 == 1) {
      *param_2 = 1;
      bVar1 = FUN_637fd5c0((int)this);
      param_2[1] = CONCAT31(extraout_var_01,bVar1);
      bVar1 = FUN_637fd5c0((int)this);
      param_2[3] = CONCAT31(extraout_var_02,bVar1);
      bVar1 = FUN_637fd5c0((int)this);
      local_8 = CONCAT31(extraout_var_03,bVar1);
      param_2[2] = local_8 + param_2[1];
      local_8 = FUN_637fd3d0(this,2);
      bVar1 = FUN_637fd5c0((int)this);
      local_c = CONCAT31(extraout_var_04,bVar1);
      param_2[4] = local_c + param_2[3];
      FUN_637fd3d0(this,2);
    }
  }
  else {
    *param_2 = 1;
    iVar2 = FUN_637fddc0(this,(int *)&local_8,&local_c);
    if (iVar2 == 0) {
      return 1;
    }
    param_2[1] = local_8;
    param_2[3] = local_c;
    iVar2 = FUN_637fddc0(this,(int *)&local_8,&local_c);
    if (iVar2 == 0) {
      return 1;
    }
    param_2[2] = local_8 + param_2[1];
    iVar2 = FUN_637fddc0(this,(int *)&local_8,&local_c);
    if (iVar2 == 0) {
      return 1;
    }
    param_2[4] = local_c + param_2[3];
    iVar2 = FUN_637fddc0(this,(int *)&local_8,&local_c);
    if (iVar2 == 0) {
      return 1;
    }
    uVar3 = FUN_637fd3d0(this,2);
    param_2[5] = uVar3;
    if (3 < (int)uVar3) {
      return 1;
    }
    if (uVar3 == 0) {
      uVar3 = FUN_637fd3d0(this,8);
      *(char *)(param_2 + 6) = (char)uVar3;
      bVar1 = FUN_637fd5c0((int)this);
      if (CONCAT31(extraout_var,bVar1) != 1) {
        return 1;
      }
      uVar3 = FUN_637fd3d0(this,8);
      *(char *)((int)param_2 + 0x19) = (char)uVar3;
      bVar1 = FUN_637fd5c0((int)this);
      if (CONCAT31(extraout_var_00,bVar1) != 1) {
        return 1;
      }
      uVar3 = FUN_637fd3d0(this,8);
      *(char *)((int)param_2 + 0x1a) = (char)uVar3;
      return 0;
    }
  }
  return 0;
}


