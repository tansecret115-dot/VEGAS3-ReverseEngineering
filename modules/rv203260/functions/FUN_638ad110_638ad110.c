/* Module: rv203260.dll
   Function: FUN_638ad110
   Address: 638ad110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638ad110(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x8e) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x8e))(*(undefined4 *)((int)this + 0x156),param_1,param_2);
    return uVar1;
  }
  return 0x6f;
}


