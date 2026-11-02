/* Module: erv23260.dll
   Function: FUN_637fba30
   Address: 637fba30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637fba30(void *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  uint uVar2;
  
  bVar1 = FUN_637fd5c0((int)this);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    bVar1 = FUN_637fd5c0((int)this);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      if (*(int *)((int)this + 0x60) == 0) {
        return 1;
      }
      if (*(int *)((int)this + 0x48) == 0x33363248) {
        return 8;
      }
    }
    bVar1 = FUN_637fd5c0((int)this);
    *param_1 = (uint)(CONCAT31(extraout_var_01,bVar1) != 0);
    bVar1 = FUN_637fd5c0((int)this);
    *param_2 = (uint)(CONCAT31(extraout_var_02,bVar1) != 0);
    bVar1 = FUN_637fd5c0((int)this);
    *param_3 = (uint)(CONCAT31(extraout_var_03,bVar1) != 0);
    uVar2 = FUN_637fd3d0(this,3);
    *param_4 = uVar2;
    if ((uVar2 != 0) && (uVar2 != 6)) {
      return 0;
    }
  }
  return 1;
}


