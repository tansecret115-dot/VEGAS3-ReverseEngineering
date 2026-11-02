/* Module: rmbe3260.dll
   Function: FUN_6605c610
   Address: 6605c610
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6605c610(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == *(int **)((int)this + 4)) {
    *(int *)((int)this + 4) = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  if (param_1 == *(int **)((int)this + 8)) {
    *(int *)((int)this + 8) = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = param_1[1];
  }
  (**(code **)(*(int *)this + 0x20))(param_1);
  return iVar1;
}


