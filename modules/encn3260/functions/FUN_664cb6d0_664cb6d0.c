/* Module: encn3260.dll
   Function: FUN_664cb6d0
   Address: 664cb6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cb6d0(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((this != (void *)0x0) && (param_1 != (int *)0x0)) {
    if (*(void **)((int)this + 0x14) != (void *)0x0) {
      bVar1 = FUN_664c3fe0(*(void **)((int)this + 0x14),param_1);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        (**(code **)(*param_1 + 0x20))();
        if (*(short *)((int)this + 0x18) != 0) {
          *(short *)((int)this + 0x18) = *(short *)((int)this + 0x18) + -1;
        }
      }
    }
    FUN_664cb530(this);
    return 0;
  }
  return 0x80004005;
}


