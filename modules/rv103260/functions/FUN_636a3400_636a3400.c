/* Module: rv103260.dll
   Function: FUN_636a3400
   Address: 636a3400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a3400(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x80) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x80))(param_1,param_2,1);
    return uVar1;
  }
  return 0x6f;
}


