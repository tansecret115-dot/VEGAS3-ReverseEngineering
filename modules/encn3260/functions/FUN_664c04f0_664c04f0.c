/* Module: encn3260.dll
   Function: FUN_664c04f0
   Address: 664c04f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c04f0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0xc) == *(int *)(*(int *)this + 4)) {
    FUN_664c0410(this);
  }
  if (*(int *)((int)this + 8) == (*(int **)this)[1] + -1) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  *(undefined4 *)(**(int **)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}


