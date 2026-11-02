/* Module: encn3260.dll
   Function: FUN_664b14e0
   Address: 664b14e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664b14e0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x4e) == 10) {
    return 0;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x4a6) == 1) {
      *(undefined4 *)((int)this + 0x4a2) = 1;
      (**(code **)(**(int **)((int)this + 0x3a) + 0x40))(*(int **)((int)this + 0x3a));
      FUN_664b22a0(this);
      *(undefined4 *)((int)this + 0x4a6) = 0;
    }
  }
  else if (*(int *)((int)this + 0x4a2) == 1) {
    *(undefined4 *)((int)this + 0x4a2) = 0;
    (**(code **)(**(int **)((int)this + 0x3a) + 0x40))(*(int **)((int)this + 0x3a));
    *(undefined4 *)((int)this + 0x4a6) = 1;
    return 1;
  }
  return 1;
}


