/* Module: dnet3260.dll
   Function: FUN_63051fd0
   Address: 63051fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63051fd0(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(code **)((int)this + 0x36) != (code *)0x0) {
    (**(code **)((int)this + 0x36))(*(undefined4 *)((int)this + 0x12),param_1,param_2);
  }
  return;
}


