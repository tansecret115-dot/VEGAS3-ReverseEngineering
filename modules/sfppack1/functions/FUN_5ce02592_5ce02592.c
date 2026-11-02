/* Module: sfppack1.dll
   Function: FUN_5ce02592
   Address: 5ce02592
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5ce02592(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)this + 0x8c) + 200) == 0) {
    if ((*(int *)(*(int *)((int)this + 0x8c) + 0x9c) == (*(int **)((int)this + 0x90))[0x26]) ||
       (param_1 = FUN_5ce023e4(this,param_1), param_1 != (int *)0x0)) {
      iVar1 = (**(code **)(*(int *)this + 0x68))(param_1);
      if (iVar1 < 0) {
        if (*(int *)(*(int *)((int)this + 0x8c) + 0x9c) !=
            *(int *)(*(int *)((int)this + 0x90) + 0x98)) {
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
      else {
        if (iVar1 == 0) {
          iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))(param_1);
        }
        else if (iVar1 == 1) {
          iVar1 = 0;
          *(undefined4 *)((int)this + 0x54) = 1;
          if (*(int *)((int)this + 0x58) == 0) {
            FUN_5cdfd3b8(this,0xb,0,0);
            *(undefined4 *)((int)this + 0x58) = 1;
          }
        }
        if (*(int *)(*(int *)((int)this + 0x8c) + 0x9c) !=
            *(int *)(*(int *)((int)this + 0x90) + 0x98)) {
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  else {
    iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))(param_1);
  }
  return iVar1;
}


