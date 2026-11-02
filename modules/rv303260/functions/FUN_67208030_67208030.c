/* Module: rv303260.dll
   Function: FUN_67208030
   Address: 67208030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_67208030(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x76) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x76))(param_1,(int)this + 0x9a);
    return uVar1;
  }
  return 0x6f;
}


