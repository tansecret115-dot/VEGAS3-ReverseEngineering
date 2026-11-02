/* Module: rmme3260.dll
   Function: FUN_662173c0
   Address: 662173c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662173c0(void *this,int param_1)

{
  if (param_1 < 0) {
    *(undefined4 *)((int)this + 0x334) = 0;
    (**(code **)(**(int **)((int)this + 0x32c) + 0x1c))(*(int **)((int)this + 0x32c),param_1);
    return 0;
  }
  if (*(int *)((int)this + 0x334) == 6) {
    *(undefined4 *)((int)this + 0x334) = 7;
  }
  FUN_66216ba0(this);
  return 0;
}


