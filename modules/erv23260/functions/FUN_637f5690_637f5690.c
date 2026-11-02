/* Module: erv23260.dll
   Function: FUN_637f5690
   Address: 637f5690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5690(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 1;
  do {
    iVar1 = FUN_637f5e50(this,local_8);
    if (iVar1 != 0) {
      iVar1 = FUN_637f5740((int)this);
      if (iVar1 < *param_2) {
        *param_2 = iVar1;
        FUN_637f5870(this,param_3);
        *param_1 = 2;
      }
    }
    local_8 = local_8 * 2;
  } while (local_8 < 9);
  if ((*param_1 == 2) ||
     ((((*(int *)((int)this + 4) == 0x15 || (*(int *)((int)this + 4) == 0x16)) &&
       (*(int *)((int)this + 0x38) == 0)) && (*(int *)((int)this + 0xa0) * 0x80 < *param_2)))) {
    FUN_637f6450((int)this);
    iVar1 = FUN_637f5740((int)this);
    if (iVar1 < *param_2) {
      *param_2 = iVar1;
      FUN_637f5870(this,param_3);
      *param_1 = 3;
    }
  }
  return;
}


