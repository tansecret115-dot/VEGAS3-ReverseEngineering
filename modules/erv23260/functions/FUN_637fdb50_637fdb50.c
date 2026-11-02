/* Module: erv23260.dll
   Function: FUN_637fdb50
   Address: 637fdb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fdb50(void *this,undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  puVar1 = param_2;
  *param_2 = 0;
  switch(param_1) {
  case 0:
    uVar4 = FUN_637fd430(this,6,0x63833008,(uint *)&param_2);
    *param_3 = uVar4;
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = FUN_637fd3d0(this,3);
      if (uVar4 != 1) {
        return 0;
      }
      *puVar1 = 1;
      return 1;
    }
    break;
  case 1:
  case 2:
    uVar4 = FUN_637fd430(this,9,0x63833088,(uint *)&param_2);
    puVar2 = param_3;
    *param_3 = uVar4;
    if (param_2 == (undefined4 *)0x1) {
      *puVar1 = 1;
      return 1;
    }
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = FUN_637fd430(this,4,0x63833488,(uint *)&param_2);
      *puVar2 = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    break;
  case 4:
    bVar3 = FUN_637fd4b0(this,4,0x638336a8,(uint *)&param_2);
    puVar2 = param_3;
    *param_3 = CONCAT31(extraout_var,bVar3);
    if (param_2 == (undefined4 *)0x0) {
      bVar3 = FUN_637fd4b0(this,4,0x638336b8,(uint *)&param_2);
      *puVar2 = CONCAT31(extraout_var_00,bVar3) + 4;
      if (param_2 == (undefined4 *)0x0) {
        bVar3 = FUN_637fd5c0((int)this);
        if (CONCAT31(extraout_var_01,bVar3) == 0) {
          return 0;
        }
        *puVar1 = 1;
        return 1;
      }
    }
  }
  return 1;
}


