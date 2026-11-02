/* Module: erv23260.dll
   Function: FUN_637fddc0
   Address: 637fddc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fddc0(void *this,int *param_1,int *param_2)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  undefined3 extraout_var_01;
  int iVar3;
  int iVar4;
  
  bVar1 = FUN_637fd5c0((int)this);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    iVar3 = 0;
    *param_1 = 0;
  }
  else {
    iVar3 = 1;
    uVar2 = FUN_637fd3d0(this,2);
    while ((uVar2 & 1) != 0) {
      iVar3 = (uVar2 >> 1 & 1) + iVar3 * 2;
      uVar2 = FUN_637fd3d0(this,2);
    }
    if ((uVar2 & 2) != 0) {
      iVar3 = -iVar3;
    }
    *param_1 = iVar3;
  }
  bVar1 = FUN_637fd5c0((int)this);
  if (CONCAT31(extraout_var_00,bVar1) == 1) {
    iVar4 = 0;
    *param_2 = 0;
  }
  else {
    iVar4 = 1;
    uVar2 = FUN_637fd3d0(this,2);
    while ((uVar2 & 1) != 0) {
      iVar4 = (uVar2 >> 1 & 1) + iVar4 * 2;
      uVar2 = FUN_637fd3d0(this,2);
    }
    if ((uVar2 & 2) != 0) {
      iVar4 = -iVar4;
    }
    *param_2 = iVar4;
  }
  if (((iVar3 == 1) && (iVar4 == 1)) &&
     (bVar1 = FUN_637fd5c0((int)this), CONCAT31(extraout_var_01,bVar1) == 0)) {
    return 0;
  }
  return 1;
}


