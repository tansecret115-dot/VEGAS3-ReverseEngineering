/* Module: rmme3260.dll
   Function: FUN_6625d8e0
   Address: 6625d8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625d8e0(void *this,int *param_1,undefined4 param_2)

{
  if (*(int **)((int)this + 0x36) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x36) + 0xc))();
    if (*(int **)((int)this + 0x36) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x36) + 0x20))();
      *(undefined4 *)((int)this + 0x36) = 0;
    }
  }
  *(int **)((int)this + 0x36) = param_1;
  (**(code **)(*param_1 + 0x1c))();
  *(undefined4 *)((int)this + 0x8c) = 1;
  *(undefined4 *)((int)this + 0x94) = param_2;
  return 0;
}


