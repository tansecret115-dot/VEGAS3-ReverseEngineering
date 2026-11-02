/* Module: rmbe3260.dll
   Function: FUN_6603eab0
   Address: 6603eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603eab0(void *this,int param_1)

{
  if (*(undefined4 **)((int)this + 0xa8) != (undefined4 *)0x0) {
    FUN_6603c1b0(*(undefined4 **)((int)this + 0xa8));
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  *(int *)((int)this + 0xa8) = param_1;
  if (param_1 != 0) {
    FUN_6603c1a0(param_1);
  }
  return 0;
}


