/* Module: erv23260.dll
   Function: FUN_637fbad0
   Address: 637fbad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637fbad0(void *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  
  bVar2 = FUN_637fd5c0((int)this);
  *param_1 = (uint)(CONCAT31(extraout_var,bVar2) != 0);
  bVar2 = FUN_637fd5c0((int)this);
  *param_2 = (uint)(CONCAT31(extraout_var_00,bVar2) != 0);
  bVar2 = FUN_637fd5c0((int)this);
  *param_3 = (uint)(CONCAT31(extraout_var_01,bVar2) != 0);
  bVar2 = FUN_637fd5c0((int)this);
  *param_4 = (uint)(CONCAT31(extraout_var_02,bVar2) != 0);
  bVar2 = FUN_637fd5c0((int)this);
  uVar1 = (uint)(CONCAT31(extraout_var_03,bVar2) != 0);
  *param_5 = uVar1;
  if ((uVar1 != 0) && (*param_1 == 0)) {
    return 0;
  }
  return 1;
}


