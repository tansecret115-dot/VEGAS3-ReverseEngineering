/* Module: rv103260.dll
   Function: FUN_636a3520
   Address: 636a3520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a3520(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x70) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x70))(param_1,param_2,*(undefined4 *)((int)this + 0x90));
    return uVar1;
  }
  return 0x6f;
}


