/* Module: rmme3260.dll
   Function: FUN_66246000
   Address: 66246000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_66246000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  if (*(code **)((int)this + 0x134) != (code *)0x0) {
    (**(code **)((int)this + 0x134))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


