/* Module: encn3260.dll
   Function: FUN_6648cc70
   Address: 6648cc70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648cc70(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    *(int **)((int)this + 0x18) = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    (**(code **)(*(int *)this + 8))();
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + iVar1;
  (**(code **)(**(int **)((int)this + 0xc) + 0x20))(*(int **)((int)this + 0xc),param_1);
  return;
}


