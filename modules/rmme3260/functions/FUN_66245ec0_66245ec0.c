/* Module: rmme3260.dll
   Function: FUN_66245ec0
   Address: 66245ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66245ec0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(code **)((int)this + 0x114) != (code *)0x0) {
    uVar1 = (**(code **)((int)this + 0x114))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}


