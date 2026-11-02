/* Module: rv103260.dll
   Function: FUN_636a5200
   Address: 636a5200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_636a5200(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x9a) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x9a))
                      (param_1,param_2,param_3,param_4,param_5,*(undefined4 *)((int)this + 0x70));
    return uVar1;
  }
  return 0x6f;
}


