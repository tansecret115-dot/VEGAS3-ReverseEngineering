/* Module: sfppack1.dll
   Function: FUN_5cdce2d0
   Address: 5cdce2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cdce2d0(void *this,undefined4 param_1)

{
  int iVar1;
  
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


