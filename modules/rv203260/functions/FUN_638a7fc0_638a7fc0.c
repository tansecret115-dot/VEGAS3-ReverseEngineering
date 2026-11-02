/* Module: rv203260.dll
   Function: FUN_638a7fc0
   Address: 638a7fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_638a7fc0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x72) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x72))
                      (param_1,param_2,param_3,param_4,*(undefined4 *)((int)this + 0x9a));
    return uVar1;
  }
  return 0x6f;
}


