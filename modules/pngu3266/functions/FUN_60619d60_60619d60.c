/* Module: pngu3266.dll
   Function: FUN_60619d60
   Address: 60619d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_60619d60(void *this,uint param_1)

{
  if (*(code **)this != (code *)0x0) {
    (**(code **)this)(param_1,*(undefined4 *)((int)this + 0xc));
    return;
  }
  FUN_60619d90(this,param_1);
  return;
}


