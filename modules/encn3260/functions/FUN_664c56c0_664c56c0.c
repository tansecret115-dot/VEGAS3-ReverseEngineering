/* Module: encn3260.dll
   Function: FUN_664c56c0
   Address: 664c56c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c56c0(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 8) + 4))();
  iVar1 = FUN_664c3eb0(*(void **)((int)this + 0xc),param_1,&local_8);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0xc))(param_2);
  }
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(**(int **)((int)this + 8) + 8))();
  return;
}


