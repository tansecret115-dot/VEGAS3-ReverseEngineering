/* Module: erv23260.dll
   Function: FUN_637fc490
   Address: 637fc490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_637fc490(void *this,int *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = FUN_637fd3d0(this,5);
  *param_2 = uVar1;
  if ((int)uVar1 < 1) {
    return 0;
  }
  uVar1 = FUN_637fd3d0(this,2);
  if (*param_1 == 0) {
    *param_1 = 1;
    *param_3 = uVar1;
  }
  else if (uVar1 != *param_3) {
    return 0;
  }
  uVar1 = FUN_637fd3d0(this,5);
  *param_4 = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *param_5 = uVar1;
  return 1;
}


