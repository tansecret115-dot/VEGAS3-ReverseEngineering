/* Module: rv203260.dll
   Function: FUN_638a7ff0
   Address: 638a7ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a7ff0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x7e) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x7e))(param_1,*(undefined4 *)((int)this + 0x9a));
    return uVar1;
  }
  return 0x6f;
}


