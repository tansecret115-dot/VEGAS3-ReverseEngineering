/* Module: mp3plug.dll
   Function: FUN_5f6d39b0
   Address: 5f6d39b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f6d39b0(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x18) + param_1;
  return;
}


