/* Module: sfppack2.dll
   Function: FUN_5cd3f099
   Address: 5cd3f099
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cd3f099(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xa0) + 0x50))(1,param_1);
  if (-1 < iVar1) {
    FUN_5cd3d16b(this);
  }
  return;
}


