/* Module: erv13260.dll
   Function: FUN_635f1f80
   Address: 635f1f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_635f1f80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  if (*(code **)((int)this + 0x10) != (code *)0x0) {
    (**(code **)((int)this + 0x10))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


