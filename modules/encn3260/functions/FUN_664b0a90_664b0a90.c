/* Module: encn3260.dll
   Function: FUN_664b0a90
   Address: 664b0a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664b0a90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x118) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x118))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}


