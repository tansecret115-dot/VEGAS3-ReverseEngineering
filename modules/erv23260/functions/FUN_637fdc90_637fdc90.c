/* Module: erv23260.dll
   Function: FUN_637fdc90
   Address: 637fdc90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fdc90(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar3;
  
  puVar1 = param_2;
  *param_2 = 0;
  if (param_1 == 3) {
    bVar2 = FUN_637fd4b0(this,7,0x63833528,(uint *)&param_2);
    *param_3 = CONCAT31(extraout_var_01,bVar2);
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = FUN_637fd3d0(this,2);
      if (uVar3 != 1) {
        return 0;
      }
      *puVar1 = 1;
      return 1;
    }
  }
  else if (param_1 == 5) {
    bVar2 = FUN_637fd4b0(this,8,0x638335a8,(uint *)&param_2);
    *param_3 = CONCAT31(extraout_var,bVar2);
    if (param_2 == (undefined4 *)0x0) {
      bVar2 = FUN_637fd5c0((int)this);
      if (CONCAT31(extraout_var_00,bVar2) == 0) {
        return 0;
      }
      *puVar1 = 1;
      return 1;
    }
  }
  return 1;
}


