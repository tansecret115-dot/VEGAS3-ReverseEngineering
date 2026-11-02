/* Module: erv23260.dll
   Function: FUN_637f55f0
   Address: 637f55f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f55f0(void *this,undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = FUN_637f5740((int)this);
  *param_2 = iVar1;
  FUN_637f5870(this,param_3);
  *param_1 = 0;
  FUN_637f59b0(this);
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x3c)) {
    piVar2 = (int *)((int)this + 0x40);
    do {
      FUN_637f5c70(this,*piVar2,(undefined *)piVar2[1]);
      iVar1 = FUN_637f5740((int)this);
      if (iVar1 < *param_2) {
        *param_4 = *piVar2;
        param_4[1] = piVar2[1];
        *param_2 = iVar1;
        FUN_637f5870(this,param_3);
        *param_1 = 1;
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 2;
    } while (local_8 < *(int *)((int)this + 0x3c));
  }
  return;
}


