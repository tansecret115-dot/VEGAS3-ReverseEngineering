/* Module: erv23260.dll
   Function: FUN_637fbb50
   Address: 637fbb50
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall
FUN_637fbb50(void *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
            uint *param_6,uint *param_7,uint *param_8,uint *param_9,uint *param_10,uint *param_11,
            uint *param_12)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  
  uVar2 = FUN_637fd3d0(this,3);
  *param_1 = uVar2;
  if ((uVar2 != 0) && (uVar2 != 7)) {
    bVar1 = FUN_637fd5c0((int)this);
    uVar2 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
    *param_2 = uVar2;
    if (uVar2 == 0) {
      bVar1 = FUN_637fd5c0((int)this);
      *param_3 = (uint)(CONCAT31(extraout_var_00,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_4 = (uint)(CONCAT31(extraout_var_01,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_5 = (uint)(CONCAT31(extraout_var_02,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_6 = (uint)(CONCAT31(extraout_var_03,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_7 = (uint)(CONCAT31(extraout_var_04,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_8 = (uint)(CONCAT31(extraout_var_05,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_9 = (uint)(CONCAT31(extraout_var_06,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_10 = (uint)(CONCAT31(extraout_var_07,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_11 = (uint)(CONCAT31(extraout_var_08,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      *param_12 = (uint)(CONCAT31(extraout_var_09,bVar1) != 0);
      bVar1 = FUN_637fd5c0((int)this);
      if (CONCAT31(extraout_var_10,bVar1) == 1) {
        uVar2 = FUN_637fd3d0(this,3);
        return (bool)('\x01' - (uVar2 != 0));
      }
    }
  }
  return false;
}


