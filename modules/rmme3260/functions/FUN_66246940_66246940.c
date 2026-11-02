/* Module: rmme3260.dll
   Function: FUN_66246940
   Address: 66246940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66246940(void *this,int param_1)

{
  if (*(int *)((int)this + 0x4e) == 10) {
    return 0;
  }
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x4a6) == 1) {
      *(undefined4 *)((int)this + 0x4a2) = 1;
      (**(code **)(**(int **)((int)this + 0x3a) + 0x40))(*(int **)((int)this + 0x3a));
      FUN_66247740(this);
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


