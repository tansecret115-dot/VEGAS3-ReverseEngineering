/* Module: erv23260.dll
   Function: FUN_637fbc70
   Address: 637fbc70
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_637fbc70(void *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  
  uVar2 = FUN_637fd3d0(this,3);
  *param_1 = uVar2;
  bVar1 = FUN_637fd5c0((int)this);
  *param_2 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
  bVar1 = FUN_637fd5c0((int)this);
  *param_3 = (uint)(CONCAT31(extraout_var_00,bVar1) != 0);
  bVar1 = FUN_637fd5c0((int)this);
  *param_4 = (uint)(CONCAT31(extraout_var_01,bVar1) != 0);
  uVar2 = FUN_637fd3d0(this,2);
  if (uVar2 != 0) {
    return false;
  }
  bVar1 = FUN_637fd5c0((int)this);
  return (bool)('\x01' - (CONCAT31(extraout_var_02,bVar1) != 1));
}


