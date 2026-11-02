/* Module: auth3260.dll
   Function: FUN_627a1770
   Address: 627a1770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a1770(void *this,void *param_1)

{
  FUN_627a17f0(param_1,this);
  FUN_627a1800(param_1,*(undefined4 *)((int)this + 4));
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_627a17f0(*(void **)((int)this + 4),param_1);
  }
  *(void **)((int)this + 4) = param_1;
  return;
}


