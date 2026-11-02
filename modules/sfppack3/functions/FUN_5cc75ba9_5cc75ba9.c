/* Module: sfppack3.dll
   Function: FUN_5cc75ba9
   Address: 5cc75ba9
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5cc75ba9(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xa0) + 0x50))(1,param_1);
  if (-1 < iVar1) {
    FUN_5cc73c7b(this);
  }
  return;
}


