/* Module: rv203260.dll
   Function: FUN_638a7f90
   Address: 638a7f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638a7f90(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x76) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x76))(param_1,(int)this + 0x9a);
    return uVar1;
  }
  return 0x6f;
}


