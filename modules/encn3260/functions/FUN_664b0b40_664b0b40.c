/* Module: encn3260.dll
   Function: FUN_664b0b40
   Address: 664b0b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_664b0b40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  if (*(code **)((int)this + 300) != (code *)0x0) {
    (**(code **)((int)this + 300))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


