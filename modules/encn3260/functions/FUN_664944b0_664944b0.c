/* Module: encn3260.dll
   Function: FUN_664944b0
   Address: 664944b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664944b0(void *this,uint param_1)

{
  if (*(int *)((int)this + 0x30) != 0) {
    FUN_66493c20(this,param_1);
    return;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x20))(*(int **)((int)this + 0x14),0,param_1);
  return;
}


