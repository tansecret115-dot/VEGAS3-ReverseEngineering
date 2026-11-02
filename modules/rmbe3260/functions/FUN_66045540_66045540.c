/* Module: rmbe3260.dll
   Function: FUN_66045540
   Address: 66045540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66045540(void *this,int param_1)

{
  if (param_1 != 0) {
    *(byte *)((int)this + 0x46a) = *(byte *)((int)this + 0x46a) | 4;
  }
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0x4c))(*(undefined1 *)((int)this + 0x46a));
  }
  return;
}


