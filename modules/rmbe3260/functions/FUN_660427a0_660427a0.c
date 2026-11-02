/* Module: rmbe3260.dll
   Function: FUN_660427a0
   Address: 660427a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660427a0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x10) == (code *)0x0) {
    return 0x80004005;
  }
  uVar1 = (**(code **)((int)this + 0x10))(param_1);
  return uVar1;
}


