/* Module: encn3260.dll
   Function: FUN_664b0a00
   Address: 664b0a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_664b0a00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(code **)((int)this + 0x10c) != (code *)0x0) {
    (**(code **)((int)this + 0x10c))(param_1,param_2,param_3,param_4);
  }
  return;
}


