/* Module: sfppack3.dll
   Function: FUN_5cc46400
   Address: 5cc46400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cc46400(void *this,undefined4 param_1)

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


