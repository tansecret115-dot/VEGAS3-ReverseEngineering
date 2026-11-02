/* Module: sfppack1.dll
   Function: FUN_5cdfe501
   Address: 5cdfe501
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5cdfe501(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0x80040209;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}


