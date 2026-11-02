/* Module: rmme3260.dll
   Function: FUN_66246090
   Address: 66246090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66246090(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x140) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x140))(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}


