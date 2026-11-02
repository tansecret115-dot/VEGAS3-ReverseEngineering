/* Module: rmbe3260.dll
   Function: FUN_66042750
   Address: 66042750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66042750(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 8) == (code *)0x0) {
    return 0x80004005;
  }
  uVar1 = (**(code **)((int)this + 8))(param_1);
  return uVar1;
}


