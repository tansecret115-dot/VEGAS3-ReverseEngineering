/* Module: rmbe3260.dll
   Function: FUN_660454e0
   Address: 660454e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660454e0(void *this,int param_1)

{
  if (param_1 != 0) {
    *(byte *)((int)this + 0x46a) = *(byte *)((int)this + 0x46a) | 1;
  }
  if (*(int **)((int)this + 4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 4) + 0x4c))(*(undefined1 *)((int)this + 0x46a));
  }
  return;
}


