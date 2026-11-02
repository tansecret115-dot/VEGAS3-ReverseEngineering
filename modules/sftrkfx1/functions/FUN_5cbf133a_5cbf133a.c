/* Module: sftrkfx1.dll
   Function: FUN_5cbf133a
   Address: 5cbf133a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cbf133a(void *this,int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (param_1 == *(int **)((int)this + 100)) {
    uVar1 = 0x80040208;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


