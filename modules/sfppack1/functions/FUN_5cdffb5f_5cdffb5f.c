/* Module: sfppack1.dll
   Function: FUN_5cdffb5f
   Address: 5cdffb5f
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cdffb5f(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = this;
  if (*(int *)(*(int *)((int)this + 0x8c) + 200) == 0) {
    iVar2 = FUN_5cdffa09(this,param_1,&local_8);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*(int *)this + 0x24))(param_1,local_8);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          piVar1 = *(int **)(*(int *)((int)this + 0x90) + 0x9c);
          iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,local_8);
          *(undefined4 *)((int)this + 0x54) = 0;
        }
        else if (iVar2 == 1) {
          (**(code **)(*local_8 + 8))(local_8);
          *(undefined4 *)((int)this + 0x54) = 1;
          if (*(int *)((int)this + 0x58) == 0) {
            FUN_5cdfd3b8(this,0xb,0,0);
            *(undefined4 *)((int)this + 0x58) = 1;
          }
          return 0;
        }
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)((int)this + 0x90) + 0x9c);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
  }
  return iVar2;
}


