/* Module: rmme3260.dll
   Function: FUN_66257300
   Address: 66257300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66257300(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int **)this != (int *)0x0) && (param_1 != 0)) {
    uVar1 = (**(code **)(**(int **)this + 0x30))(param_1,param_2);
    return uVar1;
  }
  return 0x80040082;
}


