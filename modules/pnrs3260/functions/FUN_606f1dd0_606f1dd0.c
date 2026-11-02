/* Module: pnrs3260.dll
   Function: FUN_606f1dd0
   Address: 606f1dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_606f1dd0(void *this,uint param_1)

{
  if (*(code **)this != (code *)0x0) {
    (**(code **)this)(param_1,*(undefined4 *)((int)this + 0xc));
    return;
  }
  FUN_606f1e00(this,param_1);
  return;
}


