/* Module: sftrkfx1.dll
   Function: FUN_5cba1ff0
   Address: 5cba1ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cba1ff0(void *this,int *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x300) != 0) && (*(int *)((int)this + 0x304) != 0)) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    FUN_5cba6cd0((int)this + 0xa0);
  }
  iVar1 = (**(code **)(*(int *)this + 0x68))(param_1);
  if (-1 < iVar1) {
    if (iVar1 == 0) {
      iVar1 = (**(code **)(**(int **)((int)this + 0x90) + 0x44))(param_1);
      return iVar1;
    }
    if (iVar1 == 1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


