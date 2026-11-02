/* Module: encn3260.dll
   Function: FUN_664b0b00
   Address: 664b0b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_664b0b00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  if (*(code **)((int)this + 0x128) != (code *)0x0) {
    (**(code **)((int)this + 0x128))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return;
}


