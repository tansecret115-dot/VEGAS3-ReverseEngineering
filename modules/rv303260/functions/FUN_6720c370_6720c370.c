/* Module: rv303260.dll
   Function: FUN_6720c370
   Address: 6720c370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6720c370(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x8a) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x8a))
                      (*(undefined4 *)((int)this + 0xea),param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7);
    return uVar1;
  }
  return 0x6f;
}


